/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002744(void *);                      /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bdc80;
extern M2C_UNK data_020bf35c;

void *func_02011ab0(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bdc80;
    if ((M2C_FIELD(arg0, u8 *, 0x136) != 0) || (((s32) (*(u16 *) 0x04000304 & 0x8000) >> 0xF) == 0)) {
        temp_r0 = M2C_FIELD(arg0, void ***, 0x138);
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        func_02002744(arg0);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf35c;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    return arg0;
}
