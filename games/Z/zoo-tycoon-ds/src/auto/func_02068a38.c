/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020670a4();                                /* extern */
extern s32 data_02184614;
extern s32 data_02184618;

void func_02068a38(void) {
    s32 temp_r0;

    temp_r0       = func_020670a4();
    data_02184618 = temp_r0;
    switch (temp_r0) {                              /* irregular */
        case 0x0:
            return;
        case 0x40:
            data_02184614 = 0x06894000;
            return;
        case 0x20:
            data_02184614 = 0x06890000;
            return;
    }
}
