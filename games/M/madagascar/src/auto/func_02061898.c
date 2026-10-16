/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0205f8b8();                                /* extern */
extern M2C_UNK data_020bb1ac;
extern s32 data_020db730;
extern s32 data_020db734;

void func_02061898(void) {
    s32 temp_r0;

    temp_r0       = func_0205f8b8();
    data_020db734 = temp_r0;
    data_020db730 = *((u16 *) ((s8 *) &data_020bb1ac + ((temp_r0 >> 4) * 2))) << 0xC;
}
