#include "m2c.h"

s32 func_02062560();                                /* extern */
M2C_UNK func_02062960(s32, M2C_UNK);                /* extern */
extern void **data_020e0f10;

void func_020625b4(void) {
    if (func_02062560() != 0) {
        func_02062960(func_02062560(), 1);
    }
    if (data_020e0f10 != NULL) {
        M2C_FIELD(*data_020e0f10, M2C_UNK(**)(), 4)(data_020e0f10);
    }
    data_020e0f10 = NULL;
}
