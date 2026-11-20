/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201ec5c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0215b6d4;
extern M2C_UNK data_0215bae0;

void func_02016174(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2E) != 0) {
        func_0201ec5c(&data_0215bae0);
        return;
    }
    func_0201ec5c(&data_0215b6d4);
}
