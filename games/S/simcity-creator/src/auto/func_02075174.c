#include "m2c.h"

M2C_UNK func_02073b44(s32);                         /* extern */
M2C_UNK func_020751b8(void *);                      /* extern */
M2C_UNK func_02075284(void *);                      /* extern */
M2C_UNK func_02075370(void *);                      /* extern */
M2C_UNK func_02075690(void *);                      /* extern */
s32 func_020b155c();                                /* extern */

s32 func_02075174(void *arg0) {
    if (func_020b155c() != 1) {
        func_020751b8(arg0);
        func_02075284(arg0);
        func_02075370(arg0);
        func_02075690(arg0);
        func_02073b44(M2C_FIELD(arg0, s32 *, 8));
    }
    return 1;
}
