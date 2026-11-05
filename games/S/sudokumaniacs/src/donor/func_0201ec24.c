/* compiler: 1.2/sp2p3  */
/* func_0206317c from projets/children-of-mana/src/auto/func_0206317c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201f220();
extern void *func_0201f268(M2C_UNK);
void func_0201ec24(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_r0;

    temp_r0 = func_0201f268(1);
    if (temp_r0 == ((void *) 0)) {
        return;
    }
    (*(s32 *) ((s8 *) (temp_r0) + (4)))    = arg0;
    (*(s32 *) ((s8 *) (temp_r0) + (8)))    = arg1;
    (*(s32 *) ((s8 *) (temp_r0) + (0xC)))  = arg2;
    (*(s32 *) ((s8 *) (temp_r0) + (0x10))) = arg3;
    (*(s32 *) ((s8 *) (temp_r0) + (0x14))) = arg4;
    func_0201f220();
}
