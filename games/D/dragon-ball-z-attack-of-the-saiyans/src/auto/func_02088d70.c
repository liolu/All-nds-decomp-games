#include "m2c.h"

s32 func_02088d60();                                /* extern */
M2C_UNK func_02085398();                            /* extern */

void func_02088d70(void) {
    if (func_02088d60() != 0) {
        return;
    }
    func_02085398();
}
