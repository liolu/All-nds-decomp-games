/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020509b4();                         /* extern */
M2C_UNK func_020509c4();                         /* extern */
s32 func_02050a14();                                /* extern */
s32 func_02050a28();                                /* extern */
s32 func_02050af8();                                /* extern */
M2C_UNK func_02050f64();                            /* extern */
s32 func_020510f4();                                /* extern */
s8 func_020597f8();              /* extern */
M2C_UNK func_0205c9c4();                            /* extern */
s32 func_02090f80();                          /* extern */
M2C_UNK func_02091204();                     /* extern */
M2C_UNK func_02091214();     /* extern */
M2C_UNK func_020912fc();              /* extern */
extern s32 data_02126b7c;
extern s32 data_02126b80;
extern s32 data_02126b88;
extern M2C_UNK data_02126b90;

s32 func_02090fcc(void *arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r6;

    if (func_02050a28() == 0) {
        var_r0 = 0;
    } else if ((data_02126b7c == 0) || (data_02126b88 == 0)) {
        var_r0 = 0;
    } else if (func_020510f4() != 0xD01) {
        var_r0 = 0;
    } else if (func_02050af8() == 0) {
        var_r0 = 0;
    } else {
        var_r0 = 1;
    }
    if (var_r0 == 0) {
        func_0205c9c4();
    }
    do {
        func_020509c4((u16) data_02126b80);
        if (arg1 == 0) {
            *M2C_FIELD(arg0, s8 **, 0) =
                func_020597f8(&data_02126b90, M2C_FIELD(arg0, s8 **, 0) + 1, M2C_FIELD(arg0, s32 *, 4) - 1);
            func_020912fc(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s8 **, 0), M2C_FIELD(arg0, s32 *, 4));
        } else if (arg1 == 1) {
            func_02091214(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s8 **, 0), M2C_FIELD(arg0, s32 *, 4), 0);
        }
        func_02050f64();
        M2C_FIELD(arg0, s32 *, 0xC) = func_02050a14();
        if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
            func_02091204(3);
            var_r6 = -1;
        } else if ((arg1 == 1) && (func_02090f80(arg0) == 0)) {
            func_02091204(2);
            var_r6 = -1;
        } else {
            func_02091204(0);
            var_r6 = 1;
        }
        M2C_FIELD(arg0, s8 **, 0) = NULL;
        M2C_FIELD(arg0, s32 *, 4) = 0;
        func_020509b4((u16) data_02126b80);
    } while (var_r6 == 0);
    return var_r6;
}
