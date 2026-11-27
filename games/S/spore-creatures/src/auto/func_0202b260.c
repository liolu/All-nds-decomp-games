#include "m2c.h"

s32 func_020199c0();                                /* extern */
M2C_UNK func_0202b378(void *);                      /* extern */
M2C_UNK func_0202bb8c(void *);                      /* extern */
M2C_UNK func_0204358c(void *);                      /* extern */
M2C_UNK func_0208f4c0(void *);                      /* extern */
M2C_UNK func_0208fcb4(void *, M2C_UNK);             /* extern */
M2C_UNK func_02093234(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_02093480(M2C_UNK);                         /* extern */
M2C_UNK func_0209d254(void *);                      /* extern */
M2C_UNK func_020cfa20(void *, M2C_UNK, M2C_UNK, M2C_UNK (*)(void *), M2C_UNK *); /* extern */
extern M2C_UNK func_0202b38c;
extern M2C_UNK func_02043640;

void *func_0202b260(void *arg0, s32 arg1) {
    s32 var_r0;

    M2C_FIELD(arg0, s32 *, 0)    = arg1;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    var_r0                       = func_02093480(0x14);
    if (var_r0 != 0) {
        var_r0 = func_020199c0();
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = var_r0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    func_020cfa20(arg0 + 0x28, 2, 0x20, func_0204358c, &func_02043640);
    func_0204358c(arg0 + 0x68);
    func_020cfa20(arg0 + 0x88, 2, 0xC, func_0202b378, &func_0202b38c);
    func_0208f4c0(arg0 + 0xA0);
    func_0208fcb4(arg0 + 0xD0, 0);
    func_0209d254(arg0 + 0xDC);
    M2C_FIELD(arg0, s32 *, 0xEC)  = 0;
    M2C_FIELD(arg0, s32 *, 0xF0)  = 0;
    M2C_FIELD(arg0, s32 *, 0xF4)  = 0;
    M2C_FIELD(arg0, s32 *, 0xF8)  = 0;
    M2C_FIELD(arg0, s32 *, 0xFC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x100) = 0;
    M2C_FIELD(arg0, s32 *, 0x110) = 0;
    func_02093234(arg0 + 0x104, 0, 0xC, 8);
    if (arg1 == 0) {
        func_0202bb8c(arg0);
    }
    return arg0;
}
