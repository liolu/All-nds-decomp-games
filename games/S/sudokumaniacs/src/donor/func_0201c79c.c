/* compiler: 1.2/sp2p3  */
/* func_02008e3c from projets/code-lyoko/src/auto/func_02008e3c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201e3b0();
extern M2C_UNK func_0201e3c4();
extern u32 data_0203dd54;
u32 func_0201c79c(void) {
    M2C_UNK m2c_irq;
    M2C_UNK saved_reg_r4;
    u32 var_r4;

    var_r4  = saved_reg_r4;
    m2c_irq = func_0201e3b0();
    if ((u32) data_0203dd54 < -1U) {
        var_r4 = data_0203dd54;
        data_0203dd54 += 1;
    }
    func_0201e3c4(m2c_irq);
    return var_r4;
}
