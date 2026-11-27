/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

void func_0207de1c(void **);
void func_0207de28(void **);
void func_0207e410(void **);

void func_0207e58c(void **arg0) {
    u8 temp_r1;

    temp_r1 = M2C_FIELD(*arg0, u8 *, 0x90);
    switch (temp_r1) {
        case 0:
            func_0207e410(arg0);
        /* fallthrough */
        case 1:
            func_0207de28(arg0);
            break;
        case 2:
            func_0207de1c(arg0);
            break;
        case 3:
            break;
        default:
            func_0207de1c(arg0);
            break;
    }
}
