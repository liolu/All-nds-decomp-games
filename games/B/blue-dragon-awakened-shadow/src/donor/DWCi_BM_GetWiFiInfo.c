/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_BM_GetWiFiInfo from https://github.com/ntrtwl/NitroDWC libraries/bm/src/dwc_backup.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
extern void MI_CpuCopy8(const void *src, void *dest, u32 size);
extern const u16(*ctrdgi_fl_maxtime);
typedef struct DWCWiFiInfo {
    u64 attestedUserId;
    u64 notAttestedId;
    u16 pass;
    u16 randomHistory;
} DWCWiFiInfo;
extern void DWCi_BM_GetWiFiInfo(DWCWiFiInfo *buf);
extern u8 Wifi[14];
void DWCi_BM_GetWiFiInfo(DWCWiFiInfo *buf) {
    MI_CpuCopy8(&Wifi, &buf->attestedUserId, 6);
    buf->attestedUserId &= 0x7FFFFFFFFFF;

    MI_CpuCopy8(&Wifi[5], &buf->notAttestedId, 6);
    buf->notAttestedId >>= 3;
    buf->notAttestedId &= 0x7FFFFFFFFFF;

    MI_CpuCopy8(&Wifi[10], &buf->pass, 2);
    buf->pass >>= 6;
    buf->pass &= 0x3FF;

    MI_CpuCopy8(&Wifi[12], &buf->randomHistory, 2);
}
