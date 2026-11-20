#include "m2c.h"

M2C_UNK func_02005368(M2C_UNK *);                   /* extern */
M2C_UNK func_02007678();                            /* extern */
M2C_UNK func_02007d88();                            /* extern */
extern s32 data_020d0fe4;
extern M2C_UNK data_020d0fe8;

void func_02007618(void) {
    if (data_020d0fe4 != 0) {
        return;
    }
    data_020d0fe4 = 1;
    func_02005368(&data_020d0fe8);
    func_02007678();
    func_02007d88();
}
