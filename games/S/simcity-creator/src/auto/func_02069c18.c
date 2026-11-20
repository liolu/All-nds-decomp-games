#include "m2c.h"

s32 func_02053808(s32);                             /* extern */
s32 func_0205480c(s32);                             /* extern */
s32 func_02073b08(s32);                             /* extern */
s32 func_02090738(s32);                             /* extern */
s32 func_020af570(s32);                             /* extern */
s32 func_020b155c();                                /* extern */
s32 func_020b76e4(s32);                             /* extern */

s32 func_02069c18(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_02053808(M2C_FIELD(arg0, s32 *, 0x2C));
    if (func_020b155c() != 0) {
        return 0;
    }
    if (func_02073b08(M2C_FIELD(arg0, s32 *, 0x1C)) != 0) {
        return 0;
    }
    if (func_020b76e4(M2C_FIELD(arg0, s32 *, 0xB0)) != 0) {
        return 0;
    }
    if (func_020af570(temp_r4) == 0) {
        return 0;
    }
    if (func_02090738(M2C_FIELD(arg0, s32 *, 0xC4)) != 0) {
        return 0;
    }
    if (func_0205480c(M2C_FIELD(arg0, s32 *, 0x14)) == 0) {
        return 1;
    }
    return 0;
}
