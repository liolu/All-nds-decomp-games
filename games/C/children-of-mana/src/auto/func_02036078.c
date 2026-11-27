/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02056488(s32, s32);                    /* extern */
extern M2C_UNK data_02117218;

void func_02036078(s32 arg0, s32 arg1) {
    if (arg1 == 0) {
        func_02056488(0x0400006C, arg0);
        M2C_FIELD(&data_02117218, s32 *, 0) = arg0;
        return;
    }
    func_02056488(0x0400106C, arg0);
    M2C_FIELD(&data_02117218, s32 *, 4) = arg0;
}
