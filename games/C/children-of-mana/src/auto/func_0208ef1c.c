/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208dfb4(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_021028ac;

void *func_0208ef1c(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0208dfb4(arg0, arg1, 2, arg2);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021028ac;
    M2C_FIELD(arg0, s32 *, 0x1DC)  = 0;
    return arg0;
}
