/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020248f0();                            /* extern */
M2C_UNK func_02024afc(M2C_UNK, M2C_UNK *);          /* extern */
extern s32 data_020eba04;
extern M2C_UNK func_0200f934;

void func_0200f9b4(void) {
    func_020248f0();
    func_02024afc(0xE, &func_0200f934);
    data_020eba04 = 0;
}
