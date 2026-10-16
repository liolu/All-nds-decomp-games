/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02067c98(M2C_UNK, M2C_UNK);

s32 func_020636f4(s32 arg0) {
    if (*(s32 *) 0x04000600 & 0x08000000) {
        return -1;
    }
    func_02067c98(0x04000680, arg0);
    return 0;
}
