/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_0206a430(M2C_UNK, M2C_UNK);

extern s32 data_02186500;

s32 func_0206c398(void) {
    func_0206a430(data_02186500, 0x280);
    return M2C_FIELD(data_02186500, s32 *, 4);
}
