#include "m2c.h"

M2C_UNK func_02006ee8(s32, M2C_UNK, M2C_UNK);       /* extern */
u16 func_0200f694();                                /* extern */
M2C_UNK func_02044454();                            /* extern */
M2C_UNK func_020448c4(M2C_UNK, u16, u16);           /* extern */
M2C_UNK func_02044ddc(void *, M2C_UNK);             /* extern */
M2C_UNK func_02044f48(void *, M2C_UNK);             /* extern */
s32 func_02045094(s32, M2C_UNK);                    /* extern */
extern M2C_UNK data_020dd620;

void func_02044fe8(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x458) == 0) {
        func_02044454();
    } else {
        M2C_FIELD(arg0, u16 *, 0x45A) = func_0200f694();
        func_02044f48(arg0, 1);
        func_02006ee8(M2C_FIELD(&data_020dd620, s32 *, 8), 0, 0xC0);
        func_020448c4(4, M2C_FIELD(arg0, u16 *, 0x45A), M2C_FIELD(arg0, u16 *, 0x458));
    }
    M2C_FIELD(arg0, s32 *, 0x484) = (s32) (func_02045094(M2C_FIELD(&data_020dd620, s32 *, 4), 0x78) + 0xB4);
    M2C_FIELD(arg0, s32 *, 0)     = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~7);
    M2C_FIELD(arg0, s32 *, 4)     = (s32) (M2C_FIELD(arg0, s32 *, 4) & ~0x07000000);
    func_02044ddc(arg0, 3);
    M2C_FIELD(arg0, s32 *, 0x468) = 0;
}
