/* compiler: 1.2/sp2p3  */
/* func_02063c0c from projets/children-of-mana/src/auto/func_02063c0c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201e3b0(void);
extern void func_0201e3c4(M2C_UNK);
extern s32 data_0203e0f0;
extern s32 data_0203e0f4;
void func_0201f220(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_0201e3b0();
    if (data_0203e0f4 == 0) {
        data_0203e0f4 = arg0;
        data_0203e0f0 = arg0;
    } else {
        *(M2C_UNK *) data_0203e0f4 = arg0;
        data_0203e0f4              = arg0;
    }
    *(M2C_UNK *) arg0 = 0;
    func_0201e3c4(temp_r0);
}
