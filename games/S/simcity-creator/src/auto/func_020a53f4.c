#include "m2c.h"

M2C_UNK func_02014050(M2C_UNK *, M2C_UNK *, s32);   /* extern */
M2C_UNK func_02061f2c(s32, void *, M2C_UNK *, s32); /* extern */
M2C_UNK func_020a54bc(void *, s32);                 /* extern */
s32 func_020b137c(s32);                             /* extern */
extern M2C_UNK data_020cf58c;
extern M2C_UNK data_020cf5a8;
extern M2C_UNK data_020cf5c8;

s32 func_020a53f4(void *arg0, s32 arg1) {
    u8 sp0[256];
    s32 temp_r0;

    temp_r0 = func_020b137c(arg1);
    func_02014050(sp0, &data_020cf58c, temp_r0);
    func_02061f2c(M2C_FIELD(arg0, s32 *, 0x2007C), arg0 + 0x200B0, sp0, 0x1220);
    func_02014050(sp0, &data_020cf5a8, temp_r0);
    func_02061f2c(M2C_FIELD(arg0, s32 *, 0x2007C), arg0 + 0x212D0, sp0, 0x5D0);
    func_02061f2c(M2C_FIELD(arg0, s32 *, 0x2007C), arg0 + 0x218A0, &data_020cf5c8, 0x160);
    if ((arg1 != 2) && (arg1 != 4) && (arg1 != 7)) {

    } else {
        func_020a54bc(arg0, arg1);
    }
    return 1;
}
