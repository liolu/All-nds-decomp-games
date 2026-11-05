/* compiler: 1.2/sp2p3  */
/* func_02008e88 from projets/code-lyoko/src/auto/func_02008e88.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201e3b0();
extern M2C_UNK func_0201e3c4();
extern M2C_UNK data_0203dd68;
s32 func_0201c7e8(s32 arg0) {
    M2C_UNK m2c_irq;
    s32 temp_r4;

    m2c_irq                                      = func_0201e3b0();
    temp_r4                                      = (*(s32 *) ((s8 *) (&data_0203dd68) + (0xC)));
    (*(s32 *) ((s8 *) (&data_0203dd68) + (0xC))) = arg0;
    func_0201e3c4(m2c_irq);
    return temp_r4;
}
