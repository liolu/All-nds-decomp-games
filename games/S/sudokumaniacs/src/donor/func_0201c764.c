/* compiler: 1.2/sp2p3  */
/* func_02008e04 from projets/code-lyoko/src/auto/func_02008e04.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201e3b0();
extern M2C_UNK func_0201e3c4();
extern s32 data_0203dd54;
s32 func_0201c764(void) {
    M2C_UNK m2c_irq;
    s32 var_r4;

    m2c_irq = func_0201e3b0();
    var_r4  = 0;
    if (data_0203dd54 != 0) {
        var_r4 = data_0203dd54;
        data_0203dd54 -= 1;
    }
    func_0201e3c4(m2c_irq);
    return var_r4;
}
