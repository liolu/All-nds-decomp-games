#include "m2c.h"

M2C_UNK func_02004ad4(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_02004e88(void *);                      /* extern */
s32 func_020066e0();                                /* extern */
M2C_UNK func_020066f4(s32);                         /* extern */
M2C_UNK func_02011468(M2C_UNK *);                   /* extern */
extern void *data_020d4368;
extern M2C_UNK data_020d436c;
extern M2C_UNK data_020d4790;
extern M2C_UNK func_0201147c;

void func_020113dc(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_020066e0();
    if (data_020d4368 == NULL) {
        data_020d4368 = arg0;
        func_02011468(arg0 + 0xC4);
        func_02011468(&data_020d436c);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        func_02004ad4(arg0, &func_0201147c, arg0, &data_020d4790, 0x400, 0x14);
        func_02004e88(arg0);
    }
    func_020066f4(temp_r4);
}
