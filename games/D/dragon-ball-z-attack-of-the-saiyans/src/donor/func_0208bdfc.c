/* compiler: 2.0/sp1p5  */
/* NNSi_SndPlayerAllocHeap from projets/blue-dragon-awakened-shadow/src/auto/NNSi_SndPlayerAllocHeap.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0208aaa4(s32, void *);
extern void *func_0208ab04(s32, M2C_UNK);
extern M2C_UNK func_0208ce74(s32);
extern M2C_UNK data_020ddfe4;
s32 func_0208bdfc(s32 arg0, void *arg1) {
    s32 temp_r5;
    void *temp_r0;

    temp_r5 = (arg0 * 0x24) + (s32) &data_020ddfe4;
    temp_r0 = func_0208ab04(temp_r5 + 0xC, 0);
    if (temp_r0 == ((void *) 0)) {
        return 0;
    }
    func_0208aaa4(temp_r5 + 0xC, temp_r0);
    (*(void **) ((s8 *) (temp_r0) + (0xC))) = arg1;
    (*(void **) ((s8 *) (arg1) + (8)))      = temp_r0;
    func_0208ce74((*(s32 *) ((s8 *) (temp_r0) + (8))));
    return (*(s32 *) ((s8 *) (temp_r0) + (8)));
}
