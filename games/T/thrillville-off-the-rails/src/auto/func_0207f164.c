#include "m2c.h"

void *func_0200da6c();            /* extern */
M2C_UNK func_0200da84();           /* extern */
M2C_UNK func_0200daec();   /* extern */
extern M2C_UNK data_020fa0c0;

void func_0207f164(void *arg0, u8 arg1) {
    M2C_UNK *temp_r5;
    void *var_r1;
    void *var_r1_2;

    temp_r5 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r5 != NULL) {
        func_0200da84(temp_r5, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_0200da84(&data_020fa0c0, arg0);
    M2C_FIELD(arg0, u8 *, 0x3D) = arg1;
    if (temp_r5 != NULL) {
        var_r1 = func_0200da6c(temp_r5, 0);
        if (var_r1 != NULL) {
        loop_4:
            if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
                var_r1 = func_0200da6c(temp_r5);
                if (var_r1 != NULL) {
                    goto loop_4;
                }
            }
        }
        func_0200daec(temp_r5, var_r1, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = temp_r5;
    }
    var_r1_2 = func_0200da6c(&data_020fa0c0, 0);
    if (var_r1_2 != NULL) {
    loop_9:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1_2, u8 *, 0x3D)) {
            var_r1_2 = func_0200da6c(&data_020fa0c0);
            if (var_r1_2 != NULL) {
                goto loop_9;
            }
        }
    }
    func_0200daec(&data_020fa0c0, var_r1_2, arg0);
}
