#include "m2c.h"

extern void **data_020e0d48;

void func_02029550(void) {
    if (data_020e0d48 == NULL) {
        return;
    }
    if (data_020e0d48 != NULL) {
        M2C_FIELD(*data_020e0d48, M2C_UNK(**)(), 4)(data_020e0d48);
    }
    data_020e0d48 = NULL;
}
