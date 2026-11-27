/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0209303c();                                /* extern */
extern s32 data_021154a8;
extern M2C_UNK data_021154c0;

void func_0202908c(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    switch (arg0) {                                 /* irregular */
        case 0:
            return;
        case 1:
            return;
        case 2:
            data_021154a8 += arg2;
            temp_r0 = func_0209303c();
            *((M2C_UNK *) ((s8 *) &data_021154c0 + (temp_r0 * 4))) =
                *((M2C_UNK *) ((s8 *) &data_021154c0 + (temp_r0 * 4))) + arg2;
            return;
    }
}
