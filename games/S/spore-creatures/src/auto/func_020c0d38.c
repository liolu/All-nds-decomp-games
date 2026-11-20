#include "m2c.h"

M2C_UNK func_020b4efc(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_020b5298(void *);                      /* extern */
s32 func_020b6bd0();                                /* extern */
M2C_UNK func_020b6be4(s32);                         /* extern */
M2C_UNK func_020c0dc4(M2C_UNK *);                   /* extern */
extern void *data_020f4528;
extern M2C_UNK data_020f452c;
extern M2C_UNK data_020f4950;
extern M2C_UNK func_020c0dd8;

void func_020c0d38(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_020b6bd0();
    if (data_020f4528 == NULL) {
        data_020f4528 = arg0;
        func_020c0dc4(arg0 + 0xC4);
        func_020c0dc4(&data_020f452c);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        func_020b4efc(arg0, &func_020c0dd8, arg0, &data_020f4950, 0x400, 0x14);
        func_020b5298(arg0);
    }
    func_020b6be4(temp_r4);
}
