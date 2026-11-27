/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MATH_CalcCRC16CCITT from https://github.com/Project-Holon/aletheia src/game/arm9/crc.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct MATHCRC16Table {
    u16 table[256];
} MATHCRC16Table;
extern void func_020e38e0(MATHCRC16Table *table, u16 *context, void *input, u32 length);
extern u16 func_020e3a2c(MATHCRC16Table *table, void *data, u32 dataLength);
void func_020e38e0(MATHCRC16Table *table, u16 *context, void *input, u32 length);
u16 func_020e3a2c(MATHCRC16Table *table, void *data, u32 dataLength) {
    u16 context = 0xFFFF;

    func_020e38e0(table, &context, data, dataLength);
    return context;
}
