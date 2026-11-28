/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02020cc0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020211ac(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_020dff64;

void func_020182b8(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_020dff64 != -1) && ((u32) arg2 > 0x1CU)) {
        func_02020cc0(data_020dff64, arg0, arg1 + 0x5000200, arg2);
        return;
    }
    func_020211ac(arg0, arg1 + 0x5000200, arg2);
}
