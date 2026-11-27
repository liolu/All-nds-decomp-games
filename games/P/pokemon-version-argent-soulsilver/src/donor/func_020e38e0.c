/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MATHi_CRC16Update from https://github.com/Project-Holon/aletheia src/game/arm9/crc.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct MATHCRC16Table {
    u16 table[256];
} MATHCRC16Table;
extern void func_020e38e0(MATHCRC16Table *table, u16 *context, void *input, u32 length);
void func_020e38e0(MATHCRC16Table *table, u16 *context, void *input, u32 length) {
    u32 crc, index;
    u8 *inputBytes;

    crc        = *context;
    inputBytes = (u8 *) input;
    for (index = 0; index < length; index++) {
        crc = (crc << 8) ^ table->table[((crc >> 8) ^ *inputBytes) & 0xFF];
        inputBytes++;
    }
    *context = (u16) crc;
}
