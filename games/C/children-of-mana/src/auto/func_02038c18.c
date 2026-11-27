/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02043160(void *, s32, s32, M2C_UNK, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_0207f9b4(s32, M2C_UNK);                /* extern */

void func_02038c18(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x74) == 0) {
        func_0207f9b4(M2C_FIELD(arg0, s32 *, 0x634), 1);
    }
    func_02043160(arg0, M2C_FIELD(arg0, s32 *, 0x634), M2C_FIELD(arg0, s32 *, 0x4B8), 6, 0x40000,
                  M2C_FIELD(arg0, s8 *, 0x756) * 0xFFFF, 0x1999, 0x26, 1, 0, 0);
}
