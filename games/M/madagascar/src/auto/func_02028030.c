/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202d12c(s32);                             /* extern */
M2C_UNK func_02053cbc(void *);                      /* extern */
M2C_UNK func_02053ce4();                            /* extern */
M2C_UNK func_02055b68(s32);                         /* extern */
M2C_UNK func_020646a0(void *, M2C_UNK *);           /* extern */
extern M2C_UNK data_020d8a74;
extern M2C_UNK data_020d8b30;

void func_02028030(void *arg0) {
    s32 temp_r4;

    if (M2C_FIELD(arg0, u8 *, 0x10) != 0) {
        return;
    }
    temp_r4 = func_0202d12c(M2C_FIELD(arg0, s32 *, 0x14));
    func_020646a0(arg0 + 0x28, &data_020d8b30);
    M2C_FIELD(&data_020d8a74, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_020d8a74, s32 *, 0xFC) & ~8);
    func_02053cbc(arg0 + 4);
    func_02053ce4();
    func_02055b68(temp_r4);
}
