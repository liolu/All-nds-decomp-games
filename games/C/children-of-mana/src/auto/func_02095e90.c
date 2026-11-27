/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02010bac();                            /* extern */
extern u8 data_02103910;
extern s32 data_02126cc0;
extern s32 data_02126cc4;

void func_02095e90(s32 arg0, void *arg1) {
    if (data_02103910 != 0) {
        M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0) + data_02126cc0);
        M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) + data_02126cc4);
    }
    func_02010bac(arg0);
}
