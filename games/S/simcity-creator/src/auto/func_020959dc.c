#include "m2c.h"

M2C_UNK func_02014050(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0202312c(s32, M2C_UNK *, s32 *, M2C_UNK, s32); /* extern */
extern M2C_UNK data_020cee18;
extern M2C_UNK data_020cee20;

void func_020959dc(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    u8 sp8[256];
    s32 sp4;

    func_02014050(sp8, &data_020cee18, arg1);
    sp4 = M2C_FIELD(arg0, s32 *, 4);
    func_0202312c(M2C_FIELD(arg0, s32 *, 0x638), sp8, &sp4, 0x20, arg3 << 5);
    func_02014050(sp8, &data_020cee20, arg1);
    sp4 = M2C_FIELD(arg0, s32 *, 8);
    func_0202312c(M2C_FIELD(arg0, s32 *, 0x638), sp8, &sp4, 0x24, arg2);
}
