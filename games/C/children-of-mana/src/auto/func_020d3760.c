/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4();                      /* extern */
M2C_UNK func_020bed64();                      /* extern */
extern M2C_UNK data_0210bc00;

void *func_020d3760(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210bc00;
    if (M2C_FIELD(arg0, s32 *, 0xF8) != 0) {
        func_0200f2c4();
        M2C_FIELD(arg0, s32 *, 0xF8) = 0;
    }
    func_020bed64(arg0);
    func_0200f2c4(arg0);
    return arg0;
}
