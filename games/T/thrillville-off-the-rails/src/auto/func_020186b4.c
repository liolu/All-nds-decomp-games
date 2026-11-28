/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020155c4();                                /* extern */
extern M2C_UNK data_020de12c;
extern s32 data_020ec0e0;
extern s32 data_020ec0e4;

void func_020186b4(void) {
    s32 temp_r0;

    temp_r0       = func_020155c4();
    data_020ec0e4 = temp_r0;
    data_020ec0e0 = *((u16 *) ((s8 *) &data_020de12c + ((temp_r0 >> 4) * 2))) << 0xC;
}
