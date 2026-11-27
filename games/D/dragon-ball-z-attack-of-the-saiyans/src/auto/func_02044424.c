#include "m2c.h"

s32 func_0208058c(s32, s32);                        /* extern */
extern M2C_UNK data_02094a5c;
extern void *data_020d1d24;

s32 func_02044424(s32 arg0, s32 arg1) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(data_020d1d24, void **, 0x30);
    if ((s32) (u16) ((func_0208058c(arg1 - ((s32) M2C_FIELD(temp_r2, s32 *, 0x68) >> 0xC),
                                    arg0 - ((s32) M2C_FIELD(temp_r2, s32 *, 0x64) >> 0xC)) -
                      ((u16 *) &data_02094a5c)[M2C_FIELD(M2C_FIELD(data_020d1d24, void **, 0x30), u8 *, 0x6C)]) +
                     0x3000) < 0x6000) {
        return 1;
    }
    return 0;
}
