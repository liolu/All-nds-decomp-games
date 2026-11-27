/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_0206714c(M2C_UNK);
void func_0206ae78(M2C_UNK);

extern s32 data_020ce008;
extern s32 data_02184628;

void func_020687a4(void) {
    if (data_020ce008 != -1) {
        func_0206ae78(data_020ce008);
    }
    func_0206714c(data_02184628);
    data_02184628 = 0;
}
