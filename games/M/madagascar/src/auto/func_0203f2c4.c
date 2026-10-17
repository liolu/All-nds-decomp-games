/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000e60(s32, s32);                    /* extern */
M2C_UNK func_020242d4(s32, M2C_UNK *, M2C_UNK);     /* extern */
s32 func_02024654();                                /* extern */
s32 func_0203d3d8(void *);                          /* extern */
s32 func_0203d9c8(void *);                          /* extern */
M2C_UNK func_0203de10(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_02082848;
extern s32 data_0208efcc;
extern s32 data_0208efe8;
extern s32 data_020cf83c;

void func_0203f2c4(void *arg0) {
    func_0203de10(arg0, 2);
    if (func_0203d9c8(arg0) == 0) {
        return;
    }
    if (func_0203d3d8(arg0) == 0) {
        return;
    }
    if ((func_0203d3d8(arg0) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x210) < (s32) data_020cf83c)) {
        M2C_FIELD(arg0, s32 *, 0x210) = (s32) (data_020cf83c + data_0208efcc);
        func_020242d4(func_02024654(), &data_02082848, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x20C) = (s32) M2C_FIELD(arg0, s32 *, 0x178);
    func_02000e60(M2C_FIELD(arg0, s32 *, 0x1BC) + 0x1C, data_0208efe8);
}
