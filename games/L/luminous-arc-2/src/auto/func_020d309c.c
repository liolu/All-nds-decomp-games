#include "m2c.h"

s32 func_02011a2c(M2C_UNK *, M2C_UNK *, u16, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_020d2104();                            /* extern */
extern s32 data_02186520;
extern s32 data_02186524;
extern M2C_UNK data_021869c0;
extern M2C_UNK data_02186e40;
extern M2C_UNK func_020d3110;

s32 func_020d309c(void) {
    if (func_02011a2c(&func_020d3110, &data_021869c0, (u16) data_02186520, &data_02186e40, (s32) (u16) data_02186524, 1) ==
        2) {
        return 1;
    }
    func_020d2104();
    return 0;
}
