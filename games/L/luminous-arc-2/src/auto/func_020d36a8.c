#include "m2c.h"

M2C_UNK func_020d2084(M2C_UNK);                     /* extern */
M2C_UNK func_020d2104();                            /* extern */
s32 func_020d360c(u16);                             /* extern */
extern M2C_UNK data_02147404;
extern M2C_UNK data_02185160;
extern u16 data_02186528;
extern u16 data_0218652a;

void func_020d36a8(void *arg0) {
    s32 temp_r0;
    u16 temp_ip;
    u16 temp_r3;

    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_020d2104();
        func_020d2084(9);
        return;
    }
    if (M2C_FIELD(&data_02185160, M2C_UNK(**)(M2C_UNK *, u16, u16), 0x1C) != NULL) {
        M2C_FIELD(&data_02185160, M2C_UNK(**)(M2C_UNK *, u16, u16), 0x1C)(&data_02147404, M2C_FIELD(arg0, u16 *, 8),
                                                                          M2C_FIELD(arg0, u16 *, 0xA));
    }
    temp_r3 = M2C_FIELD(arg0, u16 *, 0xA);
    temp_ip = M2C_FIELD(arg0, u16 *, 8);
    if ((u32) data_0218652a > (u32) temp_r3) {
        data_0218652a = temp_r3;
        data_02186528 = 1 << (temp_ip - 1);
    } else if (data_0218652a == temp_r3) {
        data_02186528 |= 1 << (temp_ip - 1);
    }
    temp_r0 = func_020d360c((u16) (temp_ip + 1));
    if (temp_r0 == 0x18) {
        func_020d2084(7);
        return;
    }
    if (temp_r0 == 2) {
        return;
    }
    func_020d2084(9);
}
