#include "m2c.h"

M2C_UNK func_020c6bb0();                            /* extern */
M2C_UNK func_020c8318(s32, void *);                 /* extern */
extern M2C_UNK data_020e7884;
extern s32 data_020fd278;

void *func_020cb958(void *arg0) {
    func_020c6bb0();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e7884;
    M2C_FIELD(arg0, s32 *, 0xB0)   = 0;
    func_020c8318(data_020fd278, arg0);
    M2C_FIELD(arg0, s32 *, 0xA8) = (s32) ((M2C_FIELD(arg0, s32 *, 0xA8) & ~0x80000000) | 0x80000000);
    M2C_FIELD(arg0, s32 *, 0xAC) = (s32) (M2C_FIELD(arg0, s32 *, 0xAC) & ~1);
    return arg0;
}
