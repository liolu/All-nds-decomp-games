/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020674a0(M2C_UNK);
void func_0206ae78(M2C_UNK);

extern s32 data_020ce008;
extern s32 data_0218462c;
extern s32 data_02184638;
extern s32 data_0218463c;
extern s32 data_02184640;

void func_02068e60(void) {
    if (data_020ce008 != -1) {
        func_0206ae78(data_020ce008);
    }
    func_020674a0(data_02184638);
    data_02184640 = 0;
    data_0218463c = 0;
    data_0218462c = 0;
    data_02184638 = 0;
}
