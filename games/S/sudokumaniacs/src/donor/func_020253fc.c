/* compiler: 2.0/sp1p5  */
/* func_0202c770 from projets/battle-of-giants-dinosaurs/src/auto/func_0202c770.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
void func_020253fc(void *arg0) {
    s32 temp_r3;

    (*(s32 *) ((s8 *) (arg0) + (0x24))) = (s32) (*(s32 *) ((s8 *) (arg0) + (0x1C)));
    temp_r3                             = (*(s32 *) ((s8 *) (arg0) + (0x20)));
    (*(s32 *) ((s8 *) (arg0) + (0x28))) = temp_r3;
    (*(s32 *) ((s8 *) (arg0) + (0x28))) =
        (s32) (temp_r3 - ((*(s32 *) ((s8 *) (arg0) + (0x18))) & (*(s32 *) ((s8 *) (arg0) + (0x2C)))));
    (*(s32 *) ((s8 *) (arg0) + (0x34))) = (s32) (*(s32 *) ((s8 *) (arg0) + (0x18)));
}
