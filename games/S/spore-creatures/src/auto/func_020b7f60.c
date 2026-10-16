#include "m2c.h"

M2C_UNK func_020b5964(M2C_UNK *);                   /* extern */
M2C_UNK func_020b7fc0();                            /* extern */
M2C_UNK func_020b86d0();                            /* extern */
extern s32 data_020f1d20;
extern M2C_UNK data_020f1d24;

void func_020b7f60(void) {
    if (data_020f1d20 != 0) {
        return;
    }
    data_020f1d20 = 1;
    func_020b5964(&data_020f1d24);
    func_020b7fc0();
    func_020b86d0();
}
