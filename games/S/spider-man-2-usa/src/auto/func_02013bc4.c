/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02014cb4(M2C_UNK *);                     /* extern */
M2C_UNK func_0201fc7c(void *, M2C_UNK);             /* extern */
M2C_UNK func_0201fd60(void *, M2C_UNK, s32, M2C_UNK, s32); /* extern */
s32 func_0203a6cc(M2C_UNK);                         /* extern */
M2C_UNK func_02045738(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_02045760(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_02049fe8(s32, M2C_UNK *, s32, s32, s32);   /* extern */
extern M2C_UNK data_0210c134;
extern M2C_UNK data_0215b3d4;

void func_02013bc4(void *arg0, s32 arg1, void *arg2) {
    s32 var_r6;
    void *temp_r5;

    func_02045760(2, 0, 1);
    M2C_FIELD(&data_0210c134, s32 *, 8)    = arg1;
    M2C_FIELD(&data_0210c134, s32 *, 0x24) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(&data_0210c134, s32 *, 0x28) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(&data_0210c134, s32 *, 0x2C) = (s32) M2C_FIELD(arg2, s32 *, 8);
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 8) == 0) {
        var_r6 = func_0203a6cc(0x20);
        if (var_r6 != 0) {
            temp_r5 = func_02014cb4(&data_0215b3d4);
            var_r6  = func_02049fe8(var_r6, &data_0210c134, M2C_FIELD(temp_r5, s32 *, 0x38),
                                    M2C_FIELD(func_02014cb4(&data_0215b3d4), s32 *, 0x2C), 1);
        }
        func_0201fd60(arg0 + 0x14, 1, var_r6, 1, 0);
    }
    func_0201fc7c(arg0 + 0x14, 1);
    func_02045738(2, 1, 1);
}
