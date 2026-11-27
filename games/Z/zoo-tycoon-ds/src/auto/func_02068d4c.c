/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020673ac(M2C_UNK);
void func_0206ae78(M2C_UNK);

extern s32 data_020ce008;
extern s32 data_02184630;
extern s32 data_02184634;

void func_02068d4c(void) {
    if (data_020ce008 != -1) {
        func_0206ae78(data_020ce008);
    }
    func_020673ac(data_02184634);
    data_02184634 = 0;
    data_02184630 = 0;
}
