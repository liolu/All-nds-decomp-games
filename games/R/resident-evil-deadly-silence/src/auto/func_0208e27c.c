/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_02085c54(s32);                         /* extern */
M2C_UNK func_02085c9c();                            /* extern */
s32 func_02117de0();                                /* extern */
s32 _fflt(s32);                             /* extern */
M2C_UNK _fmul(M2C_UNK, s32);                /* extern */
extern M2C_UNK data_0211fdd4;

void func_0208e27c(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    if (arg0 < 0x60) {
        _fmul(arg1, _fflt(*((M2C_UNK *) ((s8 *) &data_0211fdd4 + (arg0 * 4)))));
        temp_r4 = func_02117de0();
        func_02085c9c();
        func_02085c54(temp_r4);
    }
}
