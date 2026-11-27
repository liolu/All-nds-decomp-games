/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CTRDGi_ProgramFlashByteLE from https://github.com/ctrl-cheeb-del/pokeheartgold
 * lib/NitroSDK/src/ctrdg/ctrdg_flash_le39fw512.c (license: none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef volatile u8 vu8;
extern const u16(*ctrdgi_fl_maxtime);
extern u16 (*data_021e4f7c)(u16 phase, u8 *adr, u16 lastData);
extern u16 func_020e2a60(u8 *src, u8 *dst);
u16 func_020e2a60(u8 *src, u8 *dst) {
    *(vu8 *) (0x0A000000 + 0x00005555) = 0xAA;
    *(vu8 *) (0x0A000000 + 0x00002AAA) = 0x55;
    *(vu8 *) (0x0A000000 + 0x00005555) = 0xA0;
    *(vu8 *) dst                       = *src;
    return data_021e4f7c(0x0001, dst, *src);
}
