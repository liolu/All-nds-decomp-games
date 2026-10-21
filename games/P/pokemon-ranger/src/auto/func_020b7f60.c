/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020c7874(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK (*data_020f5014)();

void func_020b7f60(s32 arg0) {
    if (data_020f5014 != NULL) {
        data_020f5014(arg0);
        return;
    }
    func_020c7874(0, -1, arg0);
}
