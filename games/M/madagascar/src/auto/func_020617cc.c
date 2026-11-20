/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_0205fbc0(M2C_UNK);
void func_02063fe0(M2C_UNK);

extern s32 data_020ced50;
extern s32 data_020db730;
extern s32 data_020db734;

void func_020617cc(void) {
    if (data_020ced50 != -1) {
        func_02063fe0(data_020ced50);
    }
    func_0205fbc0(data_020db734);
    data_020db734 = 0;
    data_020db730 = 0;
}
