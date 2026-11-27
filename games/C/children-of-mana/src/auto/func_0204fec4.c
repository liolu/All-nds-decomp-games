/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200eee0(M2C_UNK *);                       /* extern */
s32 func_0200f270(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0208ff94(s32, s32, M2C_UNK);           /* extern */
s32 func_020900a0();                                /* extern */
extern M2C_UNK data_020ff020;
extern s32 data_0211a540;

void func_0204fec4(void) {
    s32 var_r0;

    if (data_0211a540 == 0) {
        var_r0 = func_0200f270(0x18, 0);
        if (var_r0 != 0) {
            var_r0 = func_020900a0();
        }
        data_0211a540 = var_r0;
    }
    func_0208ff94(data_0211a540, func_0200eee0(&data_020ff020), 0);
}
