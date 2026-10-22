/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202036c(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_0215c29c;
extern M2C_UNK data_0215c430;

void func_02015818(void *arg0) {
    s32 var_r1;
    s32 var_r1_2;

    if (M2C_FIELD(arg0, u8 *, 0x2E) != 0) {
        var_r1 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (var_r1 == 0) {
            var_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 8);
        }
        func_0202036c(&data_0215c430, var_r1);
        return;
    }
    var_r1_2 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (var_r1_2 == 0) {
        var_r1_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 8);
    }
    func_0202036c(&data_0215c29c, var_r1_2);
}
