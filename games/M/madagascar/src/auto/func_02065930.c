/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02063010(M2C_UNK, M2C_UNK);

extern s32 data_020dd620;

s32 func_02065930(void) {
    func_02063010(data_020dd620, 0x280);
    return M2C_FIELD(data_020dd620, s32 *, 4);
}
