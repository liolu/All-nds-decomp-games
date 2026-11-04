/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02056544 from projets/children-of-mana/src/auto/func_02056544.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
extern u16 data_020a2c90;
extern u16 data_0217acc8;
extern u16 data_020a2c90;
extern u16 data_0217acc8;
void func_020576c4(void) {
    data_020a2c90 = 1;
    if (data_0217acc8 != 0) {
        (*(u32 *) ((0x04000000) | 0x0)) = ((*(u32 *) ((0x04000000) | 0x0)) & ~0x30000) | (data_0217acc8 << 16);
    } else {
        (*(u32 *) ((0x04000000) | 0x0)) |= 0x10000;
    }
}
