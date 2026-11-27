/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020114e4();                            /* extern */
s32 func_02013d0c();                                /* extern */
M2C_UNK func_020cb94c();                            /* extern */
extern s32 data_02129c64;

void func_020cb988(void) {
    if (data_02129c64 != 0) {
        func_020cb94c();
    }
    func_020114e4();
    data_02129c64 = func_02013d0c();
}
