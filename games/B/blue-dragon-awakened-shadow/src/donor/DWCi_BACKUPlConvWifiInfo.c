/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_BACKUPlConvWifiInfo from https://github.com/ntrtwl/NitroDWC libraries/bm/src/dwc_backup.c (license: none), reused by
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
extern const u8 *DWCi_BACKUPlConvWifiInfo(const DWCWiFiInfo *info);
extern u8 Wifi[14];
const u8 *DWCi_BACKUPlConvWifiInfo(const DWCWiFiInfo *info) {
    u64 tmp = info->notAttestedId;

    MI_CpuCopy8(info, &Wifi, 5);
    Wifi[5] = ((info->attestedUserId >> 40) & 7) | ((tmp & 0x1F) << 3);

    tmp >>= 5;
    MI_CpuCopy8(&tmp, &Wifi[6], 4);

    Wifi[10] = (tmp >> 32 & 0x3F) | ((info->pass & 3) << 6);

    Wifi[11] = info->pass >> 2;

    MI_CpuCopy8(&info->randomHistory, &Wifi[12], 2);
    return Wifi;
}
