#include "m2c.h"

M2C_UNK func_02004c4c(s32);                         /* extern */
M2C_UNK func_02005050(void *, M2C_UNK (*)(s32));    /* extern */
M2C_UNK func_02005108(void *);                      /* extern */
extern M2C_UNK data_020d0c40;

void func_02004bf0(void *arg0, s32 arg1) {
    if (M2C_FIELD(&data_020d0c40, s32 *, 0x1C) != 0) {
        func_02005050(arg0, func_02004c4c);
        M2C_FIELD(arg0, s32 *, 4)    = arg1;
        M2C_FIELD(arg0, s32 *, 0)    = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80);
        M2C_FIELD(arg0, s32 *, 0x64) = 1;
        func_02005108(arg0);
        return;
    }
    func_02004c4c(arg1);
}
