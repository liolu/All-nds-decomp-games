/* compiler: 1.2/sp2p3  */
/* func_02056590 from projets/children-of-mana/src/auto/func_02056590.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef short s16;
typedef long s32;
typedef unsigned long u32;
extern s16 data_020a2c90;
extern s16 data_0217acc8;
void func_02057710(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_020a2c90       = 0;
    data_0217acc8       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}
