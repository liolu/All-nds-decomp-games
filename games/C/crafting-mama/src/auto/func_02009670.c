#include "m2c.h"

M2C_UNK func_020096fc(M2C_UNK *);                   /* extern */
M2C_UNK func_02017f9c(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_02018250(void *);                      /* extern */
s32 func_02019d04();                                /* extern */
M2C_UNK func_02019d18(s32);                         /* extern */
extern void *data_02093808;
extern M2C_UNK data_0209380c;
extern M2C_UNK data_02093c30;
extern M2C_UNK func_02009710;

void func_02009670(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_02019d04();
    if (data_02093808 == NULL) {
        data_02093808 = arg0;
        func_020096fc(arg0 + 0xC4);
        func_020096fc(&data_0209380c);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        func_02017f9c(arg0, &func_02009710, arg0, &data_02093c30, 0x400, 0x14);
        func_02018250(arg0);
    }
    func_02019d18(temp_r4);
}
