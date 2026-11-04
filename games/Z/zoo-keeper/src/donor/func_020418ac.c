/* compiler: 1.2/sp2p3  */
/* func_0205a578 from projets/madagascar/src/auto/func_0205a578.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void *func_02040e14(s32, M2C_UNK);
extern M2C_UNK func_02040e2c(s32, void *);
extern M2C_UNK data_0206a250;
s32 func_020418ac(s32 arg0, void *arg1) {
    s32 temp_r5;
    void *temp_r0;

    temp_r5 = (arg0 * 0x1C) + (s32) &data_0206a250;
    temp_r0 = func_02040e14(temp_r5 + 0xC, 0);
    if (temp_r0 == ((void *) 0)) {
        return 0;
    }
    func_02040e2c(temp_r5 + 0xC, temp_r0);
    (*(void **) ((s8 *) (temp_r0) + (0xC))) = arg1;
    (*(void **) ((s8 *) (arg1) + (8)))      = temp_r0;
    return (*(s32 *) ((s8 *) (temp_r0) + (8)));
}
