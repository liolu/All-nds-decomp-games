#include "m2c.h"

M2C_UNK func_02018370(M2C_UNK);                     /* extern */
s32 func_02019644();                                /* extern */
s32 func_02025c14();                                /* extern */
M2C_UNK func_02025cdc();                            /* extern */
extern s32 data_020940d0;

void func_02025c7c(s32 arg0) {
    if (!(arg0 & func_02025c14())) {
        return;
    }
    func_02025cdc();
    if (func_02025c14() & 0x20) {
        return;
    }
    do {
        if ((data_020940d0 != 0) && (func_02019644() != 0)) {
            func_02018370(1);
        }
    } while (!(func_02025c14() & 0x20));
}
