#include "m2c.h"

M2C_UNK func_020075b0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02018488(M2C_UNK *, s32);              /* extern */
s32 func_02018554(M2C_UNK *, void *, M2C_UNK);      /* extern */
M2C_UNK func_0207efc8(void *, M2C_UNK);             /* extern */
M2C_UNK func_0207f384(void *);                      /* extern */

void func_0207f308(void *arg0, s32 arg1) {
    u8 sp0[1024];

    func_020075b0(arg0, 0, 0x40);
    M2C_FIELD(arg0, s32 *, 0)    = 0x40;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    func_0207f384(arg0 + 4);
    func_0207efc8(arg0 + 0x10, 0);
    func_02018488(sp0, 0xEDB88320);
    M2C_FIELD(arg0, s32 *, 0x3C) = func_02018554(sp0, arg0, 0x3C);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) | 1);
}
