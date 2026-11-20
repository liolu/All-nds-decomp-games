/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020922a8 from https://github.com/ntrtwl/NitroDWC libraries/bm/src/dwc_backup.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
extern void func_0200766c(const void *src, void *dest, u32 size);
extern const u16(*ctrdgi_fl_maxtime);
typedef struct DWCWiFiInfo {
    u64 attestedUserId;
    u64 notAttestedId;
    u16 pass;
    u16 randomHistory;
} DWCWiFiInfo;
extern const u8 *func_020922a8(const DWCWiFiInfo *info);
extern u8 data_02170c8c[14];
const u8 *func_020922a8(const DWCWiFiInfo *info) {
    u64 tmp = info->notAttestedId;

    func_0200766c(info, &data_02170c8c, 5);
    data_02170c8c[5] = ((info->attestedUserId >> 40) & 7) | ((tmp & 0x1F) << 3);

    tmp >>= 5;
    func_0200766c(&tmp, &data_02170c8c[6], 4);

    data_02170c8c[10] = (tmp >> 32 & 0x3F) | ((info->pass & 3) << 6);

    data_02170c8c[11] = info->pass >> 2;

    func_0200766c(&info->randomHistory, &data_02170c8c[12], 2);
    return data_02170c8c;
}
