/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200eee0(M2C_UNK *);                       /* extern */
M2C_UNK func_0208ff94(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_020900a0();                            /* extern */
extern M2C_UNK data_02102b24;

s32 func_020924c8(s32 arg0) {
    func_020900a0();
    func_0208ff94(arg0, func_0200eee0(&data_02102b24), 0);
    return arg0;
}
