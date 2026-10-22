/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffa37c();                            /* extern */
M2C_UNK func_01ffaef8();                            /* extern */
M2C_UNK func_0200d38c();                            /* extern */
u16 *func_020201d8();                               /* extern */
M2C_UNK func_02034910(void *);                      /* extern */
M2C_UNK func_0204d5b0(s32, void *);                 /* extern */
s32 func_0204d658();                                /* extern */
extern s32 data_021581b0;
extern void **data_0215d690;

void func_02034bfc(void *arg0) {
    func_0200d38c();
    if (M2C_FIELD(arg0, u8 *, 0x38) == 0) {
        data_021581b0 += 1;
        func_01ffa37c();
        func_01ffaef8();
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 0x24) != 0) {
        func_02034910(arg0);
        M2C_FIELD(*data_0215d690, M2C_UNK(**)(), 8)(data_0215d690);
    }
    if (M2C_FIELD(arg0, u8 *, 0x38) == 0) {
        func_0204d5b0(func_0204d658(), arg0);
    }
    if (data_021581b0 != 3) {
        return;
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 0x24) == 0) {
        return;
    }
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & ~0x1F00) | 0x1900;
    *func_020201d8()    = M2C_FIELD(arg0, u16 *, 0x64);
}
