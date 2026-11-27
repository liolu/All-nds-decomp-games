#include "m2c.h"

M2C_UNK func_02062560();                            /* extern */
M2C_UNK func_020630a0(s32, M2C_UNK);                /* extern */
u32 func_02063170();                                /* extern */
M2C_UNK func_02063188();                            /* extern */
extern void *data_020e0f10;

void func_02062890(s32 arg0) {
    if (arg0 != 0) {
        func_02063188();
    }
    func_02062560();
    if (func_02063170() >= 2U) {
        return;
    }
    func_020630a0(M2C_FIELD(data_020e0f10, s32 *, 4), 5);
}
