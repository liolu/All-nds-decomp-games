/* compiler: 1.2/sp2p3  */
/* func_02065a48 from projets/nintendogs-chihuahua-friends/src/auto/func_02065a48.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02061938();
extern void *func_02061954();
extern M2C_UNK func_0205b8ac(s32, s32, s32);
extern M2C_UNK func_0205a6a0(s32, s32);
s32 func_020620c8(s32 arg0) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = func_02061954();
    temp_r0 = func_02061938();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg0 == 0) {
        return 6;
    }
    func_0205a6a0((*(s32 *) ((s8 *) (temp_r4) + (4))), 0x9B8);
    func_0205b8ac((*(s32 *) ((s8 *) (temp_r4) + (4))), arg0, 0x9B8);
    return 0;
}
