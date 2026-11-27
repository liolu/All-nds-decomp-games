/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e0f8();                            /* extern */
M2C_UNK func_0200f2c4();                            /* extern */
M2C_UNK func_0201006c(s16);                         /* extern */

void func_02091ad8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xE4) == 0) {
        return;
    }
    func_0201006c(M2C_FIELD(arg0, s16 *, 4));
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x14) != 0) {
        func_0200e0f8();
        M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x14) = 0;
    }
    if (M2C_FIELD(arg0, void **, 8) != NULL) {
        func_0200f2c4();
        M2C_FIELD(arg0, void **, 8) = NULL;
    }
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        func_0200e0f8();
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0x14) != 0) {
        func_0200e0f8();
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0x14) = 0;
    }
    if (M2C_FIELD(arg0, void **, 0x14) != NULL) {
        func_0200f2c4();
        M2C_FIELD(arg0, void **, 0x14) = NULL;
    }
    *(s32 *) 0x04001000         = (*(s32 *) 0x04001000 & ~0x1F00) | 0x1100;
    M2C_FIELD(arg0, u8 *, 0xE4) = 0U;
}
