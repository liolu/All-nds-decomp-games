/* compiler: 1.2/sp3  */
#include "m2c.h"

M2C_UNK func_020074fc(M2C_UNK, s32, s32);           /* extern */
M2C_UNK func_020cd7d0(s32);                         /* extern */
extern s8 data_02151424;
extern s8 data_02151425;
extern s8 data_02151430;
extern M2C_UNK *data_0215150c;
extern M2C_UNK data_021701c4;
extern M2C_UNK func_020246a4;

void func_02078f64(void) {
    if (M2C_FIELD(&data_021701c4, s32 *, 4) == 0) {
        return;
    }
    func_020074fc(0, M2C_FIELD(&data_021701c4, s32 *, 4), 0x784);
    func_020cd7d0(M2C_FIELD(&data_021701c4, s32 *, 4));
    M2C_FIELD(&data_021701c4, s32 *, 4) = 0;
    data_02151425                       = 0;
    data_02151424                       = 0;
    data_02151430                       = 0;
    data_0215150c                       = &func_020246a4;
}
