/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020cbf14();                            /* extern */
extern s32 data_020f88d8;

void func_020cbe64(s32 arg0) {
    if (data_020f88d8 != 0) {
        return;
    }
    data_020f88d8 = 1;
    func_020cbf14(arg0);
}
