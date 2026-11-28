#include "m2c.h"

extern M2C_UNK data_020e3380;
extern void **data_020efdc0;
extern u8 data_020fc4a4;

s32 func_020955bc(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    if (data_020fc4a4 != 0) {
        return 1;
    }
    temp_r4 = M2C_FIELD(*data_020efdc0, s32(**)(void **, M2C_UNK *, M2C_UNK), 8)(data_020efdc0, &data_020e3380, arg1);
    M2C_FIELD(*data_020efdc0, M2C_UNK(**)(void **, M2C_UNK), 0x6C)(data_020efdc0, 0x60);
    M2C_FIELD(*data_020efdc0, M2C_UNK(**)(void **, M2C_UNK), 0x64)(data_020efdc0, 0x7F);
    return temp_r4;
}
