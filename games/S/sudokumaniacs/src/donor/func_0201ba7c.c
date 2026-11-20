/* compiler: 1.2/sp2p3  */
/* func_02056590 from projets/children-of-mana/src/auto/func_02056590.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef short s16;
typedef long s32;
typedef unsigned long u32;
extern s16 data_0202a4cc;
extern s16 data_0203dccc;
void func_0201ba7c(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_0202a4cc       = 0;
    data_0203dccc       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}
