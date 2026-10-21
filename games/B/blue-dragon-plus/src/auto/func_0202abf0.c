#include "m2c.h"

M2C_UNK func_0202ab60();                            /* extern */
M2C_UNK func_0202aca4(s32, s32 *, s32);             /* extern */
M2C_UNK func_020395e8(s32, s32 *, u32, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020397ec(s32, s32 *, u32, M2C_UNK *, M2C_UNK *); /* extern */
extern s32 data_020826b8;
extern M2C_UNK data_0215c0cc;
extern M2C_UNK data_0215c0d0;
extern M2C_UNK func_0202abd4;

void func_0202abf0(s32 *arg0, u32 arg1) {
    if ((arg1 < 0x100U) || (data_020826b8 == -1)) {
        func_0202aca4(*arg0, ((s8 *) arg0 + 4), (arg1 >> 2) - 1);
        return;
    }
    func_0202ab60();
    M2C_FIELD(&data_0215c0cc, s32 *, 4) = 1;
    if (M2C_FIELD(&data_0215c0cc, s32 *, 8) != 0) {
        func_020397ec(data_020826b8, arg0, arg1, &func_0202abd4, &data_0215c0d0);
        return;
    }
    func_020395e8(data_020826b8, arg0, arg1, &func_0202abd4, &data_0215c0d0);
}
