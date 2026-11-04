/* compiler: 1.2/sp2p3  */
/* func_02058838 from projets/children-of-mana/src/auto/func_02058838.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
extern s32 func_020456f0();
extern s32 data_0206b954;
extern s32 data_0206b958;
void func_02047480(void) {
    s32 temp_r0;

    temp_r0       = func_020456f0();
    data_0206b958 = temp_r0;
    switch (temp_r0) {
        case 0x0:
            return;
        case 0x40:
            data_0206b954 = 0x06894000;
            return;
        case 0x20:
            data_0206b954 = 0x06890000;
            return;
    }
}
