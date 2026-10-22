/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02017400();                            /* extern */
s32 func_0203a6cc(M2C_UNK);                         /* extern */
extern s32 data_0215b494;

void func_02017478(void) {
    data_0215b494 = func_0203a6cc(0x40);
    func_02017400();
}
