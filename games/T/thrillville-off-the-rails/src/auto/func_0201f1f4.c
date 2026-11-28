/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0202b3e0();                                /* extern */
extern void *data_020ec2c8;

s32 func_0201f1f4(void) {
    s32 temp_r0;

    temp_r0 = func_0202b3e0();
    if ((temp_r0 == 0x8000) || (temp_r0 == 0)) {
        return 0;
    }
    M2C_FIELD(data_020ec2c8, u16 *, 0x584) = (u16) (M2C_FIELD(data_020ec2c8, u16 *, 0x584) + 1);
    do {
        M2C_FIELD(data_020ec2c8, u16 *, 0x584) = (u16) (M2C_FIELD(data_020ec2c8, u16 *, 0x584) + 1);
        if ((u32) M2C_FIELD(data_020ec2c8, u16 *, 0x584) > 0x10U) {
            M2C_FIELD(data_020ec2c8, u16 *, 0x584) = 1U;
        }
    } while (!(temp_r0 & (1 << (M2C_FIELD(data_020ec2c8, u16 *, 0x584) - 1))));
    return 1;
}
