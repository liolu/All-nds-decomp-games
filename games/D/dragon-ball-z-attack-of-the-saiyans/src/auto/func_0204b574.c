#include "m2c.h"

void *func_020107c0();                              /* extern */
s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK *func_02012c10(M2C_UNK, s32);               /* extern */
M2C_UNK func_02013034(M2C_UNK *);                   /* extern */
M2C_UNK func_0204d070();                            /* extern */
M2C_UNK func_0204d130(M2C_UNK *);                   /* extern */
M2C_UNK func_02088a58(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_02088ab4(M2C_UNK *, M2C_UNK *);        /* extern */
s32 func_02088ad8(M2C_UNK *, M2C_UNK *);            /* extern */
extern M2C_UNK data_0209e58c;
extern M2C_UNK data_0209e5a0;
extern M2C_UNK data_0209e5b0;
extern M2C_UNK data_0209e5c4;
extern M2C_UNK data_020cc620;

s32 func_0204b574(M2C_UNK arg0) {
    u8 sp7[121];
    u8 sp0[7];
    M2C_UNK *temp_r0;
    s32 var_r2;
    s32 var_r3;
    void *var_r0;

    temp_r0 = func_02012c10(arg0, func_02012a90(arg0, 1));
    if (func_02088ad8(temp_r0, &data_0209e58c) == 0) {
        func_02088a58(sp0, &data_0209e5a0);
        func_02013034(sp7);
    } else {
        func_02088a58(sp0, &data_0209e5b0);
    }
    func_02088ab4(sp0, temp_r0);
    func_02088ab4(sp0, &data_0209e5c4);
    func_0204d070();
    func_0204d130(sp0);
    var_r0 = func_020107c0();
    var_r2 = 0;
    var_r3 = 0;
    do {
        var_r3 += 1;
        if (M2C_FIELD(var_r0, s32 *, 0x10) != 0) {
            var_r2 += 1;
        }
        var_r0 += 0x40;
    } while (var_r3 < 0x20);
    M2C_FIELD(&data_020cc620, s32 *, 0xA8) = var_r2;
    return 1;
}
