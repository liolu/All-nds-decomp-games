/* compiler: 2.0/sp1p5 -O1,p */
/* Reconstructed from USA ARM9 at 0x02075740 (68 bytes).
 * Names and types are inferred from the binary.
 */
#include "m2c.h"

M2C_UNK func_020934a8(s32);                         /* extern */

void *func_02095d54(void *arg0) {
    volatile u8 tmp;

    if (M2C_FIELD(arg0, volatile s32 *, 0) != 0) {
        s32 size;

        size                               = M2C_FIELD(arg0, volatile s32 *, 4);
        tmp                                = 0;
        M2C_FIELD(arg0, volatile s32 *, 4) = M2C_FIELD(arg0, volatile s32 *, 4) - size;
        func_020934a8(M2C_FIELD(arg0, s32 *, 0));
    }
    return arg0;
}
