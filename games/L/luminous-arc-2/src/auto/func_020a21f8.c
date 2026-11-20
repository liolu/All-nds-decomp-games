#include "m2c.h"

M2C_UNK func_02006f34();                            /* extern */
M2C_UNK func_02007558(s32, s32, s32);               /* extern */
M2C_UNK func_0200a714(M2C_UNK *);                   /* extern */
s32 func_0200a9f4(M2C_UNK *, M2C_UNK *);            /* extern */
s32 func_020cd52c(M2C_UNK *);                       /* extern */
s32 func_020cd7a4();                                /* extern */
M2C_UNK func_020cd7d0(s32);                         /* extern */
extern M2C_UNK data_02129d20;
extern M2C_UNK data_02129d34;
extern u16 data_021728cc;
extern M2C_UNK data_021728d4;

void func_020a21f8(s32 arg0) {
    s32 temp_r4;

    if (arg0 != 0) {
        temp_r4 = func_020cd52c(&data_02129d20);
        func_02007558(temp_r4, arg0, func_020cd7a4());
        func_020cd7d0(temp_r4);
    }
    func_0200a714(&data_021728d4);
    if (func_0200a9f4(&data_021728d4, &data_02129d34) == 0) {
        func_02006f34();
    }
    data_021728cc += 1;
}
