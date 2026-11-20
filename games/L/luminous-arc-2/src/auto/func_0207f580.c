/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207f580 from https://github.com/ntrtwl/NitroDWC libraries/account/src/dwc_account.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef int BOOL;
typedef struct {
    u64 uId;
    u64 notAttestedId;
    u32 flag;
} DWCAuthWiFiId;
extern void func_02092dbc(DWCAuthWiFiId *id);
typedef struct DWCstAccFlag {
    u32 flags;
    u32 reserved;
    u32 reserved1;
} DWCAccFlag;
typedef struct DWCstAccLoginId {
    u32 id_data;
    u32 userid_lo32;
    u32 playerid;
} DWCAccLoginId;
typedef struct DWCstAccUserData {
    int size;
    DWCAccLoginId pseudo;
    DWCAccLoginId authentic;
    int gs_profile_id;
    int flag;
    u32 gamecode;
    int reserved[5];
    u32 crc32;
} DWCAccUserData;
extern BOOL func_0207f580(const DWCAccUserData *userdata);
extern u64 func_0207ee5c(const DWCAccLoginId *data);
u64 func_0207ee5c(const DWCAccLoginId *userdata);
u32 func_0207eef4(const DWCAccFlag *userdata);
BOOL func_0207f580(const DWCAccUserData *userdata) {
    DWCAuthWiFiId authid;

    if (func_0207eef4((DWCAccFlag *) &userdata->authentic) == 0) {
        return 1;
    }

    func_02092dbc(&authid);

    if (!authid.flag) {
        return 0;
    }

    return (func_0207ee5c(&userdata->authentic) == authid.uId) ? 1 : 0;
}
