/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02010898(void *);                      /* extern */
M2C_UNK func_0207b040(s32);                         /* extern */
extern M2C_UNK data_020bf280;

void *func_02023e98(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf280;
    func_0207b040(M2C_FIELD(arg0, s32 *, 0x40));
    func_0207b040(M2C_FIELD(arg0, s32 *, 0x44));
    func_02010898(arg0);
    return arg0;
}
