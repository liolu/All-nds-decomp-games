/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002744();                            /* extern */
M2C_UNK func_02003358(void *);                      /* extern */
s32 *func_0202c118();                               /* extern */
extern M2C_UNK data_020be704;

void *func_0201a040(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020be704;
    func_02002744();
    *func_0202c118() = M2C_FIELD(arg0, s32 *, 0x3C);
    func_02003358(arg0);
    return arg0;
}
