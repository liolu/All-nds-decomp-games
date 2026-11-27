/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02063554(u8);                          /* extern */

void func_02074524(void **arg0) {
    void *temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 == NULL) {
        return;
    }
    func_02063554(M2C_FIELD(temp_r0, u8 *, 0x3C));
}
