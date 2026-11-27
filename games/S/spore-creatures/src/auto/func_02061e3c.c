#include "m2c.h"

M2C_UNK func_02016110(void *);                      /* extern */
M2C_UNK func_02062498();                            /* extern */
M2C_UNK func_020934a8(void *);                      /* extern */
extern M2C_UNK data_020df68c;

void *func_02061e3c(void *arg0) {
    void **var_r1;
    void *temp_r0;
    void *var_r2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020df68c;
    func_02062498();
    var_r1 = M2C_FIELD(arg0, void ***, 0x24);
    if (var_r1 != NULL) {
        var_r2  = *var_r1;
        temp_r0 = arg0 + 0x24;
        if (var_r2 != temp_r0) {
            do {
                var_r1 = var_r2 + 4;
                var_r2 = M2C_FIELD(var_r2, void **, 4);
            } while (var_r2 != temp_r0);
        }
        *var_r1 = M2C_FIELD(arg0, void **, 0x28);
    }
    func_02016110(arg0);
    func_020934a8(arg0);
    return arg0;
}
