/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020559ac();              /* extern */
s32 func_02057e68();                             /* extern */
s32 func_02057eb0();                       /* extern */
M2C_UNK func_0206e93c();                            /* extern */

void func_0206ede4(s32 arg0, s32 arg1) {
    u8 sp0[64];

    func_0206e93c();
    *(s32 *) 0x04000440 = 0;
    *(s32 *) 0x04000444 = 0;
    *(s32 *) 0x04000454 = 0;
    if (arg0 != 0) {
        do {

        } while (func_02057eb0(sp0) != 0);
        func_020559ac(sp0, arg0);
    }
    if (arg1 != 0) {
        do {

        } while (func_02057e68(arg1) != 0);
    }
    *(s32 *) 0x04000448     = 1;
    *(M2C_UNK *) 0x04000440 = 2;
}
