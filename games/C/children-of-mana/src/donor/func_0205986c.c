/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* MATHi_CRC8InitTable from https://github.com/Project-Holon/aletheia src/game/arm9/crc.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct MATHCRC8Table {
    u8 table[256];
} MATHCRC8Table;
extern void func_0205986c(MATHCRC8Table *table, u8 poly);
void func_0205986c(MATHCRC8Table *table, u8 poly) {
    u32 crc, index, bit;

    for (index = 0; index < 256; index++) {
        crc = index;
        for (bit = 0; bit < 8; bit++) {
            if (crc & 0x80) {
                crc = (crc << 1) ^ poly;
            } else {
                crc <<= 1;
            }
        }
        table->table[index] = (u8) crc;
    }
}
