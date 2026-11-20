#include "m2c.h"

M2C_UNK func_02001398(M2C_UNK);                     /* extern */
M2C_UNK func_02004164(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020042a8(M2C_UNK);                     /* extern */
M2C_UNK func_0200497c();                            /* extern */
s32 func_02004ac4();                                /* extern */
M2C_UNK func_02004ad4(M2C_UNK *, s32, M2C_UNK, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_02004ef4();                            /* extern */
extern M2C_UNK data_02162de0;
extern M2C_UNK data_02162e18;
extern M2C_UNK data_021632d8;
extern M2C_UNK func_020af3cc;

void func_020af304(s32 arg0) {
    if (func_02004ac4() == 0) {
        func_0200497c();
    }
    M2C_FIELD(&data_02162de0, s32 *, 4) = arg0;
    func_02004ad4(&data_02162e18, arg0, 0, &data_021632d8, 0x400, 0);
    func_02004ef4();
    func_02001398(0xD4);
    func_02004164(4, &func_020af3cc);
    *(u16 *) 0x04000004 |= 0x20;
    func_020042a8(4);
}
