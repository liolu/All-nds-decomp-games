#include "m2c.h"

s32 func_020742ec(s32);                             /* extern */
M2C_UNK func_020857c0();                            /* extern */
M2C_UNK func_0208838c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020e0fed;

void func_020526d0(void *arg0, u32 arg1) {
    if (arg1 > 0x2AAAAAAAU) {
        func_0208838c(&data_020e0fed);
        func_020857c0();
    }
    M2C_FIELD(arg0, s32 *, 0) = func_020742ec(arg1 * 6);
    M2C_FIELD(arg0, u32 *, 8) = arg1;
}
