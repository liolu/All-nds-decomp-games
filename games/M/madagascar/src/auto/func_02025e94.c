/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207b040(void *);                      /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bf504;
extern M2C_UNK data_020bf528;

void *func_02025e94(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf528;
    if (M2C_FIELD(arg0, u8 *, 0x18) != 0) {
        temp_r0 = M2C_FIELD(arg0, void ***, 0x14);
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf504;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    func_0207b040(arg0);
    return arg0;
}
