/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0203ad70();                                /* extern */
M2C_UNK func_0204c8cc(s32, M2C_UNK *, M2C_UNK);     /* extern */
s32 func_0204cd18();                                /* extern */
extern M2C_UNK data_02087564;
extern M2C_UNK data_02087574;

void func_02007e0c(void) {
    if (func_0203ad70() & 1) {
        func_0204c8cc(func_0204cd18(), &data_02087564, 0);
        return;
    }
    func_0204c8cc(func_0204cd18(), &data_02087574, 0);
}
