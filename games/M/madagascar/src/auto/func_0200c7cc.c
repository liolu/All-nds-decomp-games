/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200cb84(s32, void *, u32);            /* extern */
s32 func_0207b068(s32);                             /* extern */
extern M2C_UNK data_020bcc9c;
extern M2C_UNK data_020bd858;

void *func_0200c7cc(void *arg0, u32 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcc9c;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bd858;
    M2C_FIELD(arg0, s32 *, 4)      = func_0207b068(0x101C);
    func_0200cb84(M2C_FIELD(arg0, s32 *, 4), ((s8 *) arg1 + 4), (u32) *arg1 >> 8);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    return arg0;
}
