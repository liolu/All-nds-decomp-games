#include "m2c.h"

M2C_UNK func_0203631c(void *);                      /* extern */
M2C_UNK func_02039488(M2C_UNK);                     /* extern */
M2C_UNK func_0203c628(void *);                      /* extern */
M2C_UNK func_02091394(void *);                      /* extern */

void *func_0201f254(void *arg0) {
    void **temp_r0;

    func_02039488(0);
    temp_r0 = M2C_FIELD(arg0, void ***, 0x67C);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_0203c628(arg0 + 0x408);
    func_0203631c(arg0 + 0x330);
    func_02091394(arg0 + 0x3C);
    func_02091394(arg0 + 0x14);
    return arg0;
}
