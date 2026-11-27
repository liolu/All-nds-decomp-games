/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020011cc(u8);                          /* extern */

void func_02055b68(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xE0) != 0) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0xB7) = (u8) (M2C_FIELD(arg0, u8 *, 0xB7) + 1);
    if ((u32) M2C_FIELD(arg0, u8 *, 0xB7) <= 0x78U) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0xDC) = (u8) (M2C_FIELD(arg0, u8 *, 0xDC) + 1);
    func_020011cc(M2C_FIELD(arg0, u8 *, 0xDC));
    M2C_FIELD(arg0, s8 *, 0xB2) = 1;
}
