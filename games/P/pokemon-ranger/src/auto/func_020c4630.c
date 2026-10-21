/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020c2e00(M2C_UNK);
void func_020c84f4(M2C_UNK);

extern s32 data_020f11c0;
extern s32 data_020f68f0;
extern s32 data_020f68f4;

void func_020c4630(void) {
    if (data_020f11c0 != -1) {
        func_020c84f4(data_020f11c0);
    }
    func_020c2e00(data_020f68f4);
    data_020f68f4 = 0;
    data_020f68f0 = 0;
}
