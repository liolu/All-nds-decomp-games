/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02043d94(M2C_UNK, s32);                /* extern */
M2C_UNK func_02043da8(M2C_UNK, s32);                /* extern */
s32 func_02043dbc(M2C_UNK);                         /* extern */
s32 func_02043ea4(M2C_UNK);                         /* extern */
extern s32 data_020b0108;

void func_02044068(void) {
    if (data_020b0108 != 0) {
        return;
    }
    data_020b0108 = 1;
    func_02043da8(0, func_02043ea4(0));
    func_02043d94(0, func_02043dbc(0));
    func_02043d94(2, 0);
    func_02043da8(2, 0);
    func_02043da8(3, func_02043ea4(3));
    func_02043d94(3, func_02043dbc(3));
    func_02043da8(4, func_02043ea4(4));
    func_02043d94(4, func_02043dbc(4));
    func_02043da8(5, func_02043ea4(5));
    func_02043d94(5, func_02043dbc(5));
    func_02043da8(6, func_02043ea4(6));
    func_02043d94(6, func_02043dbc(6));
}
