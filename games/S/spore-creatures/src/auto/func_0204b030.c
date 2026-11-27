#include "m2c.h"

M2C_UNK func_0201c2c8(void *);                      /* extern */
M2C_UNK func_02043864(void *);                      /* extern */
M2C_UNK func_0204b33c(void *);                      /* extern */
M2C_UNK func_02055c70(void *);                      /* extern */
M2C_UNK func_02059e74(void *);                      /* extern */
M2C_UNK func_0205b524(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_0205e670(void *);                      /* extern */
M2C_UNK func_020934a8(void *);                      /* extern */
M2C_UNK func_020934bc(s32);                         /* extern */
M2C_UNK func_ov000_02104104(void *);                /* extern */
M2C_UNK func_ov003_02148a4c(s32);                   /* extern */
extern M2C_UNK data_020df138;

void *func_0204b030(void *arg0) {
    void **var_r1;
    void *temp_r0;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r5_3;
    void *var_r2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020df138;
    if (((u32) M2C_FIELD(arg0, u32 *, 0x70) >> 0x1A) & 1) {
        func_0205b524(arg0 + 0x1C0, 0x2237D4, 0);
        func_0205b524(arg0 + 0x1C0, 0x2889C9, 0);
        M2C_FIELD(arg0, u32 *, 0x70) = (u32) (M2C_FIELD(arg0, u32 *, 0x70) & ~0x04000000);
    }
    if (((u32) M2C_FIELD(arg0, u32 *, 0x70) >> 0x1B) & 1) {
        func_0205b524(arg0 + 0x1C0, 0xABD8C27F, 0);
        func_0205b524(arg0 + 0x1C0, 0x91F489C7, 0);
        M2C_FIELD(arg0, u32 *, 0x70) = (u32) (M2C_FIELD(arg0, u32 *, 0x70) & ~0x08000000);
    }
    func_ov000_02104104(arg0 + 0xB0);
    func_0204b33c(arg0);
    func_020934bc(M2C_FIELD(arg0, s32 *, 0x3B8));
    var_r1 = M2C_FIELD(arg0, void ***, 0x3B0);
    if (var_r1 != NULL) {
        var_r2  = *var_r1;
        temp_r0 = arg0 + 0x3B0;
        if (var_r2 != temp_r0) {
            do {
                var_r1 = var_r2 + 4;
                var_r2 = M2C_FIELD(var_r2, void **, 4);
            } while (var_r2 != temp_r0);
        }
        *var_r1 = M2C_FIELD(arg0, void **, 0x3B4);
    }
    func_02059e74(arg0 + 0x1C0);
    temp_r5 = M2C_FIELD(arg0, void **, 0x1BC);
    if (temp_r5 != NULL) {
        func_02055c70(temp_r5);
        func_020934a8(temp_r5);
    }
    temp_r5_2 = M2C_FIELD(arg0, void **, 0x1B8);
    if (temp_r5_2 != NULL) {
        func_0205e670(temp_r5_2);
        func_020934a8(temp_r5_2);
    }
    func_020934a8(M2C_FIELD(arg0, void **, 0x1B4));
    temp_r5_3 = M2C_FIELD(arg0, void **, 0x1A0);
    if (temp_r5_3 != NULL) {
        func_ov003_02148a4c(temp_r5_3 + 0x18);
        func_0201c2c8(temp_r5_3);
        func_020934a8(temp_r5_3);
    }
    func_02043864(arg0);
    func_020934a8(arg0);
    return arg0;
}
