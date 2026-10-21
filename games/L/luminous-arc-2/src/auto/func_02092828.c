/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02092828 from https://github.com/ntrtwl/NitroDWC libraries/bm/src/util_wifiidtool.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
extern void func_0200766c(const void *src, void *dest, u32 size);
extern const u16(*ctrdgi_fl_maxtime);
extern const u8 data_020dded4[16];
extern const u8 data_020ddecc[8];
typedef union DWCUtilUni64 {
    u64 data;
    u32 half[2];
    u8 i[8];
} DWCUtilUni64;
u64 func_02092828(u16 rand, u32 mac, u8 vend, u8 mainunit) {
    DWCUtilUni64 uni64;
    u8 uidtemp[8];
    int i;

    uni64.data = ((u64) mainunit & 3) | ((u64) vend & 1) << 2 | ((u64) mac & 0xFFFFFF) << 3 | ((u64) rand & 0xFFFF) << 27;

    for (i = 0; i < 6; i++) {
        uni64.i[i] ^= 0xD6;
    }

    for (i = 0; i < 5; i++) {
        uni64.i[i] = (data_020dded4[(uni64.i[i] >> 4) & 0xF] << 4) | (data_020dded4[uni64.i[i] & 0xF]);
    }

    func_0200766c(uni64.i, uidtemp, sizeof(uidtemp));

    for (i = 0; i < 5; i++) {
        uni64.i[data_020ddecc[i]] = uidtemp[i];
    }

    uni64.i[7] = 0;
    uni64.i[6] = 0;
    uni64.i[5] &= 7;

    uni64.data = uni64.data << 1;
    uni64.i[0] |= ((uni64.i[5] >> 3) & 1);

    for (i = 0; i < 6; i++) {
        uni64.i[i] ^= 0x67;
    }

    uni64.i[7] = 0;
    uni64.i[6] = 0;
    uni64.i[5] &= 7;

    return uni64.data;
}
