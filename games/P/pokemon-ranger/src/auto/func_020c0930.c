/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020c07bc(M2C_UNK, M2C_UNK);
void func_020c08a8(M2C_UNK);
void func_020c0d4c(M2C_UNK);

extern s32 data_020f5ab0;
extern M2C_UNK data_020f630c;

void func_020c0930(s32 arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x10C) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_020c08a8(arg0);
    M2C_FIELD(arg0, M2C_UNK(**)(s32), 0x160)(arg0);
    func_020c07bc((s32) &data_020f630c, arg0);
    if (data_020f5ab0 != 0) {
        func_020c07bc(data_020f5ab0 + 0x4AC, arg0);
    }
    func_020c0d4c(arg0);
}
