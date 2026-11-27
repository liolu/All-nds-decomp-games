/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_02059f70(void *);                      /* extern */
extern M2C_UNK data_0210906c;
extern M2C_UNK data_0211310c;

void *func_02019c24(void *arg0) {
    s32 var_r4;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211310c;
    var_r4                         = M2C_FIELD(arg0, s32 *, 0x18) - 1;
    if (var_r4 >= 0) {
        do {
            func_02059f70(M2C_FIELD((arg0 + (var_r4 * 4)), void **, 8));
            var_r4 -= 1;
        } while (var_r4 >= 0);
    }
    func_02059f70(M2C_FIELD(arg0, void **, 4));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210906c;
    func_02059f70(arg0);
    return arg0;
}
