/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02054ae0();                                /* extern */
extern M2C_UNK data_020ff76c;
extern s32 data_02161260;
extern s32 data_02161264;

void func_02056040(void) {
    s32 temp_r0;

    temp_r0       = func_02054ae0();
    data_02161264 = temp_r0;
    data_02161260 = *((u16 *) ((s8 *) &data_020ff76c + ((temp_r0 >> 4) * 2))) << 0xC;
}
