/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0200559c(void **arg0) {
    void *var_r4;

    var_r4 = *arg0;
    if (var_r4 == NULL) {
        return;
    }
    do {
        M2C_FIELD(M2C_FIELD(var_r4, void **, 4), M2C_UNK(**)(void *), 8)(var_r4);
        var_r4 = M2C_FIELD(var_r4, void **, 0);
    } while (var_r4 != NULL);
}
