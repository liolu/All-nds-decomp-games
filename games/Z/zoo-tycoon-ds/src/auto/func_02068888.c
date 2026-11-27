/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020671d8(M2C_UNK);
void func_0206ae78(M2C_UNK);

extern s32 data_020ce008;
extern s32 data_02184610;

void func_02068888(void) {
    if (data_020ce008 != -1) {
        func_0206ae78(data_020ce008);
    }
    func_020671d8(data_02184610);
    data_02184610 = 0;
}
