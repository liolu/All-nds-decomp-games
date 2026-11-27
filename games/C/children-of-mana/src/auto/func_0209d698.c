/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0207834c(void **);                         /* extern */
M2C_UNK func_0207aefc(s32);                         /* extern */
M2C_UNK func_020a5df4(void *);                      /* extern */

void func_0209d698(void *arg0) {
    s32 var_r4;
    void **temp_r0;

    var_r4 = 0;
    if (func_0207834c(M2C_FIELD(arg0, void ***, 0x114)) > 0) {
        do {
            temp_r0 = M2C_FIELD(arg0, void ***, 0x114);
            M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, s32), 0x2C)(temp_r0, var_r4);
            var_r4 += 1;
        } while (var_r4 < func_0207834c(M2C_FIELD(arg0, void ***, 0x114)));
    }
    func_0207aefc(M2C_FIELD(arg0, s32 *, 0x11C));
    func_020a5df4(arg0);
}
