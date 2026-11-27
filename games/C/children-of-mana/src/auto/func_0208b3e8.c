#include "m2c.h"

void func_0208b3e8(void *arg0) {
    void *temp_r3;
    void *var_ip;

    temp_r3 = M2C_FIELD(arg0, void **, 0x80);
    if (temp_r3 == NULL) {
        return;
    }
    var_ip = arg0;
    if (arg0 != NULL) {
        var_ip = arg0 + 4;
    }
    M2C_FIELD(temp_r3, s32 *, 4)   = (s32) (M2C_FIELD(temp_r3, s32 *, 4) - 1);
    M2C_FIELD(var_ip, s32 *, 4)    = (s32) (M2C_FIELD(var_ip, s32 *, 4) - 1);
    M2C_FIELD(arg0, void **, 0x80) = NULL;
}
