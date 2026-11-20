/* compiler: 2.0/sp1p5  */
/* func_02036124 from projets/battle-of-giants-dinosaurs/src/auto/func_02036124.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02003a34();
extern M2C_UNK func_02003aa0(void *, s32);
void func_02003af0(void *arg0, s32 arg1) {
    s32 temp_r0;

    if (arg1 <= 0) {
        return;
    }
    if (arg1 >= (s32) (*(u8 *) ((s8 *) (arg0) + (4)))) {
        return;
    }
    temp_r0                         = func_02003a34(arg0, arg1);
    (*(u8 *) ((s8 *) (arg0) + (4))) = (u8) arg1;
    if (temp_r0 < 0) {
        return;
    }
    func_02003aa0(arg0, arg1);
}
