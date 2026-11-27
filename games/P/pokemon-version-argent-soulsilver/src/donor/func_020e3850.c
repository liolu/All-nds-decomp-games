/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MATHi_CRC16InitTable from https://github.com/Project-Holon/aletheia src/game/arm9/crc.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct MATHCRC16Table {
    u16 table[256];
} MATHCRC16Table;
extern void func_020e3850(MATHCRC16Table *table, u16 poly);
void func_020e3850(MATHCRC16Table *table, u16 poly) {
    u32 crc, index, bit;

    for (index = 0; index < 256; index++) {
        crc = index << 8;
        for (bit = 0; bit < 8; bit++) {
            if (crc & 0x8000) {
                crc = (crc << 1) ^ poly;
            } else {
                crc <<= 1;
            }
        }
        table->table[index] = (u16) crc;
    }
}
