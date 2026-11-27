#include "m2c.h"

M2C_UNK func_020058f4();                            /* extern */
M2C_UNK func_0202e4f0(s32);                         /* extern */
extern void *data_020e0ba0;

void func_0202ee50(void) {
    func_020058f4();
    func_0202e4f0(M2C_FIELD(data_020e0ba0, s32 *, 4));
}
