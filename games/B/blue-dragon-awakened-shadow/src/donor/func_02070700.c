/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GetLocalIP from https://github.com/Project-Holon/aletheia src/game/ov009/natify.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef struct SOCInAddr {
    u32 addr;
} SOCInAddr;
typedef struct SOCHostEnt {
    char *name;
    char **aliases;
    s16 addrType;
    s16 length;
    u8 **addrList;
} SOCHostEnt;
extern struct SOCHostEnt *func_0205c444(void);
extern int IsPrivateIP(struct SOCInAddr *addr);
extern unsigned int func_02070700(void);
unsigned int func_02070700(void) {
    int num_local_ips;
    SOCHostEnt *phost;
    SOCInAddr *addr;
    unsigned int localip;

    localip = 0;
    phost   = func_0205c444();
    if (!phost) {
        return 0;
    }
    for (num_local_ips = 0;; num_local_ips++) {
        addr = (SOCInAddr *) phost->addrList[num_local_ips];
        if (!addr) {
            break;
        }
        if (addr->addr != 16777343) {
            localip = *(unsigned int *) addr;
            if (IsPrivateIP((SOCInAddr *) addr)) {
                return localip;
            }
        }
    }
    return localip;
}
