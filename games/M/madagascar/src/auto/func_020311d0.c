/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020242d4(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_02024654(void);
void func_020246e8(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02047248(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0204729c(M2C_UNK, M2C_UNK, M2C_UNK);

void func_020311d0(s32 arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, s32 *, 0x2B0) = 0;
    func_020246e8(M2C_FIELD(arg0, s32 *, 0x1C4), M2C_FIELD(arg0, s32 *, 0x1E0), 0);
    func_0204729c(arg0, arg0 + 0x1FC, (s32) M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x1C4), u8 *, 0x34));
    func_02047248(arg0, arg0 + 0x208, 0);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x2A4);
    if (temp_r4 == 0) {
        return;
    }
    func_020242d4(func_02024654(), temp_r4, 0);
}
