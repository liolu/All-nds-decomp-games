/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0202aaa8(void *arg0) {
    *(u16 *) 0x0400000E = (*(u16 *) 0x0400000E & ~3) | (3 - M2C_FIELD(arg0, u16 *, 0x314));
    *(u16 *) 0x0400000C = (*(u16 *) 0x0400000C & ~3) | (3 - M2C_FIELD(arg0, u16 *, 0x338));
    *(u16 *) 0x0400000A = (*(u16 *) 0x0400000A & ~3) | (3 - M2C_FIELD(arg0, u16 *, 0x35C));
}
