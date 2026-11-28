/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020212fc(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_02021390(M2C_UNK, void *, M2C_UNK);    /* extern */
M2C_UNK func_0201bb4c();                            /* extern */
M2C_UNK func_0201c470(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0201c48c(void *);                      /* extern */
extern u16 data_020ec2c4;
extern void *data_020ec2c8;
extern M2C_UNK func_0201f2fc;
extern M2C_UNK func_0201f318;

void func_0201f86c(void *arg0, M2C_UNK arg1) {
    if (data_020ec2c4 != 0) {
        return;
    }
    data_020ec2c4 = 1;
    func_020212fc(arg0, 0, 0x5F20);
    data_020ec2c8                  = arg0;
    M2C_FIELD(arg0, s16 *, 0x5F0E) = 0;
    func_02021390(arg1, data_020ec2c8 + 0x5C4, 0x16);
    func_0201c48c(data_020ec2c8 + 0x5E8);
    func_0201bb4c();
    func_0201c470(&func_0201f318, &func_0201f2fc);
}
