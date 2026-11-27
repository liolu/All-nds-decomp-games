#include "m2c.h"

s32 func_020ca9b8(s32 arg0) {
    s32 var_r1;

    var_r1 = 0;
    if (arg0 > 8) {
        if (arg0 <= 0x10) {
            var_r1 = 1;
        } else if (arg0 <= 0x20) {
            var_r1 = 2;
        } else if (arg0 <= 0x40) {
            var_r1 = 3;
        } else if (arg0 <= 0x80) {
            var_r1 = 4;
        } else if (arg0 <= 0x100) {
            var_r1 = 5;
        } else if (arg0 <= 0x200) {
            var_r1 = 6;
        } else if (arg0 <= 0x400) {
            var_r1 = 7;
        }
    }
    return var_r1;
}
