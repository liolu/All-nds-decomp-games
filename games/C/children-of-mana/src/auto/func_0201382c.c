/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001d2c(s32, M2C_UNK, u32);           /* extern */
s32 func_0200f21c(u32, M2C_UNK);                    /* extern */
M2C_UNK func_0200f740(void *);                      /* extern */
M2C_UNK func_020d71c4(s32, M2C_UNK);                /* extern */
u32 func_020d7324(M2C_UNK);                         /* extern */
s32 func_020d7344(M2C_UNK);                         /* extern */

void func_0201382c(void *arg0, M2C_UNK arg1, u32 arg2, u32 arg3) {
    if (func_020d7344(arg1) != 0) {
        M2C_FIELD(arg0, volatile u32 *, 0x38) = func_020d7324(arg1);
        if (arg3 != 0) {
            M2C_FIELD(arg0, volatile u32 *, 0x38) =
                (u32) (M2C_FIELD(arg0, volatile u32 *, 0x38) +
                       ((u32) (arg3 - ((u32) M2C_FIELD(arg0, volatile u32 *, 0x38) % arg3)) % arg3));
        }
        if (((s32) (M2C_FIELD(arg0, volatile s32 *, 0x2C) << 0x1E) >> 0x1E) == 0) {
            M2C_FIELD(arg0, volatile s32 *, 0x34) = func_0200f21c(M2C_FIELD(arg0, volatile u32 *, 0x38), 0);
        } else {
            M2C_FIELD(arg0, volatile s32 *, 0x34) = func_0200f21c(M2C_FIELD(arg0, volatile u32 *, 0x38), 1);
        }
        func_020d71c4(M2C_FIELD(arg0, volatile s32 *, 0x34), arg1);
    } else {
        M2C_FIELD(arg0, volatile u32 *, 0x38) = arg2;
        if (arg3 != 0) {
            M2C_FIELD(arg0, volatile u32 *, 0x38) =
                (u32) (M2C_FIELD(arg0, volatile u32 *, 0x38) +
                       ((u32) (arg3 - ((u32) M2C_FIELD(arg0, volatile u32 *, 0x38) % arg3)) % arg3));
        }
        if (((s32) (M2C_FIELD(arg0, volatile s32 *, 0x2C) << 0x1E) >> 0x1E) == 0) {
            M2C_FIELD(arg0, volatile s32 *, 0x34) = func_0200f21c(M2C_FIELD(arg0, volatile u32 *, 0x38), 0);
        } else {
            M2C_FIELD(arg0, volatile s32 *, 0x34) = func_0200f21c(M2C_FIELD(arg0, volatile u32 *, 0x38), 1);
        }
        func_02001d2c(M2C_FIELD(arg0, volatile s32 *, 0x34), arg1, arg2);
    }
    func_0200f740(arg0);
}
