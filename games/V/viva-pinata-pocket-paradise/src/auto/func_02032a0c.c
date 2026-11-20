#include "m2c.h"

s32 func_02031c10();                                /* extern */

s32 func_02032a0c(void) {
    if ((func_02031c10() & 7) == 1) {
        return 1;
    }
    return 0;
}
