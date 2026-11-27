/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void **data_02126ce0;

void func_02096708(void) {
    if (data_02126ce0 == NULL) {
        return;
    }
    if (data_02126ce0 != NULL) {
        M2C_FIELD(*data_02126ce0, M2C_UNK(**)(), 4)(data_02126ce0);
    }
    data_02126ce0 = NULL;
}
