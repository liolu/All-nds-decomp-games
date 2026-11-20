/* compiler: 1.2/sp2p3  */
/* func_02063f3c from projets/children-of-mana/src/auto/func_02063f3c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_0206d7e0;
void func_0204baa8(s32 arg0) {
    M2C_UNK (*temp_r1)(s32);
    s32 temp_r3;

    temp_r3 = ((u8) arg0 * 0xC) + (s32) &data_0206d7e0;
    if ((u8) (arg0 >> 8) != (*(u8 *) ((s8 *) (temp_r3) + (8)))) {
        return;
    }
    temp_r1 = (*(M2C_UNK(**)(s32))((s8 *) (temp_r3) + (0)));
    if (temp_r1 == ((void *) 0)) {
        return;
    }
    temp_r1((*(s32 *) ((s8 *) (temp_r3) + (4))));
}
