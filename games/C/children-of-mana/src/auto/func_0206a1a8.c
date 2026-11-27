/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_021202c8;

void func_0206a1a8(void) {
    if (M2C_FIELD(M2C_FIELD(data_021202c8, void **, 0), s32 *, 0x14) == 0) {
        *(s32 *) 0x04000440 = 0;
        *(s32 *) 0x04000448 = 1;
        *(s32 *) 0x04000440 = 1;
    } else {
        M2C_FIELD(data_021202c8, s32 *, 0x10) = 0;
        M2C_FIELD(data_021202c8, s32 *, 0x2C) = 0;
        M2C_FIELD(data_021202c8, s32 *, 0x28) = 0;
    }
    data_021202c8 = NULL;
}
