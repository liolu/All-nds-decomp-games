/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201f930(void *);                      /* extern */
M2C_UNK func_02046414(s32, M2C_UNK);                /* extern */
M2C_UNK func_0204641c(s32, M2C_UNK);                /* extern */
s32 func_02046490();                                /* extern */
M2C_UNK func_02049fcc();                            /* extern */
M2C_UNK func_02059f70(void *);                      /* extern */
extern M2C_UNK data_02124930;

void *func_02049f24(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02124930;
    if (M2C_FIELD(arg0, u8 *, 0x1C) != 0) {
        func_02049fcc(arg0);
    }
    func_02046414(func_02046490(), 0);
    func_0204641c(func_02046490(), 1);
    func_0201f930(arg0);
    func_02059f70(arg0);
    return arg0;
}
