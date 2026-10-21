/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020c8070(void);
void func_020c8084(M2C_UNK);

extern s32 data_020f89b8;

s32 func_020ceb94(void) {
    s32 temp_r0;

    temp_r0 = func_020c8070();
    if (data_020f89b8 != 0) {
        func_020c8084(temp_r0);
        return 0;
    }
    data_020f89b8 = 1;
    func_020c8084(temp_r0);
    return 1;
}
