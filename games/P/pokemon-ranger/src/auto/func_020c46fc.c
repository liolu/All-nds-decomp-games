/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c2608();                                /* extern */
extern s32 data_020f68f0;
extern s32 data_020f68f4;

void func_020c46fc(void) {
    s32 temp_r0;

    temp_r0       = func_020c2608();
    data_020f68f4 = temp_r0;
    switch (temp_r0) {                              /* irregular */
        case 0x0:
            return;
        case 0x40:
            data_020f68f0 = 0x06894000;
            return;
        case 0x20:
            data_020f68f0 = 0x06890000;
            return;
    }
}
