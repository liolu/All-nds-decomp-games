#include "m2c.h"

s32 func_0202a950();                                /* extern */
void *func_020303f4();                              /* extern */
extern M2C_UNK func_02029d60;

void func_02029d30(M2C_UNK **arg0) {
    if (func_0202a950() != 0) {
        return;
    }
    if (M2C_FIELD(func_020303f4(), u16 *, 4) == 1) {
        *arg0 = &func_02029d60;
    }
}
