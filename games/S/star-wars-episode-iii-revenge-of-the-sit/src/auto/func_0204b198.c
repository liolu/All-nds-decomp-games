/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020449c4(void);
void func_020449d8(M2C_UNK);

extern s32 data_020b1e9c;

s32 func_0204b198(void) {
    s32 temp_r0;

    temp_r0 = func_020449c4();
    if (data_020b1e9c != 0) {
        func_020449d8(temp_r0);
        return 0;
    }
    data_020b1e9c = 1;
    func_020449d8(temp_r0);
    return 1;
}
