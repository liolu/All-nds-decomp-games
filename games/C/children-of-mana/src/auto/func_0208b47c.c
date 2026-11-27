/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(void *);                      /* extern */
M2C_UNK func_0208b3e8(void *);                      /* extern */
M2C_UNK func_02096364(void *);                      /* extern */
M2C_UNK func_02096628();                            /* extern */
extern M2C_UNK data_02102468;

void *func_0208b47c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02102468;
    if (M2C_FIELD(arg0, s32 *, 0x5C) != 0) {
        func_02096628();
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    }
    func_0208b3e8(arg0);
    func_02096364(arg0);
    func_0200f2c4(arg0);
    return arg0;
}
