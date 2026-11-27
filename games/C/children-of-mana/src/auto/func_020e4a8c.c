/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02061cb0(M2C_UNK *);                       /* extern */
extern s32 data_0212e964;
extern M2C_UNK func_020e56dc;

s32 func_020e4a8c(void) {
    if (func_02061cb0(&func_020e56dc) != 2) {
        data_0212e964 = 1;
        return 0;
    }
    return 1;
}
