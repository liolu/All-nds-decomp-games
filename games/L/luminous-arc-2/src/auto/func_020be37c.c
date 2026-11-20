#include "m2c.h"

s32 func_020aa774(s32, M2C_UNK *, s32 *);           /* extern */
s32 func_020aadbc();                                /* extern */
extern M2C_UNK func_020be324;

s32 func_020be37c(void *arg0) {
    s32 sp0;

    sp0 = func_020aadbc();
    if (func_020aa774(M2C_FIELD(arg0, s32 *, 0xC), &func_020be324, &sp0) == 0) {
        return 1;
    }
    return 0;
}
