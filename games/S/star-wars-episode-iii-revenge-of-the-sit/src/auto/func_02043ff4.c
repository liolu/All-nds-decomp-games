/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02043790();                                /* extern */
M2C_UNK func_02043d94(M2C_UNK, s32);                /* extern */
M2C_UNK func_02043da8(M2C_UNK, s32);                /* extern */
s32 func_02043dbc(M2C_UNK);                         /* extern */
s32 func_02043ea4(M2C_UNK);                         /* extern */
M2C_UNK func_02044724(s32);                         /* extern */
extern s32 data_020b010c;

void func_02043ff4(void) {
    func_02043da8(2, func_02043ea4(2));
    func_02043d94(2, func_02043dbc(2));
    if ((data_020b010c != 0) && ((func_02043790() & 3) != 1)) {
        return;
    }
    func_02044724(0x0200002B);
}
