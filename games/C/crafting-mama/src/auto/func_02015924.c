#include "m2c.h"

M2C_UNK func_02015894();                            /* extern */
s32 func_02019d04();                                /* extern */
M2C_UNK func_02019d18(s32);                         /* extern */
M2C_UNK func_02019f88();                            /* extern */
extern M2C_UNK data_02093fd0;

void func_02015924(void) {
    s32 temp_r4;

    temp_r4 = func_02019d04();
    if (M2C_FIELD(M2C_FIELD(&data_02093fd0, void **, 0x10), s32 *, 0x1320) != 0) {
        func_02019f88();
    }
    func_02015894();
    func_02019d18(temp_r4);
}
