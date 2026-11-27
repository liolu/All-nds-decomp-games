/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02024804();                            /* extern */
extern M2C_UNK data_021021b0;

void *func_0208a654(void *arg0) {
    func_02024804();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021021b0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x228) < 4) {
        M2C_FIELD(arg0, s32 *, 0x228) = 4;
    }
    return arg0;
}
