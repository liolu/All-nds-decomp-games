#include "m2c.h"

M2C_UNK func_0202a42c(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_0204e5e8(s32, u16);                      /* extern */
M2C_UNK func_02051540(s32, M2C_UNK *, s16);         /* extern */
extern M2C_UNK func_0205d79c;

void func_0205d6f4(void *arg0) {
    s32 temp_r0;
    s32 var_r3;
    void *temp_r0_2;
    void *var_ip;
    void *var_r0;

    if (M2C_FIELD(arg0, s32 *, 0) == 1) {
        return;
    }
    func_0202a42c(arg0 + 0xC, 0, 3);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x30);
    if (temp_r0 != 0) {
        func_02051540(temp_r0 + 0x34, &func_0205d79c, M2C_FIELD(arg0, s16 *, 0xC));
        return;
    }
    temp_r0_2 = M2C_FIELD(arg0, void **, 0x2C);
    if (temp_r0_2 != NULL) {
        var_r0 = M2C_FIELD(temp_r0_2, void **, 0x30);
    } else {
        var_r0 = func_0204e5e8(M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x20), M2C_FIELD(arg0, u16 *, 0x1C));
    }
    var_ip = M2C_FIELD(var_r0, void **, 4);
    var_r3 = 0;
    if ((s32) M2C_FIELD(var_r0, u16 *, 0) <= 0) {
        return;
    }
    do {
        var_r3 += 1;
        M2C_FIELD(var_ip, u16 *, 4) = (u16) ((M2C_FIELD(var_ip, u16 *, 4) & ~0xC00) | (M2C_FIELD(arg0, s16 *, 0xC) << 0xA));
        var_ip += 6;
    } while (var_r3 < (s32) M2C_FIELD(var_r0, u16 *, 0));
}
