#include "m2c.h"

M2C_UNK func_020075b0(void *, M2C_UNK, M2C_UNK);    /* extern */
s16 func_02010c3c();                                /* extern */
s16 func_02010d7c();                                /* extern */
s32 func_020114d4(M2C_UNK *, void *);               /* extern */
extern void *data_02170260;
extern M2C_UNK func_0207e2dc;

s32 func_0207e6ac(s32 arg0) {
    s32 var_r0;

    if (arg0 == 0) {
        return -1;
    }
    M2C_FIELD(data_02170260, void **, 0x1300) = (void *) (data_02170260 + 0xF00);
    M2C_FIELD(data_02170260, s16 *, 0x1304)   = 0x400;
    M2C_FIELD(data_02170260, s16 *, 0x1306)   = func_02010c3c();
    M2C_FIELD(data_02170260, s16 *, 0x1308)   = func_02010d7c();
    M2C_FIELD(data_02170260, s16 *, 0x1310)   = 1;
    func_020075b0(data_02170260 + 0x130A, 0xFF, 6);
    M2C_FIELD(data_02170260, s32 *, 0x1344) = arg0;
    M2C_FIELD(data_02170260, s32 *, 0x1A90) = 1;
    var_r0                                  = func_020114d4(&func_0207e2dc, data_02170260 + 0x1300);
    if (var_r0 == 2) {
        var_r0 = 0;
    }
    return var_r0;
}
