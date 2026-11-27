#include "m2c.h"

M2C_UNK func_020446c8(s32, void *);                 /* extern */
extern s32 data_020e0cb0;

void func_02043ec8(void *arg0) {
    func_020446c8(data_020e0cb0, arg0);
    M2C_FIELD(arg0, s8 *, 0x2A) = 0;
}
