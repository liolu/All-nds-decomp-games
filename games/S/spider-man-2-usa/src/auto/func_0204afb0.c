/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02038c24();                            /* extern */
M2C_UNK func_02054600();                            /* extern */
M2C_UNK func_0205464c();                            /* extern */
M2C_UNK func_02054954();                            /* extern */
M2C_UNK func_0205497c();                            /* extern */
M2C_UNK func_020549a4();                            /* extern */
M2C_UNK func_020549b8();                            /* extern */
M2C_UNK func_020549cc();                            /* extern */
M2C_UNK func_020549e0();                            /* extern */
M2C_UNK func_020549f4();                            /* extern */
M2C_UNK func_02054a08();                            /* extern */

void func_0204afb0(void) {
    func_02038c24();
    func_0205464c();
    *(s32 *) 0x04001000 &= ~0x10000;
    func_02054a08();
    func_020549f4();
    func_020549e0();
    func_020549cc();
    func_020549b8();
    func_020549a4();
    func_0205497c();
    func_02054954();
    func_02054600();
    *(M2C_UNK *) 0x04001000 = (s32) (*(M2C_UNK *) 0x04001000 | 0x10000);
}
