#include "m2c.h"

M2C_UNK func_0202a990(s32, s32);                    /* extern */
M2C_UNK func_0202a9a0(s32);                         /* extern */
M2C_UNK func_0208a70c(void *);                      /* extern */
extern s32 data_020e0ba0;

void func_0204286c(void *arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0x18) != 1) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x18) = 0U;
    temp_r0                     = M2C_FIELD(arg0, s32 *, 0x10);
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_0202a990(data_020e0ba0, M2C_FIELD(arg0, s32 *, 0x14));
            break;
        case 1:
            func_0202a9a0(data_020e0ba0);
            break;
    }
    func_0208a70c(arg0);
}
