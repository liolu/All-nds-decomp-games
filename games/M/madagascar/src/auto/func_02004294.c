/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u16 *func_0202c118();                               /* extern */
M2C_UNK func_0207b040(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bcf90;
extern s32 data_020d0050;

M2C_UNK **func_02004294(M2C_UNK **arg0) {
    u16 *temp_r0;

    *arg0   = &data_020bcf90;
    temp_r0 = func_0202c118();
    *temp_r0 &= ~0xC0;
    data_020d0050 = 0;
    *arg0         = &data_020bcd20;
    func_0207b040(arg0);
    return arg0;
}
