/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02052038(void *arg0, M2C_UNK arg1, s32 *arg2, s32 arg3, s32 arg4, s32 *arg5) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C4), M2C_UNK(**)(void *, M2C_UNK, s32, s32), 0xC)(arg0, arg1, *arg2,
                                                                                            arg4 + (*arg5 * 4));
    *arg5 += 1;
    *arg2 += 1;
}
