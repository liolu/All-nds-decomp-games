/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_0205ff70(M2C_UNK);
void func_02063fe0(M2C_UNK);

extern s32 data_020ced50;
extern s32 data_020db71c;
extern s32 data_020db720;
extern s32 data_020db724;

void func_020615e4(void) {
    if (data_020ced50 != -1) {
        func_02063fe0(data_020ced50);
    }
    func_0205ff70(data_020db724);
    data_020db724 = 0;
    data_020db720 = 0;
    data_020db71c = 0;
}
