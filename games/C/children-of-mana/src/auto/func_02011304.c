/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *);                   /* extern */
M2C_UNK func_0200f2c4();                            /* extern */
M2C_UNK func_02011224(M2C_UNK);                     /* extern */
s32 func_020114e4();                                /* extern */
M2C_UNK func_02013e98(s32, s32);                    /* extern */
M2C_UNK func_020759c4(s32);                         /* extern */
M2C_UNK func_02075a84(s32);                         /* extern */
extern M2C_UNK data_020fac44;
extern M2C_UNK data_020fac5c;
extern s32 data_021152dc;
extern void **data_021152e0;
extern s32 data_021152e4;
extern s32 data_021152e8;
extern M2C_UNK data_021152ec;

void func_02011304(void) {
    s32 var_r6;

    func_0200e8c8(&data_020fac44);
    var_r6 = 0;
    do {
        func_02013e98(func_020114e4(), *((M2C_UNK *) ((s8 *) &data_021152ec + (var_r6 * 4))));
        *((M2C_UNK *) ((s8 *) &data_021152ec + (var_r6 * 4))) = 0;
        var_r6 += 1;
    } while (var_r6 < 0xA);
    func_02013e98(func_020114e4(), data_021152dc);
    data_021152dc = 0;
    if (data_021152e0 != NULL) {
        if (data_021152e0 != NULL) {
            M2C_FIELD(*data_021152e0, M2C_UNK(**)(), 4)(data_021152e0);
        }
        data_021152e0 = NULL;
    }
    func_02011224(0);
    func_020759c4(data_021152e4);
    func_02075a84(data_021152e4);
    if (data_021152e8 != 0) {
        func_0200f2c4();
        data_021152e8 = 0;
    }
    func_0200e8c8(&data_020fac5c);
}
