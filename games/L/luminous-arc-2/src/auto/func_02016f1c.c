#include "m2c.h"

s32 func_02006be0();                                /* extern */
M2C_UNK func_02006bf4(s32);                         /* extern */
M2C_UNK func_02015770(M2C_UNK);                     /* extern */
s32 func_02016ed8();                                /* extern */
s32 func_02017640();                                /* extern */
M2C_UNK func_020177ec(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02150880;
extern M2C_UNK func_02016f10;

s32 func_02016f1c(void) {
    s32 temp_r4;
    s32 var_r5;

    var_r5  = 1;
    temp_r4 = func_02006be0();
    if (M2C_FIELD(M2C_FIELD(&data_02150880, void **, 8), u8 *, 0x50D) == 0) {
        func_02015770(0);
    } else if (M2C_FIELD(M2C_FIELD(&data_02150880, void **, 8), u16 *, 0x526) == 0) {
        M2C_FIELD(M2C_FIELD(&data_02150880, void **, 8), s32 *, 0x5E4) = 0;
        M2C_FIELD(M2C_FIELD(&data_02150880, void **, 8), u16 *, 0x526) = 1U;
        if (func_02017640() != 0) {
            func_020177ec(&func_02016f10);
            var_r5 = 0;
        } else {
            var_r5 = func_02016ed8();
        }
    }
    func_02006bf4(temp_r4);
    return var_r5;
}
