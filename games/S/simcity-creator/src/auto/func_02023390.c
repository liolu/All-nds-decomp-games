#include "m2c.h"

M2C_UNK func_02001fdc(M2C_UNK);                     /* extern */
M2C_UNK func_02002084(M2C_UNK);                     /* extern */
M2C_UNK func_020022d4();                            /* extern */
M2C_UNK func_020022e8();                            /* extern */
M2C_UNK func_02006e64(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0202347c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020234a8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020234d4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02023508(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02090ba4(s32, M2C_UNK);                /* extern */
M2C_UNK func_0209542c(s32, M2C_UNK);                /* extern */

void func_02023390(void *arg0) {
    void **temp_r0;

    func_02090ba4(M2C_FIELD(arg0, s32 *, 0x62E4), 0);
    temp_r0 = M2C_FIELD(arg0, void ***, 0x62EC);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_020022e8();
    func_020022d4();
    func_02006e64(0, 0x06800000, 0xA4000);
    func_02001fdc(4);
    func_02002084(0x100);
    func_02023508(0, 1, 0x1C, 0, 0);
    func_020234d4(0, 0, 0x1D, 6, 0);
    func_020234a8(0, 1, 0x1E, 4);
    func_0202347c(0, 0, 0x1F, 6);
    func_0209542c(M2C_FIELD(arg0, s32 *, 0x62E8), 0);
    *(s32 *) 0x04001000 &= 0xFFCFFFEF;
}
