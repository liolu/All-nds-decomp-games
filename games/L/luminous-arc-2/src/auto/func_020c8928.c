/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

extern s16 data_0215143a;
extern s16 data_02151440;
extern s16 data_02151446;
extern s32 data_021514c0;
extern s32 data_021514c8;
extern s32 data_021514d0;

void func_020c8928(s32 arg0, s32 arg1) {
    data_02151446 = 0;
    data_0215143a = 0;
    data_02151440 = 0;
    data_021514c0 = 0;
    data_021514c8 = 0;
    data_021514d0 = 0;
    switch (arg0) {                                 /* irregular */
        case 2:
            data_02151446 = 1 << arg1;
            return;
        case 0:
            data_0215143a = 1 << arg1;
            return;
        case 1:
            data_02151440 = 1 << arg1;
            return;
    }
}
