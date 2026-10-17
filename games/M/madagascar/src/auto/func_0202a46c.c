/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0202943c(M2C_UNK, M2C_UNK);
void func_0202a4ec(M2C_UNK);
M2C_UNK func_0206bb04(M2C_UNK, M2C_UNK, M2C_UNK);

void func_0202a46c(s32 arg0, s32 arg1) {
    if (M2C_FIELD(arg1, u16 *, 2) == 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = func_0206bb04((s32) func_0202a4ec, arg0 + 0x324, 0);
        if (M2C_FIELD(arg0, s32 *, 0xC) == 2) {
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x5CC) = 3;
        M2C_FIELD(arg0, s32 *, 4)     = 0;
        func_0202943c(arg0, 5);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x5CC) = 3;
    M2C_FIELD(arg0, s32 *, 4)     = 0;
    func_0202943c(arg0, 5);
}
