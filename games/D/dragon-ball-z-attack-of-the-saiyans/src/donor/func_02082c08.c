/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MATHi_CRC32UpdateRev from projets/blue-dragon-awakened-shadow/src/auto/MATHi_CRC32UpdateRev.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef u32 MATHCRC32Context;
struct MATHCRC32Table {
    u32 table[256];
};
extern void func_02082c08(const struct MATHCRC32Table *table, MATHCRC32Context *context, const void *input, u32 length);
#pragma thumb off
void func_02082c08(const struct MATHCRC32Table *table, MATHCRC32Context *context, const void *input, u32 length) {
    u32 r, i;
    const u32 *t = table->table;
    u8 *data     = (u8 *) input;

    r = *context;
    for (i = 0; i < length; i++) {
        r = (r >> 8) ^ t[(r ^ *data) & 0xff];
        data++;
    }
    *context = r;
}
