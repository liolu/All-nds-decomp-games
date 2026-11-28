/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02000a6c(M2C_UNK, M2C_UNK);
void func_02000a7c(M2C_UNK, M2C_UNK);
void func_02000aac(M2C_UNK, M2C_UNK);

void func_0202b3a4(s32 arg0, s32 arg1, s32 arg2) {
    func_02000aac(M2C_FIELD(arg0, s32 *, 0x2F0) + 4, arg1);
    if (M2C_FIELD(arg0, u8 *, 0x362) != 0) {
        func_02000a6c(M2C_FIELD(arg0, s32 *, 0x2F0) + 4, 0 - M2C_FIELD(arg1, s32 *, 8));
        func_02000a7c(M2C_FIELD(arg0, s32 *, 0x2F0) + 4, 0 - M2C_FIELD(arg1, s32 *, 0));
    }
    func_02000aac(M2C_FIELD(arg0, s32 *, 0x2F0) + 0x1C, arg2);
    if (M2C_FIELD(arg0, u8 *, 0x363) == 0) {
        return;
    }
    func_02000a6c(M2C_FIELD(arg0, s32 *, 0x2F0) + 0x1C, 0 - M2C_FIELD(arg2, s32 *, 8));
    func_02000a7c(M2C_FIELD(arg0, s32 *, 0x2F0) + 0x1C, 0 - M2C_FIELD(arg2, s32 *, 0));
}
