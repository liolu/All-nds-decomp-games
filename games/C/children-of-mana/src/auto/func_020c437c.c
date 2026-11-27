/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0207834c(void **);                         /* extern */
M2C_UNK func_0207aa8c(s32);                         /* extern */
M2C_UNK func_0207aac8(s32);                         /* extern */
M2C_UNK func_020a1018(void *);                      /* extern */

void func_020c437c(void *arg0) {
    s32 var_r4;
    void **temp_r0;

    var_r4 = 0;
    if (func_0207834c(M2C_FIELD(arg0, void ***, 0xC0)) > 0) {
        do {
            temp_r0 = M2C_FIELD(arg0, void ***, 0xC0);
            M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, s32), 0x20)(temp_r0, var_r4);
            var_r4 += 1;
        } while (var_r4 < func_0207834c(M2C_FIELD(arg0, void ***, 0xC0)));
    }
    func_0207aac8(M2C_FIELD(arg0, s32 *, 0xC4));
    func_0207aa8c(M2C_FIELD(arg0, s32 *, 0xC4));
    func_020a1018(arg0);
}
