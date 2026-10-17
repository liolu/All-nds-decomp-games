/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002720(M2C_UNK *);                   /* extern */
void *func_02010458();                              /* extern */
s32 func_02010468(M2C_UNK);                         /* extern */
M2C_UNK func_020106e4(M2C_UNK);                     /* extern */
M2C_UNK func_020242d4(s32, M2C_UNK *, M2C_UNK);     /* extern */
s32 func_02024654();                                /* extern */
extern M2C_UNK data_02087b34;
extern M2C_UNK data_020be414;

void func_02017d34(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(func_02010458(), s32 *, 0xC);
    if (func_02010468(arg0) < (s32) (temp_r4 - 1)) {
        func_020106e4(arg0);
        func_02002720(&data_020be414);
        return;
    }
    func_020242d4(func_02024654(), &data_02087b34, 0);
}
