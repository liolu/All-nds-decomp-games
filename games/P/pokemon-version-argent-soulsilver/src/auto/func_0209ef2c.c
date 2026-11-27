/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0209ef2c from https://github.com/ntrtwl/NitroDWC libraries/bm/src/dwc_backup.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
extern void func_020d4a50(const void *src, void *dest, u32 size);
extern const u16(*ctrdgi_fl_maxtime);
typedef struct DWCWiFiInfo {
    u64 attestedUserId;
    u64 notAttestedId;
    u16 pass;
    u16 randomHistory;
} DWCWiFiInfo;
extern const u8 *func_0209ef2c(const DWCWiFiInfo *info);
extern u8 data_021d43f4[14];
const u8 *func_0209ef2c(const DWCWiFiInfo *info) {
    u64 tmp = info->notAttestedId;

    func_020d4a50(info, &data_021d43f4, 5);
    data_021d43f4[5] = ((info->attestedUserId >> 40) & 7) | ((tmp & 0x1F) << 3);

    tmp >>= 5;
    func_020d4a50(&tmp, &data_021d43f4[6], 4);

    data_021d43f4[10] = (tmp >> 32 & 0x3F) | ((info->pass & 3) << 6);

    data_021d43f4[11] = info->pass >> 2;

    func_020d4a50(&info->randomHistory, &data_021d43f4[12], 2);
    return data_021d43f4;
}
