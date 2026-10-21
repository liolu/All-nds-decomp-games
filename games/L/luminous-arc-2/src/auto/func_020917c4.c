/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020917c4 from https://github.com/ntrtwl/NitroDWC libraries/bm/src/dwc_backup.c (license: none), reused by
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
extern void func_020917c4(DWCWiFiInfo *buf);
extern u8 data_02170c8c[14];
void func_020917c4(DWCWiFiInfo *buf) {
    func_0200766c(&data_02170c8c, &buf->attestedUserId, 6);
    buf->attestedUserId &= 0x7FFFFFFFFFF;

    func_0200766c(&data_02170c8c[5], &buf->notAttestedId, 6);
    buf->notAttestedId >>= 3;
    buf->notAttestedId &= 0x7FFFFFFFFFF;

    func_0200766c(&data_02170c8c[10], &buf->pass, 2);
    buf->pass >>= 6;
    buf->pass &= 0x3FF;

    func_0200766c(&data_02170c8c[12], &buf->randomHistory, 2);
}
