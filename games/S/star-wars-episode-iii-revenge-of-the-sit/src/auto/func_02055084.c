/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204da9c(s32);                         /* extern */
s32 func_0204e13c(s32, s32, u16);                   /* extern */
M2C_UNK func_02054d1c(M2C_UNK);                     /* extern */
M2C_UNK func_020565e4();                            /* extern */
extern u16 data_020b3cf0;
extern s32 data_020b3cfc;
extern void *data_020b3cf8;
extern void *data_020b3cf4;

s32 func_02055084(void) {
    s32 temp_r0;

    M2C_FIELD(data_020b3cf8, s16 *, 0x528) = 0;
    M2C_FIELD(data_020b3cf8, s16 *, 0x52A) = 0;
    M2C_FIELD(data_020b3cf8, s16 *, 0x526) = 0;
    M2C_FIELD(data_020b3cf8, s16 *, 0x548) = 0;
    func_02054d1c(0xA);
    if (M2C_FIELD(data_020b3cf4, s32 *, 0x1320) == 0) {
        do {
            temp_r0 = func_0204e13c(data_020b3cfc, M2C_FIELD(data_020b3cf8, s32 *, 0x508), data_020b3cf0);
        } while (temp_r0 == 4);
        if (temp_r0 != 2) {
            return 8;
        }
        func_0204da9c(M2C_FIELD(data_020b3cf8, s32 *, 0x508));
        M2C_FIELD(data_020b3cf8, s8 *, 0x50D) = 1;
        return 0;
    }
    func_0204da9c(M2C_FIELD(data_020b3cf8, s32 *, 0x508));
    M2C_FIELD(data_020b3cf8, s8 *, 0x50D) = 1;
    func_020565e4();
    return 0;
}
