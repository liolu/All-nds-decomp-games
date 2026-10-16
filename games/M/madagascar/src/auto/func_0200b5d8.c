/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02018acc(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_020d1ec8;
extern M2C_UNK data_020d2060;
extern M2C_UNK data_020d2390;
extern M2C_UNK data_020d2528;

void func_0200b5d8(void *arg0) {
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r1_4;

    if (M2C_FIELD(arg0, u8 *, 0x36) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x28) == 0) {
            var_r1 = M2C_FIELD(arg0, s32 *, 0x24);
            if (var_r1 == 0) {
                var_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 8);
            }
            func_02018acc(&data_020d2390, var_r1);
            return;
        }
        var_r1_2 = M2C_FIELD(arg0, s32 *, 0x24);
        if (var_r1_2 == 0) {
            var_r1_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 8);
        }
        func_02018acc(&data_020d2060, var_r1_2);
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x28) == 0) {
        var_r1_3 = M2C_FIELD(arg0, s32 *, 0x24);
        if (var_r1_3 == 0) {
            var_r1_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 8);
        }
        func_02018acc(&data_020d2528, var_r1_3);
        return;
    }
    var_r1_4 = M2C_FIELD(arg0, s32 *, 0x24);
    if (var_r1_4 == 0) {
        var_r1_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 8);
    }
    func_02018acc(&data_020d1ec8, var_r1_4);
}
