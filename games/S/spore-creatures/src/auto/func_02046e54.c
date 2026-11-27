#include "m2c.h"

M2C_UNK func_02001f60(void *);                      /* extern */
M2C_UNK func_02046eb8();                            /* extern */
extern M2C_UNK data_020def9c;

void *func_02046e54(void *arg0) {
    void **var_r1;
    void *temp_r0;
    void *var_r2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020def9c;
    func_02046eb8();
    func_02001f60(arg0 + 0x18);
    func_02001f60(arg0 + 0xC);
    var_r1 = M2C_FIELD(arg0, void ***, 4);
    if (var_r1 != NULL) {
        var_r2  = *var_r1;
        temp_r0 = arg0 + 4;
        if (var_r2 != temp_r0) {
            do {
                var_r1 = var_r2 + 4;
                var_r2 = M2C_FIELD(var_r2, void **, 4);
            } while (var_r2 != temp_r0);
        }
        *var_r1 = M2C_FIELD(arg0, void **, 8);
    }
    return arg0;
}
