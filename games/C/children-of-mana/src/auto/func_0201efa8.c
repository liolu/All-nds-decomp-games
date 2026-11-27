/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0201efa8(s32 arg0) {
    s32 var_r2;

    var_r2 = 0;
    if (arg0 == 9) {
        var_r2 = 1;
    } else if (arg0 == 5) {
        var_r2 = 7;
    } else if (arg0 == 0xA) {
        var_r2 = 3;
    } else if (arg0 == 6) {
        var_r2 = 5;
    } else if (!(arg0 & 1)) {
        if (arg0 & 2) {
            var_r2 = 4;
        } else if (arg0 & 4) {
            var_r2 = 6;
        } else if (arg0 & 8) {
            var_r2 = 2;
        } else if (arg0 & 0x10) {
            var_r2 = 3;
        } else if (arg0 & 0x20) {
            var_r2 = 5;
        } else if (arg0 & 0x40) {
            var_r2 = 1;
        } else if (arg0 & 0x80) {
            var_r2 = 7;
        }
    }
    return var_r2;
}
