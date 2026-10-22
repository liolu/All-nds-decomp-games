/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202024c(M2C_UNK *, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02037e20(s32, M2C_UNK);                /* extern */
M2C_UNK func_02037edc(s32);                         /* extern */
extern M2C_UNK data_0215bf74;
extern M2C_UNK data_0215c108;

void func_020334d4(void *arg0) {
    void **temp_r0;

    func_02037edc(M2C_FIELD(arg0, s32 *, 0x30));
    func_02037e20(M2C_FIELD(arg0, s32 *, 0x30), 0);
    temp_r0 = M2C_FIELD(arg0, void ***, 0x2C);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, void *, void *), 8)(temp_r0, arg0 + 0x24, arg0 + 0x14);
    if (M2C_FIELD(arg0, u8 *, 0x3C) != 0) {
        func_0202024c(&data_0215c108, M2C_FIELD(arg0, s32 *, 0x34), 0, 0x10);
        return;
    }
    func_0202024c(&data_0215bf74, M2C_FIELD(arg0, s32 *, 0x34), 0, 0x10);
}
