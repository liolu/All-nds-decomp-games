#include "m2c.h"

M2C_UNK func_020058a0(void *);                      /* extern */
M2C_UNK func_02005924(void *);                      /* extern */
extern void *data_02170294;

s32 func_020823e8(void) {
    s32 temp_r4;

    func_020058a0(data_02170294 + 0x11DC);
    temp_r4 = M2C_FIELD(data_02170294, s32 *, 0x1000);
    func_02005924(data_02170294 + 0x11DC);
    return temp_r4;
}
