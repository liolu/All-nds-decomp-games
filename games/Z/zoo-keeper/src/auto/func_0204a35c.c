/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204be7c();                            /* extern */
M2C_UNK func_0204c088(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0204c060(M2C_UNK, M2C_UNK);                /* extern */
extern u16 data_0206bcec;
extern M2C_UNK func_0204a318;

void func_0204a35c(void) {
    if (data_0206bcec != 0) {
        return;
    }
    data_0206bcec = 1;
    func_0204be7c();
    do {

    } while (func_0204c060(0xC, 1) == 0);
    func_0204c088(0xC, &func_0204a318);
}
