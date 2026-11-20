/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK _Z16unkfunc_021210f0i(M2C_UNK);             /* extern */
M2C_UNK func_0204a304();                            /* extern */
s32 func_02052460(M2C_UNK *);                       /* extern */
extern M2C_UNK func_02000b60;
extern s32 data_0206440c;

s32 func_02000b70(void) {
    if (data_0206440c != 1) {
        func_0204a304();
    }
    _Z16unkfunc_021210f0i(3);
    if (func_02052460(&func_02000b60) == 2) {
        return 1;
    }
    _Z16unkfunc_021210f0i(9);
    return 0;
}
