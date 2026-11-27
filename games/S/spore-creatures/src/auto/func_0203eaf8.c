#include "m2c.h"

M2C_UNK func_0203ec14(void *);                      /* extern */
M2C_UNK func_0205e640(M2C_UNK *);                   /* extern */
M2C_UNK func_0205e670(M2C_UNK *);                   /* extern */
M2C_UNK func_0205e6d0(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02093234(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0209b578(s32, M2C_UNK, M2C_UNK *);     /* extern */

void func_0203eaf8(void *arg0) {
    u8 sp18[108];
    u8 sp0[24];
    s32 var_r4;
    void *var_r5;

    func_02093234(sp0, 0, 0x15, 8);
    func_0209b578(arg0 + 0xA4, 0xA, sp0);
    var_r4 = 0;
    if ((s32) M2C_FIELD(arg0, u8 *, 0xCD) > 0) {
        var_r5 = arg0;
        do {
            func_0203ec14(var_r5);
            var_r4 += 1;
            var_r5 += 0xC;
        } while (var_r4 < (s32) M2C_FIELD(arg0, u8 *, 0xCD));
    }
    func_0205e640(sp18);
    func_0205e6d0(sp18, arg0);
    func_0205e670(sp18);
}
