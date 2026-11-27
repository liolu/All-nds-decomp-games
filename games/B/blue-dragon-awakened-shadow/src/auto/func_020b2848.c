#include "m2c.h"

extern void **data_021670a0;

void func_020b2848(void) {
    if (data_021670a0 == NULL) {
        return;
    }
    if (data_021670a0 != NULL) {
        M2C_FIELD(*data_021670a0, M2C_UNK(**)(), 4)(data_021670a0);
    }
    data_021670a0 = NULL;
}
