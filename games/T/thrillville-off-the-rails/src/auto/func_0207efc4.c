#include "m2c.h"

void *func_0200da6c();            /* extern */
M2C_UNK func_0200da84();           /* extern */
M2C_UNK func_0200daec();   /* extern */
M2C_UNK func_020259dc();                     /* extern */
M2C_UNK func_02025a98();                          /* extern */
M2C_UNK func_0207f090();                      /* extern */
extern M2C_UNK data_020fa0c0;
extern M2C_UNK data_020fa0cc;

void *func_0207efc4(s32 arg0) {
    void *var_r1;
    void *var_r5;

    var_r5 = func_0200da6c(&data_020fa0cc, 0);
    if (var_r5 == NULL) {
        var_r5 = func_0200da6c(&data_020fa0c0, 0);
        if (arg0 < (s32) M2C_FIELD(var_r5, u8 *, 0x3D)) {
            return NULL;
        }
        if (M2C_FIELD(var_r5, u8 *, 0x2C) == 2) {
            func_020259dc(M2C_FIELD(var_r5, u8 *, 0x3C), 0xFFFFFD2D);
        }
        func_02025a98(M2C_FIELD(var_r5, u8 *, 0x3C));
        func_0207f090(var_r5);
        goto block_6;
    }
block_6:
    func_0200da84(&data_020fa0cc, var_r5);
    M2C_FIELD(var_r5, u8 *, 0x3D) = (u8) arg0;
    var_r1                        = func_0200da6c(&data_020fa0c0, 0);
    if (var_r1 != NULL) {
    loop_8:
        if ((u32) M2C_FIELD(var_r5, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_0200da6c(&data_020fa0c0);
            if (var_r1 != NULL) {
                goto loop_8;
            }
        }
    }
    func_0200daec(&data_020fa0c0, var_r1, var_r5);
    return var_r5;
}
