/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020198bc();                            /* extern */
s32 func_020199c4(s32);                             /* extern */
M2C_UNK func_0201a92c(M2C_UNK **);                  /* extern */
M2C_UNK func_0202e898(s32, M2C_UNK *);              /* extern */
extern M2C_UNK data_0212408c;
extern M2C_UNK data_0215b3d4;

M2C_UNK **func_0203593c(M2C_UNK **arg0) {
    *arg0 = &data_0212408c;
    func_0202e898(func_020199c4(M2C_FIELD(&data_0215b3d4, s32 *, 8)), &data_0215b3d4);
    func_020198bc();
    func_0201a92c(arg0);
    return arg0;
}
