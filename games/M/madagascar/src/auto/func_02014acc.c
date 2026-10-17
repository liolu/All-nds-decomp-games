/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002720(M2C_UNK *);                   /* extern */
M2C_UNK func_02014cac(void *);                      /* extern */
M2C_UNK func_020242d4(s32, M2C_UNK *, M2C_UNK);     /* extern */
s32 func_02024654();                                /* extern */
s32 func_020326ac(void *);                          /* extern */
s32 func_020326d4();                                /* extern */
M2C_UNK func_02033d44(void *);                      /* extern */
extern M2C_UNK data_0208232c;
extern M2C_UNK data_02087e44;

void func_02014acc(void *arg0) {
    if (func_020326d4() != 0) {
        func_02033d44(arg0);
    }
    if (func_020326ac(arg0) != 0) {
        func_02033d44(arg0);
        if (M2C_FIELD(arg0, u8 *, 0x25C) == 1) {
            func_020242d4(func_02024654(), &data_02087e44, 0);
            func_02002720(&data_0208232c);
        }
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C4), u8 *, 4) == 0) {
        return;
    }
    func_02014cac(arg0);
}
