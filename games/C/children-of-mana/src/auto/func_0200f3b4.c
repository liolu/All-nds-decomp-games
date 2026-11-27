/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2ec(void *);                      /* extern */
s32 func_0200f33c(void *);                          /* extern */
extern M2C_UNK data_0211129c;

void func_0200f3b4(void) {
    void *var_r5;

    var_r5 = M2C_FIELD(&data_0211129c, void **, 0x1C);
    if (var_r5 == &data_0211129c) {
        return;
    }
    do {
        if (func_0200f33c(var_r5) != 0) {
            func_0200f2ec(var_r5);
        }
        var_r5 = M2C_FIELD(var_r5, void **, 0x1C);
    } while (var_r5 != &data_0211129c);
}
