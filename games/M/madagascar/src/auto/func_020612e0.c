/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_0205f960(M2C_UNK);
void func_02063fe0(M2C_UNK);

extern s32 data_020ced50;
extern s32 data_020db728;

void func_020612e0(void) {
    if (data_020ced50 != -1) {
        func_02063fe0(data_020ced50);
    }
    func_0205f960(data_020db728);
    data_020db728 = 0;
}
