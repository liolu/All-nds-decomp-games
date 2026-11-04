/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0205ca74();                            /* extern */
M2C_UNK func_0205cc80(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0205cc58(M2C_UNK, M2C_UNK);                /* extern */
extern u16 data_0217b084;
extern M2C_UNK func_0205b300;

void func_0205b344(void) {
    if (data_0217b084 != 0) {
        return;
    }
    data_0217b084 = 1;
    func_0205ca74();
    do {

    } while (func_0205cc58(0xC, 1) == 0);
    func_0205cc80(0xC, &func_0205b300);
}
