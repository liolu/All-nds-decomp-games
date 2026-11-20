/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020c78e8(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK (*data_020f5010)();

void func_020b7fa8(s32 arg0) {
    if (data_020f5010 != NULL) {
        data_020f5010(arg0);
        return;
    }
    func_020c78e8(0, -1, arg0);
}
