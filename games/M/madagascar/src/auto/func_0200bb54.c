/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002744();                            /* extern */
M2C_UNK func_02010898(void *);                      /* extern */
M2C_UNK func_0207b000(s32);                         /* extern */
extern M2C_UNK data_020bd7ac;

void *func_0200bb54(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bd7ac;
    func_02002744();
    func_0207b000(M2C_FIELD(arg0, s32 *, 0x38));
    func_02010898(arg0);
    return arg0;
}
