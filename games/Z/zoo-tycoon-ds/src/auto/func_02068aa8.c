/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_0206775c(M2C_UNK);
void func_0206ae78(M2C_UNK);

extern s32 data_020ce008;
extern s32 data_0218461c;
extern s32 data_02184620;
extern s32 data_02184624;

void func_02068aa8(void) {
    if (data_020ce008 != -1) {
        func_0206ae78(data_020ce008);
    }
    func_0206775c(data_02184624);
    data_02184624 = 0;
    data_02184620 = 0;
    data_0218461c = 0;
}
