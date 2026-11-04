/* compiler: 1.2/sp2p3  */
/* func_0205b9d8 from projets/children-of-mana/src/auto/func_0205b9d8.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02059b78();
extern void *func_0205a40c(void *);
void func_0205a4f0(void *arg0) {
    void *temp_r0;

    if ((*(s32 *) ((s8 *) (arg0) + (0x7C))) == 0) {
        return;
    }
    do {
        temp_r0                             = func_0205a40c(arg0);
        (*(s32 *) ((s8 *) (temp_r0) + (8))) = 0;
        (*(s32 *) ((s8 *) (temp_r0) + (4))) = 0;
        func_02059b78();
    } while ((*(s32 *) ((s8 *) (arg0) + (0x7C))) != 0);
}
