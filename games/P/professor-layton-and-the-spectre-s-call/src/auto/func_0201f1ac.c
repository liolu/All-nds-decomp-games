#include "m2c.h"

M2C_UNK func_02014f4c(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_02015334(void *);                      /* extern */
s32 func_0201732c();                                /* extern */
M2C_UNK func_02017340(s32);                         /* extern */
M2C_UNK func_0201f238(M2C_UNK *);                   /* extern */
extern void *data_020376e8;
extern M2C_UNK data_020376ec;
extern M2C_UNK data_02037b10;
extern M2C_UNK func_0201f24c;

void func_0201f1ac(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_0201732c();
    if (data_020376e8 == NULL) {
        data_020376e8 = arg0;
        func_0201f238(arg0 + 0xC4);
        func_0201f238(&data_020376ec);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        func_02014f4c(arg0, &func_0201f24c, arg0, &data_02037b10, 0x400, 0x14);
        func_02015334(arg0);
    }
    func_02017340(temp_r4);
}
