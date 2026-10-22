/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffa6b8(void **);                     /* extern */

void *func_0201c068(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;

    temp_r0 = M2C_FIELD(arg0, void ***, 0);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_01ffa6b8(M2C_FIELD(arg0, void ***, 4));
    temp_r0_2 = M2C_FIELD(arg0, void ***, 4);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    func_01ffa6b8(M2C_FIELD(arg0, void ***, 8));
    temp_r0_3 = M2C_FIELD(arg0, void ***, 8);
    if (temp_r0_3 != NULL) {
        M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 4)(temp_r0_3);
    }
    func_01ffa6b8(M2C_FIELD(arg0, void ***, 0xC));
    temp_r0_4 = M2C_FIELD(arg0, void ***, 0xC);
    if (temp_r0_4 != NULL) {
        M2C_FIELD(*temp_r0_4, M2C_UNK(**)(), 4)(temp_r0_4);
    }
    return arg0;
}
