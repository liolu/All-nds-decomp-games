/* compiler: 1.2/sp2p3  */
/* func_020612f0 from projets/children-of-mana/src/auto/func_020612f0.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205a6a0(void *, M2C_UNK);
extern s32 func_02061938();
extern void *func_02061954();
u16 func_02061d80(void) {
    u16 temp_r0;
    void *temp_r2;
    void *temp_r4;

    temp_r4 = func_02061954();
    if (func_02061938() != 0) {
        return 0U;
    }
    func_0205a6a0((*(void **) ((s8 *) (temp_r4) + (4))), 2);
    temp_r2 = (*(void **) ((s8 *) (temp_r4) + (4)));
    temp_r0 = (*(u16 *) ((s8 *) (temp_r2) + (0)));
    switch (temp_r0) {
        case 9:
            func_0205a6a0(temp_r2 + 0x17E, 2);
            if ((*(u16 *) ((s8 *) ((*(void **) ((s8 *) (temp_r4) + (4)))) + (0x17E))) == 0) {
                return 0U;
            }
        case 10:
        case 11:
            func_0205a6a0((*(void **) ((s8 *) (temp_r4) + (4))) + 0xB8, 2);
            return (*(u16 *) ((s8 *) ((*(void **) ((s8 *) (temp_r4) + (4)))) + (0xB8)));
        default:
            return 0U;
    }
}
