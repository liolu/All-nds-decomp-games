/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202943c(void *, M2C_UNK);             /* extern */
s32 func_0206bee4(M2C_UNK *);                       /* extern */
extern u8 data_020d0288;
extern M2C_UNK func_0202bc98;

void func_0202a508(void *arg0, void *arg1) {
    if (M2C_FIELD(arg1, u16 *, 2) == 0) {
        M2C_FIELD(arg0, s8 *, 0x4F7) = 0;
        M2C_FIELD(arg0, s16 *, 0x18) = 0;
        if (data_020d0288 == 1) {
            M2C_FIELD(arg0, s32 *, 0xC) = func_0206bee4(&func_0202bc98);
            if (M2C_FIELD(arg0, s32 *, 0xC) == 2) {
                return;
            }
            M2C_FIELD(arg0, s32 *, 0x5CC) = 3;
            M2C_FIELD(arg0, s32 *, 4)     = 0;
            func_0202943c(arg0, 8);
            return;
        }
        M2C_FIELD(arg0, s32 *, 4) = 3;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x5CC) = 3;
    M2C_FIELD(arg0, s32 *, 4)     = 0;
    func_0202943c(arg0, 8);
}
