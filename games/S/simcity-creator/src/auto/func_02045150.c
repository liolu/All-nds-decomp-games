#include "m2c.h"

s32 func_02044430();                                /* extern */
M2C_UNK func_02044fe8();                            /* extern */
s32 func_02045094(s32, M2C_UNK);                    /* extern */
M2C_UNK func_020450dc();                            /* extern */
extern M2C_UNK data_020dd620;

void func_02045150(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x470) = 1;
    if (func_02044430() != 1) {
        return;
    }
    if (func_02045094(M2C_FIELD(&data_020dd620, s32 *, 4), 2) != 0) {
        func_020450dc(arg0);
        return;
    }
    func_02044fe8(arg0);
}
