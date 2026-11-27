/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203dcc4();                            /* extern */
M2C_UNK func_0203dcc8();                            /* extern */
M2C_UNK func_0203dd28();                            /* extern */
M2C_UNK func_0203dd58();                            /* extern */
s32 func_0207c9fc();                                /* extern */

void func_0203dc58(void) {
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        if (func_0207c9fc() != 0) {
            func_0203dd28();
            return;
        }
        func_0203dcc8();
        return;
    }
    func_0203dd58();
    func_0203dcc4();
}
