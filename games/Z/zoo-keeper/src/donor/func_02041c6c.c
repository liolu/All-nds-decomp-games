/* compiler: 1.2/sp2p3  */
/* func_020744d8 from projets/children-of-mana/src/auto/func_020744d8.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
void func_02041c6c(void **arg0, s16 arg1) {
    void *temp_r3;

    temp_r3 = *arg0;
    if (temp_r3 != ((void *) 0)) {
        (*(s16 *) ((s8 *) (temp_r3) + (0x34))) = 1;
        (*(s16 *) ((s8 *) (*arg0) + (0x38)))   = arg1;
    }
}
