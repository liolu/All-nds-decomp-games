#include "m2c.h"

M2C_UNK func_02063208(s32);                         /* extern */
M2C_UNK func_020635d8(void *, M2C_UNK (*)(s32));    /* extern */
M2C_UNK func_020636a8(void *);                      /* extern */
extern M2C_UNK data_0208e5c8;

void func_020631ac(void *arg0, s32 arg1) {
    if (M2C_FIELD(&data_0208e5c8, s32 *, 0x1C) != 0) {
        func_020635d8(arg0, func_02063208);
        M2C_FIELD(arg0, s32 *, 4)    = arg1;
        M2C_FIELD(arg0, s32 *, 0)    = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80);
        M2C_FIELD(arg0, s32 *, 0x64) = 1;
        func_020636a8(arg0);
        return;
    }
    func_02063208(arg1);
}
