/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020c26b0(M2C_UNK);
void func_020c84f4(M2C_UNK);

extern s32 data_020f11c0;
extern s32 data_020f6904;

void func_020c4468(void) {
    if (data_020f11c0 != -1) {
        func_020c84f4(data_020f11c0);
    }
    func_020c26b0(data_020f6904);
    data_020f6904 = 0;
}
