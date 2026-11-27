/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02071090();                            /* extern */
M2C_UNK func_0207118c();                            /* extern */
M2C_UNK func_0206c608();                            /* extern */
s32 func_0206c7ec(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0206c814(M2C_UNK, M2C_UNK *);          /* extern */
extern s32 data_02187070;
extern s32 data_02187074;
extern M2C_UNK func_020710f0;
extern M2C_UNK func_02071150;

void func_02071348(void) {
    if (data_02187070 != 0) {
        return;
    }
    data_02187070 = 1;
    func_02071090();
    func_0206c608();
    do {

    } while (func_0206c7ec(0xD, 1) == 0);
    func_0206c814(0xD, &func_02071150);
    func_0207118c();
    func_0206c814(0xD, NULL);
    func_0206c814(0xD, &func_020710f0);
    data_02187074 = 0;
}
