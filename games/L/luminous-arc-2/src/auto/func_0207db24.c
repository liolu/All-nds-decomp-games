#include "m2c.h"

M2C_UNK func_0200766c(M2C_UNK *, void *, M2C_UNK);  /* extern */
s32 func_0207bba8();                                /* extern */
s32 func_0207dbe4(void *);                          /* extern */
s32 func_0207dc38(u8);                              /* extern */
extern M2C_UNK data_020dde18;

void func_0207db24(void *arg0, void *arg1, void *arg2) {
    void *temp_r5;

    func_0200766c(&data_020dde18, arg2, 0x58);
    M2C_FIELD(arg2, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg2, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 4);
    if ((u32) M2C_FIELD(arg1, u8 *, 0xD0D) >= 6U) {
        return;
    }
    temp_r5 = arg1 + (func_0207bba8() << 8);
    if (M2C_FIELD(temp_r5, u8 *, 0xC0) != 0) {
        M2C_FIELD(arg2, s32 *, 0xC)  = 0;
        M2C_FIELD(arg2, s32 *, 0x10) = func_0207dbe4(temp_r5 + 0xC0);
        M2C_FIELD(arg2, s32 *, 0x14) = func_0207dc38(M2C_FIELD(temp_r5, u8 *, 0xD0));
        M2C_FIELD(arg2, s32 *, 0x18) = func_0207dbe4(temp_r5 + 0xC4);
        M2C_FIELD(arg2, s32 *, 0x1C) = func_0207dbe4(temp_r5 + 0xC8);
        M2C_FIELD(arg2, s32 *, 0x20) = func_0207dbe4(temp_r5 + 0xCC);
        return;
    }
    M2C_FIELD(arg2, s32 *, 0xC)  = 1;
    M2C_FIELD(arg2, s32 *, 0x10) = 0;
    M2C_FIELD(arg2, s32 *, 0x14) = 0;
    M2C_FIELD(arg2, s32 *, 0x18) = 0;
    M2C_FIELD(arg2, s32 *, 0x1C) = 0;
    M2C_FIELD(arg2, s32 *, 0x20) = 0;
}
