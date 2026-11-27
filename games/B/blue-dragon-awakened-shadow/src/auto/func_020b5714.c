#include "m2c.h"

extern void **data_021670a8;

void func_020b5714(void) {
    if (data_021670a8 == NULL) {
        return;
    }
    if (data_021670a8 != NULL) {
        M2C_FIELD(*data_021670a8, M2C_UNK(**)(), 4)(data_021670a8);
    }
    data_021670a8 = NULL;
}
