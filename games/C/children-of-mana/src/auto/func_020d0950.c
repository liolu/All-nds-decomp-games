/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK _Z16unkfunc_021210f0i(M2C_UNK);             /* extern */
M2C_UNK _Z16unkfunc_02121100i();                    /* extern */
s32 func_020d0a40(u16);                             /* extern */
extern M2C_UNK data_0210b768;
extern u16 data_02129eb0;
extern u16 data_02129ebc;
extern M2C_UNK (*data_02129ec8)(M2C_UNK *, u16, u16);

void func_020d0950(void *arg0) {
    s32 temp_r0;
    u16 temp_ip;
    u16 temp_r3;

    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        _Z16unkfunc_02121100i();
        _Z16unkfunc_021210f0i(9);
        return;
    }
    if (data_02129ec8 != NULL) {
        data_02129ec8(&data_0210b768, M2C_FIELD(arg0, u16 *, 8), M2C_FIELD(arg0, u16 *, 0xA));
    }
    temp_r3 = M2C_FIELD(arg0, u16 *, 0xA);
    temp_ip = M2C_FIELD(arg0, u16 *, 8);
    if ((u32) data_02129eb0 > (u32) temp_r3) {
        data_02129eb0 = temp_r3;
        data_02129ebc = 1 << (temp_ip - 1);
    } else if (data_02129eb0 == temp_r3) {
        data_02129ebc |= 1 << (temp_ip - 1);
    }
    temp_r0 = func_020d0a40((u16) (temp_ip + 1));
    if (temp_r0 == 0x18) {
        _Z16unkfunc_021210f0i(7);
        return;
    }
    if (temp_r0 == 2) {
        return;
    }
    _Z16unkfunc_021210f0i(9);
}
