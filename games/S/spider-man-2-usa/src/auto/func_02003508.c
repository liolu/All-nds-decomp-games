/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02003f08(void *);                      /* extern */
M2C_UNK func_0204c8cc(s32, M2C_UNK *, M2C_UNK);     /* extern */
s32 func_0204cd18();                                /* extern */
s32 *func_0204ce64(void *, M2C_UNK);                /* extern */
extern M2C_UNK data_020870c4;

void func_02003508(void *arg0) {
    if ((s32) *func_0204ce64(M2C_FIELD(arg0, void **, 0x2F4), 3) > 0) {
        func_0204c8cc(func_0204cd18(), &data_020870c4, 0);
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F4), u8 *, 0x86) == 0) {
        return;
    }
    func_02003f08(arg0);
}
