#include "m2c.h"

void *func_0208c4e8();                       /* extern */
s32 func_0208d0c0();                         /* extern */
s32 func_0208d124();                         /* extern */

void func_0208cc68(M2C_UNK arg0, void *arg1) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;

    temp_r0                        = func_0208c4e8();
    M2C_FIELD(temp_r0, s32 *, 8)   = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(temp_r0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 4);
    if ((func_0208d124(arg0) != 0) || (func_0208d0c0(arg0) != 0)) {
        temp_r0_2                      = func_0208c4e8(arg0);
        M2C_FIELD(temp_r0_2, s32 *, 4) = (s32) (M2C_FIELD(temp_r0_2, s32 *, 4) | 1);
        return;
    }
    temp_r0_3                      = func_0208c4e8(arg0);
    M2C_FIELD(temp_r0_3, s32 *, 4) = (s32) (M2C_FIELD(temp_r0_3, s32 *, 4) | 2);
}
