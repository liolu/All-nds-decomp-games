/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_0205feb8(M2C_UNK);
void func_02063fe0(M2C_UNK);

extern s32 data_020ced50;
extern s32 data_020db714;
extern s32 data_020db718;

void func_020614a8(void) {
    if (data_020ced50 != -1) {
        func_02063fe0(data_020ced50);
    }
    func_0205feb8(data_020db718);
    data_020db718 = 0;
    data_020db714 = 0;
}
