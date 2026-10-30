#include "m2c.h"

M2C_UNK func_02053d50(s32, s32, s32, s32);          /* extern */
s32 func_020547dc(s32);                             /* extern */
M2C_UNK func_0205a38c(s32, s32, s32, s32);          /* extern */
M2C_UNK func_0205eb18(s32, s32, s32, s32);          /* extern */
M2C_UNK func_020605d0(s32, s32, void *, s32, s32);  /* extern */
M2C_UNK func_02063b54(s32, s32, s32, s32, s32);     /* extern */
M2C_UNK func_0206bf54(s32, s32, s32, s32, void *);  /* extern */
M2C_UNK func_02072940(s32, s32);                    /* extern */
M2C_UNK func_020b8838(s32, s32);                    /* extern */

void func_02069578(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    func_02053d50(M2C_FIELD(arg0, s32 *, 0x14), arg1, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0x2C));
    func_02072940(M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x14));
    func_0206bf54(M2C_FIELD(arg0, s32 *, 0x34), arg1, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0x2C), arg0);
    func_0205a38c(M2C_FIELD(arg0, s32 *, 0xC), arg1, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0x14));
    func_0205eb18(M2C_FIELD(arg0, s32 *, 0x10), arg1, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0x2C));
    func_02063b54(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x2C), arg1, M2C_FIELD(arg0, s32 *, 4),
                  M2C_FIELD(arg0, s32 *, 0x20));
    func_020605d0(M2C_FIELD(arg0, s32 *, 0x20), arg1, arg0, M2C_FIELD(arg0, s32 *, 4),
                  func_020547dc(M2C_FIELD(arg0, s32 *, 0x14)));
    func_020b8838(M2C_FIELD(arg0, s32 *, 0xB0), arg1);
}
