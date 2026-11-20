#include "m2c.h"

M2C_UNK func_02005888(M2C_UNK *);                   /* extern */
M2C_UNK func_02007fa0();                            /* extern */
M2C_UNK func_020086b0();                            /* extern */
extern s32 data_02147c84;
extern M2C_UNK data_02147c88;

void func_02007f40(void) {
    if (data_02147c84 != 0) {
        return;
    }
    data_02147c84 = 1;
    func_02005888(&data_02147c88);
    func_02007fa0();
    func_020086b0();
}
