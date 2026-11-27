/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* MATHi_CRC8Update from https://github.com/Project-Holon/aletheia src/game/arm9/crc.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct MATHCRC8Table {
    u8 table[256];
} MATHCRC8Table;
extern void func_0205982c(MATHCRC8Table *table, u8 *context, void *input, u32 length);
void func_0205982c(MATHCRC8Table *table, u8 *context, void *input, u32 length) {
    u32 crc, index;
    u8 *inputBytes;

    crc        = *context;
    inputBytes = (u8 *) input;
    for (index = 0; index < length; index++) {
        crc = table->table[(crc ^ *inputBytes) & 0xFF];
        inputBytes++;
    }
    *context = (u8) crc;
}
