#include "m2c.h"

void func_020b3948(s32 arg0, s8 *arg1, s8 *arg2, s8 *arg3) {
    s8 *var_r1;
    s8 var_ip;

    var_r1 = arg1;
    var_ip = *var_r1;
    if (var_ip == 0) {
        return;
    }
    do {
        if (var_ip == *arg2) {
            *var_r1 = *arg3;
        }
        var_r1 += 1;
        var_ip = *var_r1;
    } while (var_ip != 0);
}
