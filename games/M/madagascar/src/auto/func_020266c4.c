/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02005bec(void **, M2C_UNK *);          /* extern */
void **func_02005d14(void **, M2C_UNK);             /* extern */
void **func_0207b068(M2C_UNK);                      /* extern */
extern M2C_UNK data_020bfbb0;

void func_020266c4(void *arg0) {
    void **temp_r0;
    void **var_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x10);
    if ((temp_r0 != NULL) && (temp_r0 != NULL)) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    var_r0 = func_0207b068(0x2E0);
    if (var_r0 != NULL) {
        var_r0 = func_02005d14(var_r0, 1);
    }
    M2C_FIELD(arg0, void ***, 0x10) = var_r0;
    func_02005bec(M2C_FIELD(arg0, void ***, 0x10), &data_020bfbb0);
}
