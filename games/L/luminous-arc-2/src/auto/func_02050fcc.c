/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02050fcc from https://github.com/ntrtwl/NitroSDK libraries/std/src/std_string.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
void func_02050fcc(u32 *bitset, u32 a, u32 b) {
    while (a < b) {
        const u32 pos = (u32) (a >> 5UL);
        const u32 bit = (u32) (a & 31UL);
        u32 mask      = (~0UL << bit);
        a             = (pos + 1UL) * 32UL;
        if (a > b) {
            mask &= (u32) ((1UL << (b & 31UL)) - 1UL);
        }
        bitset[pos] |= mask;
    }
}
