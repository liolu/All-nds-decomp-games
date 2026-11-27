/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OBJSizeToShape from https://github.com/7ucina/acww-decomp src/autoload_2/unk_021030a0.c (license: MIT), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
extern const u32 data_020d9350[4][4];
u32 func_020aa230(const u8 *p) {
    return data_020d9350[p[1]][p[0]];
}
extern const u32 data_020d9350[4][4];
