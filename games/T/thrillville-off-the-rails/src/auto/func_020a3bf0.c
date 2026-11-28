#include "m2c.h"

void func_020a3bf0(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    M2C_UNK (*temp_ip)(M2C_UNK, M2C_UNK, M2C_UNK);

    temp_ip = M2C_FIELD(arg0, M2C_UNK(**)(M2C_UNK, M2C_UNK, M2C_UNK), 0x18);
    if (temp_ip == NULL) {
        return;
    }
    temp_ip(arg1, arg2, arg3);
}
