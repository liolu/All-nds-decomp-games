/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0206c608();                            /* extern */
s32 func_0206c7ec(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0206c814(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_021849a0;
extern M2C_UNK func_0206ac20;

void func_0206ac64(void) {
    if (data_021849a0 != 0) {
        return;
    }
    data_021849a0 = 1;
    func_0206c608();
    do {

    } while (func_0206c7ec(0xC, 1) == 0);
    func_0206c814(0xC, &func_0206ac20);
}
