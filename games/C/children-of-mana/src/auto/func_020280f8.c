#include "m2c.h"

extern M2C_UNK data_02115430;

void func_020280f8(s32 arg0, s32 arg1, s32 arg2) {
    switch (arg0) {                                 /* irregular */
        case 0:
            return;
        case 1:
            return;
        case 2:
            *((M2C_UNK *) ((s8 *) &data_02115430 + (arg1 * 4))) = arg2;
            return;
    }
}
