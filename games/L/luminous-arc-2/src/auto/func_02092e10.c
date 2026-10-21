/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02092e10 from https://github.com/ntrtwl/NitroDWC libraries/bm/src/util_wifiidtool.c (license: none),
 * reused by tools/donor_match.py */
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
extern BOOL func_02092e10(void);
BOOL func_02092e10(void) {
    DWCWiFiInfo wifiinfo;
    func_020917c4(&wifiinfo);

    return wifiinfo.notAttestedId == 0 && wifiinfo.attestedUserId == 0;
}
