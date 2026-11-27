#include "m2c.h"

extern void **data_02167098;

void func_020b22a4(void) {
    if (data_02167098 == NULL) {
        return;
    }
    if (data_02167098 != NULL) {
        M2C_FIELD(*data_02167098, M2C_UNK(**)(), 4)(data_02167098);
    }
    data_02167098 = NULL;
}
