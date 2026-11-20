#include "m2c.h"

M2C_UNK func_020934a8(void *);                      /* extern */
M2C_UNK func_0208acbc(void *);                      /* extern */
M2C_UNK func_0201f254(void *);                      /* extern */

void *func_0201f804(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 16);
    if (temp_r4 != NULL) {
        func_0201f254(temp_r4);
        func_020934a8(temp_r4);
    }
    func_0208acbc(arg0 + 4);
    func_020934a8(arg0);
    return arg0;
}
