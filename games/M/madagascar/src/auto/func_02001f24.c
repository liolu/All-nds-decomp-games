/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02001e48(M2C_UNK *, M2C_UNK);          /* extern */
extern s32 data_020cf5d0;
extern M2C_UNK data_020cf5d4;

M2C_UNK *func_02001f24(void) {
    if (!(data_020cf5d0 & 1)) {
        func_02001e48(&data_020cf5d4, 3);
        data_020cf5d0 |= 1;
    }
    return &data_020cf5d4;
}
