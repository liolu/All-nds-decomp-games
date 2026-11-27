/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02056ac4();                                /* extern */
extern s32 data_0211af64;
extern s32 data_0211af68;

void func_02058838(void) {
    s32 temp_r0;

    temp_r0       = func_02056ac4();
    data_0211af68 = temp_r0;
    switch (temp_r0) {                              /* irregular */
        case 0x0:
            return;
        case 0x40:
            data_0211af64 = 0x06894000;
            return;
        case 0x20:
            data_0211af64 = 0x06890000;
            return;
    }
}
