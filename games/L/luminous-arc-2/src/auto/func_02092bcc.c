/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02092bcc from https://github.com/ntrtwl/NitroDWC libraries/bm/src/util_wifiidtool.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long long int u64;
typedef int BOOL;
extern const u16(*ctrdgi_fl_maxtime);
typedef struct DWCWiFiInfo {
    u64 attestedUserId;
    u64 notAttestedId;
    u16 pass;
    u16 randomHistory;
} DWCWiFiInfo;
extern void func_020917c4(DWCWiFiInfo *buf);
extern BOOL func_0209189c(const DWCWiFiInfo *info, void *work);
BOOL func_02092bcc(DWCWiFiInfo *wifiinfo, void *work) {
    DWCWiFiInfo wifiinfotemp;
    func_020917c4(&wifiinfotemp);

    wifiinfo->attestedUserId = wifiinfo->notAttestedId;
    wifiinfo->notAttestedId  = wifiinfotemp.notAttestedId;

    return func_0209189c(wifiinfo, work) != 0;
}
