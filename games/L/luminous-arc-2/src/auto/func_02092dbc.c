/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02092dbc from https://github.com/ntrtwl/NitroDWC libraries/bm/src/util_wifiidtool.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
extern const u16(*ctrdgi_fl_maxtime);
typedef struct DWCWiFiInfo {
    u64 attestedUserId;
    u64 notAttestedId;
    u16 pass;
    u16 randomHistory;
} DWCWiFiInfo;
extern void func_020917c4(DWCWiFiInfo *buf);
typedef struct {
    u64 uId;
    u64 notAttestedId;
    u32 flag;
} DWCAuthWiFiId;
extern void func_02092dbc(DWCAuthWiFiId *id);
void func_02092dbc(DWCAuthWiFiId *id) {
    DWCWiFiInfo wifiinfo;
    func_020917c4(&wifiinfo);

    id->uId           = wifiinfo.attestedUserId;
    id->notAttestedId = wifiinfo.notAttestedId;
    id->flag          = wifiinfo.attestedUserId != 0;
}
