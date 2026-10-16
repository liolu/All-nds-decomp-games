/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02024c70();                            /* extern */
extern M2C_UNK data_020bf2dc;

void *func_02024ba0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf2dc;
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        func_02024c70();
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    return arg0;
}
