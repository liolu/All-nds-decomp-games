/* compiler: 1.2/sp2p3  */
/* func_0205af64 from projets/children-of-mana/src/auto/func_0205af64.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201c8d0();
extern s32 func_0201e3b0();
extern M2C_UNK func_0201e3c4(s32);
void func_0201c9e8(void *arg0) {
    s32 temp_r4;

    temp_r4                             = func_0201e3b0();
    (*(s32 *) ((s8 *) (arg0) + (0x64))) = 1;
    func_0201c8d0();
    func_0201e3c4(temp_r4);
}
