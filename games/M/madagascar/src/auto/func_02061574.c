/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0205f8e0();                                /* extern */
extern s32 data_020db714;
extern s32 data_020db718;

void func_02061574(void) {
    s32 temp_r0;

    temp_r0       = func_0205f8e0();
    data_020db718 = temp_r0;
    switch (temp_r0) {                              /* irregular */
        case 0x0:
            return;
        case 0x40:
            data_020db714 = 0x06894000;
            return;
        case 0x20:
            data_020db714 = 0x06890000;
            return;
    }
}
