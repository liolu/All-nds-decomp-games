/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205bae4(M2C_UNK *, void *);           /* extern */
M2C_UNK func_0205c1c8(s32);                         /* extern */
extern M2C_UNK data_02163adc;

void func_0205cc00(void *arg0) {
    func_0205c1c8(M2C_FIELD(arg0, s32 *, 0x28));
    func_0205bae4(&data_02163adc, arg0);
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
