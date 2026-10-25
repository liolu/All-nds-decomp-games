/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_021023b4 from https://github.com/sturmds/advance-wars-dual-strike-decomp src/game/main/func_021023b4.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed char s8;
typedef struct Unk_022a7fac Unk_022a7fac;
struct Unk_022a7fac {
    u8 pad_00[0x1F];
    s8 unk_6;
};
extern Unk_022a7fac data_0223b940;
s8 func_0202fb08(void) {
    return data_0223b940.unk_6;
}
