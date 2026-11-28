/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02028800(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0202a688(void);

void func_02029edc(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 <= 0) {
        return;
    }
    func_02028800(func_0202a688(), arg0, arg1, arg2);
}
