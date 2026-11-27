/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020147a8(void *, M2C_UNK);             /* extern */
M2C_UNK func_02074664(void *);                      /* extern */
extern M2C_UNK data_020fafb0;

void *func_02014acc(void *arg0) {
    func_020147a8(arg0, 1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fafb0;
    M2C_FIELD(arg0, s8 *, 0x8C)    = 0;
    M2C_FIELD(arg0, s32 *, 0x90)   = 0;
    func_02074664(arg0 + 0x88);
    return arg0;
}
