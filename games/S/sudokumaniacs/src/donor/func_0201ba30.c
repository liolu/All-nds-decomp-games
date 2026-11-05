/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02056544 from projets/children-of-mana/src/auto/func_02056544.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
extern u16 data_0202a4cc;
extern u16 data_0203dccc;
extern u16 data_0202a4cc;
extern u16 data_0203dccc;
void func_0201ba30(void) {
    data_0202a4cc = 1;
    if (data_0203dccc != 0) {
        (*(u32 *) ((0x04000000) | 0x0)) = ((*(u32 *) ((0x04000000) | 0x0)) & ~0x30000) | (data_0203dccc << 16);
    } else {
        (*(u32 *) ((0x04000000) | 0x0)) |= 0x10000;
    }
}
