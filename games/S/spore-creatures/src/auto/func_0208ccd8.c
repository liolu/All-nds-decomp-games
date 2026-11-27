#include "m2c.h"

void *func_0208c4e8();
s32 func_0208d0c0();
s32 func_0208d124();

void func_0208ccd8(M2C_UNK arg0, void *arg1) {
    void *t;

    t                         = func_0208c4e8(arg0);
    M2C_FIELD(t, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(t, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 4);
    if ((M2C_FIELD(arg1, s32 *, 0) == 0) && (M2C_FIELD(arg1, s32 *, 4) == 0)) {
        t                               = func_0208c4e8(arg0);
        M2C_FIELD(t, volatile s32 *, 4) = (s32) (M2C_FIELD(t, volatile s32 *, 4) & ~4);
    } else {
        t                               = func_0208c4e8(arg0);
        M2C_FIELD(t, volatile s32 *, 4) = (s32) (M2C_FIELD(t, volatile s32 *, 4) | 4);
    }
    if ((func_0208d124(arg0) != 0) || (func_0208d0c0(arg0) != 0)) {
        t                      = func_0208c4e8(arg0);
        M2C_FIELD(t, s32 *, 4) = (s32) (M2C_FIELD(t, s32 *, 4) | 1);
    } else {
        t                      = func_0208c4e8(arg0);
        M2C_FIELD(t, s32 *, 4) = (s32) (M2C_FIELD(t, s32 *, 4) | 2);
    }
}
