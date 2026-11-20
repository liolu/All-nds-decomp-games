/* compiler: 1.2/sp2p3  */
/* func_02009b44 from projets/code-lyoko/src/auto/func_02009b44.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201ca1c();
extern void *func_0201cf44(void *);
void func_0201d46c(void *arg0) {
    void *temp_r0;

    if ((*(s32 *) ((s8 *) (arg0) + (0x88))) == 0) {
        return;
    }
    do {
        temp_r0                               = func_0201cf44(arg0 + 0x88);
        (*(s32 *) ((s8 *) (temp_r0) + (0xC))) = 0;
        (*(s32 *) ((s8 *) (temp_r0) + (8)))   = 0;
        func_0201ca1c();
    } while ((*(s32 *) ((s8 *) (arg0) + (0x88))) != 0);
}
