#include "m2c.h"

M2C_UNK func_0202312c(s32, M2C_UNK *, s32 *, M2C_UNK, s32); /* extern */
s32 func_020348ec(s32);                             /* extern */
s32 func_02095250();                                /* extern */
s32 func_020953d0(s32);                             /* extern */
s32 func_020953d8(s32);                             /* extern */
M2C_UNK func_0209542c(s32, M2C_UNK);                /* extern */
M2C_UNK func_0209585c(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_020cb36c;
extern M2C_UNK data_020cb390;

void func_020476d8(void *arg0) {
    s32 sp4;
    s32 var_r0;

    var_r0 = func_020348ec(0x63C);
    if (var_r0 != 0) {
        var_r0 = func_02095250();
    }
    M2C_FIELD(arg0, s32 *, 0x44) = var_r0;
    func_0209542c(var_r0, 0);
    sp4 = func_020953d0(M2C_FIELD(arg0, s32 *, 0x44));
    func_0202312c(M2C_FIELD(arg0, s32 *, 0x4C), &data_020cb36c, &sp4, 0x20, 0x200);
    sp4 = func_020953d8(M2C_FIELD(arg0, s32 *, 0x44));
    func_0202312c(M2C_FIELD(arg0, s32 *, 0x4C), &data_020cb390, &sp4, 0x24, 0x4000);
    func_0209585c(M2C_FIELD(arg0, s32 *, 0x44), 0x4000, 0, 0x200, 0);
}
