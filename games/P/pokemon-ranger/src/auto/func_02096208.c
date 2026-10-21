#include "m2c.h"

M2C_UNK func_02095d48(s32, void *);                 /* extern */
M2C_UNK func_02095da0(s32, void *);                 /* extern */

void *func_02096208(void *arg0) {
    if (M2C_FIELD(arg0, volatile u8 *, 4) != 0) {
        func_02095d48(M2C_FIELD(arg0, volatile s32 *, 0x14), arg0);
    } else {
        func_02095da0(M2C_FIELD(arg0, volatile s32 *, 0x14), arg0);
    }
    M2C_FIELD(arg0, volatile s32 *, 0) = 0;
    return arg0;
}
