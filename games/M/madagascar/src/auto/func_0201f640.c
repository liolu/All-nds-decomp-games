/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void **data_020d024c;

void func_0201f640(void) {
    if (data_020d024c == NULL) {
        return;
    }
    if (data_020d024c != NULL) {
        M2C_FIELD(*data_020d024c, M2C_UNK(**)(), 4)(data_020d024c);
    }
    data_020d024c = NULL;
}
