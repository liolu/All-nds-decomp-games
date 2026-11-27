/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02099648(void *);                      /* extern */

void func_0209ea10(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x190);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0xC)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0x190) = NULL;
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x194);
    if (temp_r0_2 != NULL) {
        if (temp_r0_2 != NULL) {
            M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
        }
        M2C_FIELD(arg0, void ***, 0x194) = NULL;
    }
    func_02099648(arg0);
}
