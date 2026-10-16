/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02072cb0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02074770(void);

void func_02074120(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 <= 0) {
        return;
    }
    func_02072cb0(func_02074770(), arg0, arg1, arg2);
}
