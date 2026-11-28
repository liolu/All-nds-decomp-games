/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0202467c(void);
void func_020248fc(void);

extern s32 data_020ee338;

void func_02027f20(void) {
    if (data_020ee338 == 0) {
        return;
    }
    do {
        if (func_0202467c() == 0x80) {
            func_020248fc();
        }
    } while (data_020ee338 != 0);
}
