/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0209fff8 from https://github.com/ntrtwl/NitroDWC libraries/account/src/dwc_account.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef int BOOL;
typedef struct {
    u64 uId;
    u64 notAttestedId;
    u32 flag;
} DWCAuthWiFiId;
extern void func_0209fa40(DWCAuthWiFiId *id);
typedef struct DWCstAccLoginId {
    u32 id_data;
    u32 userid_lo32;
    u32 playerid;
} DWCAccLoginId;
extern u64 func_0209fb74(const DWCAccLoginId *data);
extern BOOL func_0209fff8(const DWCAccLoginId *loginid);
u64 func_0209fb74(const DWCAccLoginId *userdata);
BOOL func_0209fff8(const DWCAccLoginId *loginid) {
    DWCAuthWiFiId authid;

    func_0209fa40(&authid);

    if (authid.flag) {
        return (func_0209fb74(loginid) == authid.uId) ? 1 : 0;
    } else {
        return (func_0209fb74(loginid) == authid.notAttestedId) ? 1 : 0;
    }
}
