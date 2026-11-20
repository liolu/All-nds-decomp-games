#include "m2c.h"

M2C_UNK func_020c026c(void *);                      /* extern */
M2C_UNK func_020c0318(void *);                      /* extern */
M2C_UNK func_020c154c(void *);                      /* extern */
extern void *data_0212edac;

void func_020c0230(void *arg0) {
    void *var_r4;

    var_r4 = arg0;
    if (var_r4 == NULL) {
        var_r4 = data_0212edac;
    }
    if (M2C_FIELD(var_r4, s32 *, 0xBC) != 0) {
        func_020c0318(var_r4);
    }
    func_020c026c(var_r4);
    func_020c154c(var_r4);
}
