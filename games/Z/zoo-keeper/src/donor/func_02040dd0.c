/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SumBytes from https://github.com/pret/pokeplatinum src/math_util.c (license: none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
extern u32 func_02040dd0(const void *data, u32 size);
u32 func_02040dd0(const void *data, u32 size) {
    u32 sum = 0;
    for (int i = 0; i < size; i++) {
        sum += ((const u8 *) data)[i];
    }

    return sum;
}
