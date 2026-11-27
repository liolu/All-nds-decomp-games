/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_0200e0f8(void);

extern s32 data_02127ed0;

void func_020b5d70(void) {
    if (data_02127ed0 == 0) {
        return;
    }
    func_0200e0f8();
    data_02127ed0 = 0;
}
