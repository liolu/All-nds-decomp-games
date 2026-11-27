/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0205c948(void);
void func_0205c95c(M2C_UNK);

extern s32 data_0211b444;

s32 func_0205e46c(void) {
    s32 temp_r0;

    temp_r0 = func_0205c948();
    if (data_0211b444 != 0) {
        func_0205c95c(temp_r0);
        return 0;
    }
    data_0211b444 = 1;
    func_0205c95c(temp_r0);
    return 1;
}
