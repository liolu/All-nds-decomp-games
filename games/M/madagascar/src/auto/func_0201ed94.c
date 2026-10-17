/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002474(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_020026d4();                            /* extern */
M2C_UNK func_02002760(void *);                      /* extern */
s32 func_02002780();                                /* extern */
s32 func_020029f8();                                /* extern */
s32 func_02003160(s32, M2C_UNK, s32);               /* extern */
M2C_UNK func_0201eb44(void *, M2C_UNK);             /* extern */
s32 func_020246a8();                                /* extern */
s32 func_0207b068(M2C_UNK);                         /* extern */
extern M2C_UNK data_020bec14;

void *func_0201ed94(void *arg0, M2C_UNK arg1) {
    M2C_UNK var_r1_2;
    s32 var_r1;
    s32 var_r4;

    func_020026d4();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bec14;
    M2C_FIELD(arg0, s32 *, 0x18)   = 0;
    M2C_FIELD(arg0, s32 *, 0x1C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x20)   = 0;
    M2C_FIELD(arg0, s32 *, 0x24)   = 0;
    func_02002760(arg0);
    var_r1 = func_0207b068(4);
    if (var_r1 != 0) {
        var_r1 = func_020029f8();
    }
    func_02002474(arg0, var_r1, 1);
    var_r4 = func_0207b068(0x28);
    if (var_r4 != 0) {
        var_r4 = func_02003160(var_r4, arg1, func_02002780());
    }
    func_02002474(arg0, var_r4, 1);
    if (func_020246a8() == 1) {
        var_r1_2 = 1;
    } else {
        var_r1_2 = 0;
    }
    func_0201eb44(arg0, var_r1_2);
    return arg0;
}
