#include "m2c.h"

M2C_UNK func_020e3568(M2C_UNK *);                   /* extern */
M2C_UNK func_020d1ad4(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_020d1f34(void *);                      /* extern */
s32 func_020d3a38();                                /* extern */
M2C_UNK func_020d3a4c(s32);                         /* extern */
extern void *data_021e4f88;
extern M2C_UNK data_021e4f8c;
extern M2C_UNK data_021e53b0;
extern M2C_UNK func_020e357c;

void func_020e34c0(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_020d3a38();
    if (data_021e4f88 == NULL) {
        data_021e4f88 = arg0;
        func_020e3568(arg0 + 0xC4);
        func_020e3568(&data_021e4f8c);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        func_020d1ad4(arg0, &func_020e357c, arg0, &data_021e53b0, 0x400, 0x14);
        func_020d1f34(arg0);
    }
    func_020d3a4c(temp_r4);
}
