/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0206707c();                                /* extern */
extern M2C_UNK data_0207ea58;
extern s32 data_02184630;
extern s32 data_02184634;

void func_02068e18(void) {
    s32 temp_r0;

    temp_r0       = func_0206707c();
    data_02184634 = temp_r0;
    data_02184630 = *((u16 *) ((s8 *) &data_0207ea58 + ((temp_r0 >> 4) * 2))) << 0xC;
}
