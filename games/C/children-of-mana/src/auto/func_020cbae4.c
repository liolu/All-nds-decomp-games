/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b9d74();                            /* extern */
M2C_UNK func_020bb4fc(void *);                      /* extern */
extern M2C_UNK data_0210ac40;

void *func_020cbae4(void *arg0) {
    func_020b9d74();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210ac40;
    M2C_FIELD(arg0, s32 *, 0x248)  = 0;
    M2C_FIELD(arg0, s32 *, 0x28C)  = 0;
    func_020bb4fc(arg0 + 0x24C);
    M2C_FIELD(arg0, u16 *, 0xFC) = (u16) (M2C_FIELD(arg0, u16 *, 0xFC) | 4);
    return arg0;
}
