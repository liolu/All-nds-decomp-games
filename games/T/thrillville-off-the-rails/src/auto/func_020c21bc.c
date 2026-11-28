#include "m2c.h"

void **func_02044cc0();                             /* extern */
s32 func_02044d4c(void **, M2C_UNK);                /* extern */
void **func_020742ec(M2C_UNK);                      /* extern */
M2C_UNK func_020c2b4c(void *, s32);                 /* extern */
M2C_UNK func_020c2c90(void *, M2C_UNK);             /* extern */
M2C_UNK func_020c3540();                            /* extern */
extern M2C_UNK data_020e6f04;
extern void **data_020efd44;

void *func_020c21bc(void *arg0) {
    s8 sp0;
    void **var_r0;
    void **var_r0_2;

    func_020c3540();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e6f04;
    M2C_FIELD(arg0, s8 *, 4)       = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 4;
    M2C_FIELD(arg0, s8 *, 0xC)     = 0;
    if (data_020efd44 == NULL) {
        var_r0 = func_020742ec(8);
        if (var_r0 != NULL) {
            var_r0 = func_02044cc0();
        }
        data_020efd44 = var_r0;
    }
    if (func_02044d4c(data_020efd44, 2) == 0) {
        func_020c2b4c(arg0, 0x7BA);
        return arg0;
    }
    sp0 = 0;
    if (data_020efd44 == NULL) {
        var_r0_2 = func_020742ec(8);
        if (var_r0_2 != NULL) {
            var_r0_2 = func_02044cc0();
        }
        data_020efd44 = var_r0_2;
    }
    if (M2C_FIELD(*data_020efd44, s32(**)(void **, M2C_UNK, s8 *, M2C_UNK), 0xC)(data_020efd44, 0, &sp0, 1) == 0) {
        M2C_FIELD(arg0, s8 *, 4) = 1;
        func_020c2b4c(arg0, 0x7BA);
        return arg0;
    }
    func_020c2c90(arg0, 3);
    return arg0;
}
