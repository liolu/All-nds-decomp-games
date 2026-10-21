/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0205e828 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/wm/wm_gameinfo.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u16 vu16;
typedef s32 BOOL;
extern void func_02005ac8(const void *addr, u32 count);
extern void func_0200766c(register const void *src, register void *dest, register u32 count);
typedef struct UnkWmBssDesc {
    u16 length;
    u8 unk_02[0x3a];
    u16 unk_3c;
    u8 unk_3e[6];
    u32 unk_44;
    u8 unk_48[8];
    u8 unk_50[8];
} UnkWmBssDesc;
BOOL func_02018870(UnkWmBssDesc *desc) {
    vu16 info[4];

    if (desc == 0) {
        return 0;
    }
    if (desc->unk_3c == 0) {
        return 0;
    }
    func_0200766c(desc->unk_50, (void *) info, sizeof(info));
    func_02005ac8((void *) info, sizeof(info));
    if (desc->unk_44 == 0 && (info[0] == 0x2348 || info[0] == 0xBD8A) && info[3] == 4) {
        return 1;
    }
    return 0;
}
