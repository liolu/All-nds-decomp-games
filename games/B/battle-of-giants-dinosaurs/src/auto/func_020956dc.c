#include "m2c.h"

u16 func_020956dc(void) {
    u16 temp_r0;

    temp_r0             = *(u16 *) 0x04000208;
    *(u16 *) 0x04000208 = 0;
    return temp_r0;
}
