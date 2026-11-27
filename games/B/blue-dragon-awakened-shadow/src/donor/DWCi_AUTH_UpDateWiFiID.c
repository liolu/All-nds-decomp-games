/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_AUTH_UpDateWiFiID from https://github.com/ntrtwl/NitroDWC libraries/bm/src/util_wifiidtool.c (license: none), reused by
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
extern void DWCi_BM_GetWiFiInfo(DWCWiFiInfo *buf);
extern BOOL DWCi_BM_SetWiFiInfo(const DWCWiFiInfo *info, void *work);
BOOL DWCi_AUTH_UpDateWiFiID(DWCWiFiInfo *wifiinfo, void *work) {
    DWCWiFiInfo wifiinfotemp;
    DWCi_BM_GetWiFiInfo(&wifiinfotemp);

    wifiinfo->attestedUserId = wifiinfo->notAttestedId;
    wifiinfo->notAttestedId  = wifiinfotemp.notAttestedId;

    return DWCi_BM_SetWiFiInfo(wifiinfo, work) != 0;
}
