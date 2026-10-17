/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0201c040();                                /* extern */
M2C_UNK func_02027e6c(s32, u16);                    /* extern */
M2C_UNK func_02027ec0(s32, u16);                    /* extern */
M2C_UNK func_02027f14(s32, u16);                    /* extern */
M2C_UNK func_02027f68(s32);                         /* extern */

void func_0201ce38(void *arg0, u16 arg1, u16 arg2) {
    if (func_0201c040() != 0) {
        return;
    }
    M2C_FIELD(arg0, u16 *, 0x96) = arg1;
    M2C_FIELD(arg0, u16 *, 0x98) = arg2;
    func_02027f68(M2C_FIELD(arg0, s32 *, 0x20));
    func_02027f14(M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, u16 *, 0x96));
    func_02027e6c(M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, u16 *, 0x98));
    func_02027ec0(M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, u16 *, 0x90));
    func_02027f68(M2C_FIELD(arg0, s32 *, 0x1C));
    func_02027f14(M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, u16 *, 0x96));
    func_02027e6c(M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, u16 *, 0x98));
    func_02027ec0(M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, u16 *, 0x90));
    func_02027f68(M2C_FIELD(arg0, s32 *, 0x24));
    func_02027f14(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, u16 *, 0x96));
    func_02027e6c(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, u16 *, 0x98));
    func_02027ec0(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, u16 *, 0x90));
}
