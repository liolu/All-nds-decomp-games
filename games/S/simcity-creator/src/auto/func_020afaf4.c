#include "m2c.h"

M2C_UNK func_02029d98();                            /* extern */
M2C_UNK func_02029dd8(s32);                         /* extern */
M2C_UNK func_0202a590(s32);                         /* extern */
M2C_UNK func_0202a5d4(s32);                         /* extern */
M2C_UNK func_0202c0b4(s32);                         /* extern */
M2C_UNK func_0202c170(s32, M2C_UNK);                /* extern */

void func_020afaf4(void *arg0, M2C_UNK arg1) {
    func_0202c0b4(arg0 + 0xC);
    func_0202c170(arg0 + 0xC, arg1);
    func_0202a590(arg0 + 0xA4);
    func_0202a5d4(arg0 + 0xC8);
    M2C_FIELD(arg0, s32 *, 0x140) = (s32) (arg0 + 0xE8);
    func_02029d98();
    func_02029dd8(M2C_FIELD(arg0, s32 *, 0x140));
    M2C_FIELD(arg0, s32 *, 0x154) = 0;
    M2C_FIELD(arg0, s32 *, 0x158) = 0;
    M2C_FIELD(arg0, s32 *, 0x15C) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x160) = 0x1000;
    M2C_FIELD(arg0, s16 *, 0x164) = 0;
    M2C_FIELD(arg0, s32 *, 0x168) = 2;
    M2C_FIELD(arg0, s32 *, 0x22C) = 0;
    M2C_FIELD(arg0, s32 *, 0x230) = 0;
    M2C_FIELD(arg0, s32 *, 0x234) = 0;
}
