/* Reconstructed from USA ARM9 at 0x020cf624 (60 bytes).
 * Names and types are inferred from the binary.
 */
#include "m2c.h"

s16 func_020b49f0();                                /* extern */
s32 func_020b6bd0();                                /* extern */
M2C_UNK func_020b6be4(s32);                         /* extern */
extern M2C_UNK data_020f1d14;

void func_020b79f4(void) {
    s32 *temp_r4;
    s16 temp_r0;
    s32 temp_r5;

    temp_r4 = (s32 *) &data_020f1d14;
    temp_r5 = func_020b6bd0();
    if (temp_r4[0] == 0) {
        temp_r0                      = func_020b49f0();
        temp_r4[0]                   = 1;
        M2C_FIELD(temp_r4, s16 *, 4) = temp_r0;
    }
    func_020b6be4(temp_r5);
}
