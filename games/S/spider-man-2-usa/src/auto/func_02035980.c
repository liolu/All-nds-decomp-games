/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201b098(void *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_02077bb8;
extern M2C_UNK data_0212408c;

void *func_02035980(void *arg0, M2C_UNK arg1) {
    func_0201b098(arg0, &data_02077bb8, arg1, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212408c;
    M2C_FIELD(arg0, s32 *, 0x54)   = 0;
    M2C_FIELD(arg0, s32 *, 0x58)   = 0;
    return arg0;
}
