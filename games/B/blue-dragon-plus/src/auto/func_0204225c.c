#include "m2c.h"

M2C_UNK func_02036eac(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_02037170(void *);                      /* extern */
s32 func_02038e10();                                /* extern */
M2C_UNK func_02038e24(s32);                         /* extern */
M2C_UNK func_020422e8(M2C_UNK *);                   /* extern */
extern void *data_02160688;
extern M2C_UNK data_0216068c;
extern M2C_UNK data_02160ab0;
extern M2C_UNK func_020422fc;

void func_0204225c(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_02038e10();
    if (data_02160688 == NULL) {
        data_02160688 = arg0;
        func_020422e8(arg0 + 0xC4);
        func_020422e8(&data_0216068c);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        func_02036eac(arg0, &func_020422fc, arg0, &data_02160ab0, 0x400, 0x14);
        func_02037170(arg0);
    }
    func_02038e24(temp_r4);
}
