/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202cb08(M2C_UNK);                         /* extern */
M2C_UNK func_020485a4(void *);                      /* extern */
M2C_UNK func_02048c18(s32, M2C_UNK);                /* extern */
M2C_UNK func_02048dec();                            /* extern */
M2C_UNK func_02061cf0(M2C_UNK);                     /* extern */
extern M2C_UNK data_02082848;
extern void *data_020d0250;

void *func_02024578(void *arg0, M2C_UNK arg1) {
    data_020d0250             = arg0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_020485a4(arg0 + 0xC);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(&data_02082848, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(&data_02082848, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(&data_02082848, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(&data_02082848, s32 *, 0xC);
    M2C_FIELD(arg0, s8 *, 0x3C)  = 0;
    func_02061cf0(0x40000);
    func_02048dec();
    M2C_FIELD(arg0, s32 *, 0x28) = func_0202cb08(arg1);
    func_02048c18(M2C_FIELD(arg0, s32 *, 0x28), arg1);
    M2C_FIELD(arg0, s32 *, 0x38) = 0x7F;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x38);
    M2C_FIELD(arg0, s32 *, 0x30) = 0x3F;
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x10) = -1;
    M2C_FIELD(arg0, s32 *, 0x14) = -1;
    return arg0;
}
