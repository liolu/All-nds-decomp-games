#include "engine.h"

#include "m2c.h"

M2C_UNK func_02006be0(void);

void func_02006bf4(M2C_UNK);

void func_0200766c(M2C_UNK, M2C_UNK, M2C_UNK);

M2C_UNK func_02014078(M2C_UNK);

extern s32 data_0215088c;

s32 func_02012cf8(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_02006be0();
    if ((data_0215088c != 0) && (func_02014078(arg0) != 0)) {
        func_0200766c(((arg0 - 1) * 0x16) + (data_0215088c + 0x1340), data_0215088c + 0x1772, 0x16);
        func_02006bf4(temp_r4);
        return data_0215088c + 0x1772;
    }
    func_02006bf4(temp_r4);
    return 0;
}
