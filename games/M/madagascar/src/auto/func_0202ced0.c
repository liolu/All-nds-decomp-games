#include "m2c.h"

extern s32 data_020d08a4;
extern s32 data_020d08a8;
extern s32 data_020d08b0;
extern s32 data_020d08b4;

s32 func_0202ced0(s32 arg0) {
    s32 var_r1;

    var_r1 = 0;
    switch (arg0) {                                 /* irregular */
        case 0:
            if (data_020d08b4 != data_020d08b0) {
                var_r1 = 1;
            }
            break;
        case 1:
            if (data_020d08a8 != data_020d08a4) {
                var_r1 = 1;
            }
            break;
        case 2:
            if ((data_020d08a8 != data_020d08a4) || (data_020d08b4 != data_020d08b0)) {
                var_r1 = 1;
            }
            break;
    }
    return var_r1;
}
