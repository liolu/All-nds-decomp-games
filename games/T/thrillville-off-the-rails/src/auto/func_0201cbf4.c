/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0202b7b8(s32);                         /* extern */
s32 func_0202bdd8(s32, s32, u16);                   /* extern */
M2C_UNK func_0201c6f0(M2C_UNK);                     /* extern */
M2C_UNK func_0201e2a4();                            /* extern */
extern u16 data_020ec280;
extern s32 data_020ec284;
extern void *data_020ec288;
extern void *data_020ec28c;

s32 func_0201cbf4(void) {
    s32 temp_r0;

    M2C_FIELD(data_020ec288, s16 *, 0x528) = 0;
    M2C_FIELD(data_020ec288, s16 *, 0x52A) = 0;
    M2C_FIELD(data_020ec288, s16 *, 0x526) = 0;
    M2C_FIELD(data_020ec288, s16 *, 0x548) = 0;
    func_0201c6f0(0xA);
    if (M2C_FIELD(data_020ec28c, s32 *, 0x1320) == 0) {
        do {
            temp_r0 = func_0202bdd8(data_020ec284, M2C_FIELD(data_020ec288, s32 *, 0x508), data_020ec280);
        } while (temp_r0 == 4);
        if (temp_r0 != 2) {
            return 8;
        }
        func_0202b7b8(M2C_FIELD(data_020ec288, s32 *, 0x508));
        M2C_FIELD(data_020ec288, s8 *, 0x50D) = 1;
        return 0;
    }
    func_0202b7b8(M2C_FIELD(data_020ec288, s32 *, 0x508));
    M2C_FIELD(data_020ec288, s8 *, 0x50D) = 1;
    func_0201e2a4();
    return 0;
}
