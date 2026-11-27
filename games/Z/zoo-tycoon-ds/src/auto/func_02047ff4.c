/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002e88();                            /* extern */
M2C_UNK func_02002ec8();                            /* extern */
M2C_UNK func_02002f00();                            /* extern */
M2C_UNK func_020055d4(void *);                      /* extern */
M2C_UNK func_020096a8();                            /* extern */
M2C_UNK func_02048040(void *);                      /* extern */
M2C_UNK func_0204805c(void *);                      /* extern */
M2C_UNK func_02067f9c();                            /* extern */
M2C_UNK func_0206812c();                            /* extern */

void func_02047ff4(s32 arg0, void *arg1) {
    func_02002ec8();
    func_02002e88();
    func_02002f00();
    func_0206812c();
    func_02067f9c();
    func_020096a8();
    if (M2C_FIELD(arg1, u8 *, 0xB2) == 0) {
        func_02048040(arg1);
    }
    func_020055d4(arg1);
    func_0204805c(arg1);
}
