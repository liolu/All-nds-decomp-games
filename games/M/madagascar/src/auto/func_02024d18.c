/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020117a8();                            /* extern */
M2C_UNK func_020246e8(void *, s32, M2C_UNK);        /* extern */

void func_02024d18(void *arg0, s32 arg1) {
    func_020117a8();
    if (arg1 != 0) {
        func_020246e8(arg0 + 0x13C, M2C_FIELD(M2C_FIELD(arg0, void **, 0x17C), s32 *, 4), 0);
        return;
    }
    func_020246e8(arg0 + 0x13C, M2C_FIELD(M2C_FIELD(arg0, void **, 0x17C), s32 *, 8), 0);
}
