#include "m2c.h"

s32 func_01ff8064();                                /* extern */
M2C_UNK func_0201cf08(void *);                      /* extern */
M2C_UNK func_020732e4(s32, void *);                 /* extern */
M2C_UNK func_0208acbc(void *);                      /* extern */
M2C_UNK func_020934a8(void *);                      /* extern */
M2C_UNK func_020a0904(void *);                      /* extern */
extern M2C_UNK data_020de3a8;
extern s32 data_020e0cb4;

void *func_0201d4a4(void *arg0) {
    void **var_r1;
    void *temp_r0;
    void *var_r2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020de3a8;
    if ((data_020e0cb4 != 0) && (func_01ff8064() != 0)) {
        func_020732e4(func_01ff8064(), arg0 + 0x30);
    }
    func_0201cf08(arg0 + 0x44);
    func_020a0904(arg0 + 0x44);
    var_r1 = M2C_FIELD(arg0, void ***, 0x28);
    if (var_r1 != NULL) {
        var_r2  = *var_r1;
        temp_r0 = arg0 + 0x28;
        if (var_r2 != temp_r0) {
            do {
                var_r1 = var_r2 + 4;
                var_r2 = M2C_FIELD(var_r2, void **, 4);
            } while (var_r2 != temp_r0);
        }
        *var_r1 = M2C_FIELD(arg0, void **, 0x2C);
    }
    func_0208acbc(arg0 + 4);
    func_020934a8(arg0);
    return arg0;
}
