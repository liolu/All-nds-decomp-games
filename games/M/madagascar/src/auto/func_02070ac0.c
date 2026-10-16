/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0206bab8(s32);                         /* extern */
s32 func_0206bf6c(s32, s32, u16);                   /* extern */
M2C_UNK func_02070774(M2C_UNK);                     /* extern */
M2C_UNK func_02071fd8();                            /* extern */
extern u16 data_020ded50;
extern s32 data_020ded5c;
extern void *data_020ded58;
extern void *data_020ded54;

s32 func_02070ac0(void) {
    s32 temp_r0;

    M2C_FIELD(data_020ded58, s16 *, 0x528) = 0;
    M2C_FIELD(data_020ded58, s16 *, 0x52A) = 0;
    M2C_FIELD(data_020ded58, s16 *, 0x526) = 0;
    M2C_FIELD(data_020ded58, s16 *, 0x548) = 0;
    func_02070774(0xA);
    if (M2C_FIELD(data_020ded54, s32 *, 0x1320) == 0) {
        do {
            temp_r0 = func_0206bf6c(data_020ded5c, M2C_FIELD(data_020ded58, s32 *, 0x508), data_020ded50);
        } while (temp_r0 == 4);
        if (temp_r0 != 2) {
            return 8;
        }
        func_0206bab8(M2C_FIELD(data_020ded58, s32 *, 0x508));
        M2C_FIELD(data_020ded58, s8 *, 0x50D) = 1;
        return 0;
    }
    func_0206bab8(M2C_FIELD(data_020ded58, s32 *, 0x508));
    M2C_FIELD(data_020ded58, s8 *, 0x50D) = 1;
    func_02071fd8();
    return 0;
}
