/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* formatNumber from https://github.com/ReGame-Labs/dwds_decomp src/engine/text/text_banks.c (license: MIT), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef signed int s32;
extern s32 (*data_021366b8[])(void);
extern s32 (*data_02136694[])(void);
extern u16 *func_02005998(s32 value, s32 digits, u16 *buffer, s32 flags);
extern u16 *func_020059c4(s32 valueLow, s32 valueHigh, s32 digits, u16 *buffer, s32 flags);
u16 *func_02005998(s32 value, s32 digits, u16 *buffer, s32 flags) {
    return func_020059c4(value, 0, digits, buffer, flags);
}
