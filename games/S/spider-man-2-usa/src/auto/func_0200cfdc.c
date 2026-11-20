/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200d098();                            /* extern */
M2C_UNK func_0200d0ec();                            /* extern */
M2C_UNK func_02014cb4(M2C_UNK *);                   /* extern */
M2C_UNK func_02020880(M2C_UNK);                     /* extern */
M2C_UNK func_0202094c(M2C_UNK);                     /* extern */
M2C_UNK func_02045738(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0204574c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_0215b3d4;

void func_0200cfdc(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x28) != 0) {
        func_0204574c(0, 0, 0x10);
        func_02014cb4(&data_0215b3d4);
        func_0200d0ec();
        func_02020880(0x40);
        func_02045738(0, 1, 2);
        return;
    }
    func_02014cb4(&data_0215b3d4);
    func_0200d098();
    func_0202094c(0x40);
}
