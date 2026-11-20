#include "m2c.h"

M2C_UNK func_0201882c(M2C_UNK *);                   /* extern */
M2C_UNK func_0201edf0();                            /* extern */
M2C_UNK func_0201f4d0();                            /* extern */
extern s32 data_020944e8;
extern M2C_UNK data_020944ec;

void func_0201ed90(void) {
    if (data_020944e8 != 0) {
        return;
    }
    data_020944e8 = 1;
    func_0201882c(&data_020944ec);
    func_0201edf0();
    func_0201f4d0();
}
