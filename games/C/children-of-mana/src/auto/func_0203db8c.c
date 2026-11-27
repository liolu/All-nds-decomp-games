/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02028214();                            /* extern */
M2C_UNK func_02029164();                            /* extern */
M2C_UNK func_0203f588();                            /* extern */
M2C_UNK func_02056590();                            /* extern */
M2C_UNK func_020c2b1c();                            /* extern */
M2C_UNK func_020ca90c();                            /* extern */

void func_0203db8c(void) {
    func_02056590();
    *(s32 *) 0x04001000 &= ~0x10000;
    func_020ca90c();
    func_020c2b1c();
    func_02029164();
    func_02028214();
    func_0203f588();
}
