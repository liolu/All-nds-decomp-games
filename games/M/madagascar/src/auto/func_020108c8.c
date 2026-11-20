/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001f74(s32);                         /* extern */
M2C_UNK func_02002584(void *);                      /* extern */
M2C_UNK func_0207b040(void *);                      /* extern */
extern M2C_UNK data_020bdc04;

void *func_020108c8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bdc04;
    func_02001f74(M2C_FIELD(arg0, s32 *, 0x1C));
    func_02002584(arg0);
    func_0207b040(arg0);
    return arg0;
}
