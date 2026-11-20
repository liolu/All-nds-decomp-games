/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020467f0();                            /* extern */
s32 func_020469d4(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020469fc(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_02057244();                            /* extern */
M2C_UNK func_02057340();                            /* extern */
extern s32 data_020b3d3c;
extern s32 data_020b3d40;
extern M2C_UNK func_020572a4;
extern M2C_UNK func_02057304;

void func_020574fc(void) {
    if (data_020b3d3c != 0) {
        return;
    }
    data_020b3d3c = 1;
    func_02057244();
    func_020467f0();
    do {

    } while (func_020469d4(0xD, 1) == 0);
    func_020469fc(0xD, &func_02057304);
    func_02057340();
    func_020469fc(0xD, NULL);
    func_020469fc(0xD, &func_020572a4);
    data_020b3d40 = 0;
}
