/* compiler: 2.0/sp1p5  */
/* func_0203bd44 from projets/battle-of-giants-dinosaurs/src/auto/func_0203bd44.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern void *func_02025c10(void *, M2C_UNK *);
void func_020274d8(u8 *arg0) {
    M2C_UNK sp0;
    u8 temp_r4;
    void *temp_r0;

    temp_r4 = *arg0;
    temp_r0 = func_02025c10(arg0 + 2, &sp0);
    if (!(temp_r4 & 0x40)) {
        return;
    }
    func_02025c10(temp_r0, &sp0);
}
