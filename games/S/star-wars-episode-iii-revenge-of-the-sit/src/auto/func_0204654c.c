/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02043cc0(M2C_UNK, M2C_UNK);

extern s32 data_020b1d20;

s32 func_0204654c(void) {
    func_02043cc0(data_020b1d20, 0x280);
    return *(M2C_UNK *) data_020b1d20;
}
