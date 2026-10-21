#include "m2c.h"

M2C_UNK func_02004dfc(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_02005198(void *);                      /* extern */
s32 func_02006be0();                                /* extern */
M2C_UNK func_02006bf4(s32);                         /* extern */
M2C_UNK func_02018244(M2C_UNK *);                   /* extern */
extern void *data_02150aa8;
extern M2C_UNK data_02150aac;
extern M2C_UNK data_02150ed0;
extern M2C_UNK func_02018258;

void func_020181b8(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_02006be0();
    if (data_02150aa8 == NULL) {
        data_02150aa8 = arg0;
        func_02018244(arg0 + 0xC4);
        func_02018244(&data_02150aac);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        func_02004dfc(arg0, &func_02018258, arg0, &data_02150ed0, 0x400, 0x14);
        func_02005198(arg0);
    }
    func_02006bf4(temp_r4);
}
