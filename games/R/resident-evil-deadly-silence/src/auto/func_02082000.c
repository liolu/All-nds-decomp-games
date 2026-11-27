/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

void func_0208187c(void **);
void func_02081888(void **);
void func_02081e7c(void **);

void func_02082000(void **arg0) {
    u8 temp_r1;

    temp_r1 = M2C_FIELD(*arg0, u8 *, 0x90);
    switch (temp_r1) {
        case 0:
            func_02081e7c(arg0);
        /* fallthrough */
        case 1:
            func_02081888(arg0);
            break;
        case 2:
            func_0208187c(arg0);
            break;
        case 3:
            break;
        default:
            func_0208187c(arg0);
            break;
    }
}
