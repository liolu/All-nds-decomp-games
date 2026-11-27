/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DetermineNatType from https://github.com/Project-Holon/aletheia src/game/ov009/natify.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef struct _AddressMapping {
    unsigned int privateIp;
    unsigned short privatePort;
    unsigned int publicIp;
    unsigned short publicPort;
} AddressMapping;
typedef enum {
    no_nat,
    firewall_only,
    full_cone,
    restricted_cone,
    port_restricted_cone,
    symmetric,
    unknown
} NatType;
typedef enum {
    promiscuous,
    not_promiscuous,
    port_promiscuous,
    ip_promiscuous,
    promiscuity_not_applicable
} NatPromiscuity;
typedef enum {
    unrecognized,
    private_as_public,
    consistent_port,
    incremental,
    mixed
} NatMappingScheme;
typedef struct NAT {
    char brand[32];
    char model[32];
    char firmware[64];
    int ipRestricted;
    int portRestricted;
    NatPromiscuity promiscuity;
    NatType natType;
    NatMappingScheme mappingScheme;
    AddressMapping mappings[4];
    int qr2Compatible;
} NAT;
extern int abs(int x) __attribute__((const));
extern int DetermineNatType(NAT *nat);
int DetermineNatType(NAT *nat) {
    nat->natType       = unknown;
    nat->promiscuity   = promiscuity_not_applicable;
    nat->qr2Compatible = 1;

    if (nat->mappings[0].publicIp == 0 || nat->mappings[1].publicIp == 0 || nat->mappings[2].publicIp == 0) {
        return 0;
    }

    if (!nat->portRestricted && !nat->ipRestricted && nat->mappings[0].publicIp == nat->mappings[0].privateIp) {
        nat->natType = no_nat;
    } else if (nat->mappings[0].publicIp == nat->mappings[0].privateIp) {
        nat->natType = firewall_only;
    } else {
        if (!nat->ipRestricted && !nat->portRestricted &&
            abs(nat->mappings[2].publicPort - nat->mappings[1].publicPort) >= 1) {
            nat->natType     = symmetric;
            nat->promiscuity = promiscuous;
        } else if (nat->ipRestricted && !nat->portRestricted &&
                   abs(nat->mappings[2].publicPort - nat->mappings[1].publicPort) >= 1) {
            nat->natType     = symmetric;
            nat->promiscuity = port_promiscuous;
        } else if (!nat->ipRestricted && nat->portRestricted &&
                   abs(nat->mappings[2].publicPort - nat->mappings[1].publicPort) >= 1) {
            nat->natType     = symmetric;
            nat->promiscuity = ip_promiscuous;
        } else if (nat->ipRestricted && nat->portRestricted &&
                   abs(nat->mappings[2].publicPort - nat->mappings[1].publicPort) >= 1) {
            nat->natType     = symmetric;
            nat->promiscuity = not_promiscuous;
        } else if (nat->portRestricted) {
            nat->natType = port_restricted_cone;
        } else if (nat->ipRestricted && !nat->portRestricted) {
            nat->natType = restricted_cone;
        } else if (!nat->ipRestricted && !nat->portRestricted) {
            nat->natType = full_cone;
        } else {
            nat->natType = unknown;
        }
    }

    if (nat->mappings[0].publicPort == nat->mappings[0].privatePort &&
        nat->mappings[1].publicPort == nat->mappings[1].privatePort &&
        nat->mappings[2].publicPort == nat->mappings[2].privatePort) {
        nat->mappingScheme = private_as_public;
    } else if (nat->mappings[0].publicPort == nat->mappings[1].publicPort &&
               nat->mappings[1].publicPort == nat->mappings[2].publicPort) {
        nat->mappingScheme = consistent_port;
    } else if (nat->mappings[0].publicPort == nat->mappings[0].privatePort &&
               nat->mappings[2].publicPort - nat->mappings[1].publicPort == 1) {
        nat->mappingScheme = mixed;
    } else if (nat->mappings[2].publicPort - nat->mappings[1].publicPort == 1) {
        nat->mappingScheme = incremental;
    } else {
        nat->mappingScheme = unrecognized;
    }

    if (nat->mappings[3].publicPort != 0 && nat->mappings[0].publicPort != nat->mappings[3].publicPort) {
        nat->qr2Compatible = 0;
    }

    return 1;
}
