#include "m2c.h"

extern void **data_02167164;

void func_020cf4dc(void) {
    if (data_02167164 == NULL) {
        return;
    }
    if (data_02167164 != NULL) {
        M2C_FIELD(*data_02167164, M2C_UNK(**)(), 4)(data_02167164);
    }
    data_02167164 = NULL;
}
