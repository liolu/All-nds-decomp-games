/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void **data_02115514;

void func_02032bcc(void) {
    if (data_02115514 == NULL) {
        return;
    }
    if (data_02115514 != NULL) {
        M2C_FIELD(*data_02115514, M2C_UNK(**)(), 4)(data_02115514);
    }
    data_02115514 = NULL;
}
