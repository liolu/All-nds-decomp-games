/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202f284(s32, s32);                        /* extern */
M2C_UNK func_02045f7c();                            /* extern */
extern M2C_UNK data_020c3094;

void *func_0202f224(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    func_02045f7c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c3094;
    M2C_FIELD(arg0, s32 *, 0x2FC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x304)  = (s32) M2C_FIELD(arg3, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x308)  = (s32) M2C_FIELD(arg3, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x300) =
        (s32) (M2C_FIELD(arg0, s32 *, 0x2FC) + func_0202f284(M2C_FIELD(arg0, s32 *, 0x304), M2C_FIELD(arg0, s32 *, 0x308)));
    return arg0;
}
