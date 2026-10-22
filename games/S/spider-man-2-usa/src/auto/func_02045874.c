#include "m2c.h"

extern s32 data_0215f8d4;
extern s32 data_0215f8d8;
extern s32 data_0215f8e0;
extern s32 data_0215f8e4;

s32 func_02045874(s32 arg0) {
    s32 var_r1;

    var_r1 = 0;
    switch (arg0) {                                 /* irregular */
        case 0:
            if (data_0215f8e4 != data_0215f8e0) {
                var_r1 = 1;
            }
            break;
        case 1:
            if (data_0215f8d8 != data_0215f8d4) {
                var_r1 = 1;
            }
            break;
        case 2:
            if ((data_0215f8d8 != data_0215f8d4) || (data_0215f8e4 != data_0215f8e0)) {
                var_r1 = 1;
            }
            break;
    }
    return var_r1;
}
