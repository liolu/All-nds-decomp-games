/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202d810(void *);                      /* extern */
M2C_UNK func_0202dc18(void *);                      /* extern */
extern M2C_UNK *data_020ceb10;
extern M2C_UNK *data_020ceb14;
extern M2C_UNK func_0202dbd4;
extern M2C_UNK func_0202dbf0;

void *func_0202dad0(void *arg0, s32 arg1) {
    void *var_r0;
    void *var_r0_2;
    void *var_r0_3;
    void *var_r0_4;
    void *var_r0_5;
    void *var_r0_6;
    void *var_r0_7;
    void *var_r7;

    M2C_FIELD(arg0, s32 *, 0) = arg1;
    var_r7                    = arg0 + 4;
    do {
        func_0202d810(var_r7);
        var_r7 += 0x208;
    } while (var_r7 != (arg0 + 0xA2C));
    func_0202dc18(arg0);
    if (arg1 > 3) {
        var_r0 = arg0 + 0x824;
    } else {
        var_r0 = NULL;
    }
    M2C_FIELD(arg0, void **, 0xA2C) = var_r0;
    if (arg1 > 2) {
        var_r0_2 = arg0 + 0x61C;
    } else {
        var_r0_2 = NULL;
    }
    M2C_FIELD(arg0, void **, 0xA30) = var_r0_2;
    if (arg1 > 0) {
        var_r0_3 = arg0 + 4;
    } else {
        var_r0_3 = NULL;
    }
    M2C_FIELD(arg0, void **, 0xA34) = var_r0_3;
    if (arg1 > 1) {
        var_r0_4 = arg0 + 0x414;
    } else {
        var_r0_4 = NULL;
    }
    M2C_FIELD(arg0, void **, 0xA38) = var_r0_4;
    if (arg1 > 1) {
        var_r0_5 = arg0 + 0x20C;
    } else {
        var_r0_5 = NULL;
    }
    M2C_FIELD(arg0, void **, 0xA3C) = var_r0_5;
    if (arg1 > 0) {
        var_r0_6 = arg0 + 4;
    } else {
        var_r0_6 = NULL;
    }
    M2C_FIELD(arg0, void **, 0xA40) = var_r0_6;
    if (arg1 > 2) {
        var_r0_7 = arg0 + 0x61C;
    } else {
        var_r0_7 = NULL;
    }
    M2C_FIELD(arg0, void **, 0xA44) = var_r0_7;
    data_020ceb10                   = &func_0202dbf0;
    data_020ceb14                   = &func_0202dbd4;
    return arg0;
}
