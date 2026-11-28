/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02024624(void);
void func_02024638(M2C_UNK);
M2C_UNK func_0202542c(void);

extern M2C_UNK data_020ec76c;

s32 func_020252e4(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    temp_r0 = func_02024624();
    if (M2C_FIELD(&data_020ec76c, s32 *, 0) != 0) {
        func_02024638(temp_r0);
        return 1;
    }
    M2C_FIELD(&data_020ec76c, s32 *, 0) = 1;
    func_02024638(temp_r0);
    M2C_FIELD(&data_020ec76c, s32 *, 0x14) = 1;
    M2C_FIELD(&data_020ec76c, s32 *, 0x18) = 0;
    M2C_FIELD(&data_020ec76c, s32 *, 8)    = arg0;
    M2C_FIELD(&data_020ec76c, s32 *, 4)    = arg1;
    M2C_FIELD(&data_020ec76c, s32 *, 0x10) = arg2;
    if (func_0202542c() != 0) {
        return 0;
    }
    return 3;
}
