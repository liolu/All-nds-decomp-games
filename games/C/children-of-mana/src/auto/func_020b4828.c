/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202ee40(s32, M2C_UNK);                /* extern */
M2C_UNK func_020abedc(s32);                         /* extern */
M2C_UNK func_020b03ac();                            /* extern */
M2C_UNK func_020bf210();                            /* extern */
M2C_UNK func_020bf254();                            /* extern */
void *func_020bf580(M2C_UNK);                       /* extern */
M2C_UNK func_020c87d4(s32, M2C_UNK);                /* extern */
s32 func_020c87ec();                                /* extern */

s32 func_020b4828(void *arg0) {
    func_020b03ac();
    func_020bf580(2);
    func_020bf254();
    func_020bf580(1);
    func_020bf254();
    func_020bf580(2);
    func_020bf210();
    func_020bf580(1);
    func_020bf210();
    func_020c87d4(func_020c87ec(), 0);
    func_0202ee40(M2C_FIELD(arg0, s32 *, 0x20), 1);
    func_020abedc(M2C_FIELD(arg0, s32 *, 0x24));
    if ((M2C_FIELD(func_020bf580(1), s32 *, 8) != 0) || (M2C_FIELD(func_020bf580(2), s32 *, 8) != 0)) {
        return 0;
    }
    return 1;
}
