/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_Acc_CheckConsoleUserId from https://github.com/ntrtwl/NitroDWC libraries/account/src/dwc_account.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef int BOOL;
typedef struct {
    u64 uId;
    u64 notAttestedId;
    u32 flag;
} DWCAuthWiFiId;
extern void DWC_Auth_GetId(DWCAuthWiFiId *id);
typedef struct DWCstAccLoginId {
    u32 id_data;
    u32 userid_lo32;
    u32 playerid;
} DWCAccLoginId;
extern u64 DWCi_Acc_GetUserId(const DWCAccLoginId *data);
extern BOOL DWCi_Acc_CheckConsoleUserId(const DWCAccLoginId *loginid);
u64 DWCi_Acc_GetUserId(const DWCAccLoginId *userdata);
BOOL DWCi_Acc_CheckConsoleUserId(const DWCAccLoginId *loginid) {
    DWCAuthWiFiId authid;

    DWC_Auth_GetId(&authid);

    if (authid.flag) {
        return (DWCi_Acc_GetUserId(loginid) == authid.uId) ? 1 : 0;
    } else {
        return (DWCi_Acc_GetUserId(loginid) == authid.notAttestedId) ? 1 : 0;
    }
}
