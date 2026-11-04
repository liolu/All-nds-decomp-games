/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02048870();                      /* extern */
M2C_UNK func_020489d8(); /* extern */
s32 _ZN3IRQ7DisableEv();                                /* extern */
M2C_UNK _ZN3IRQ7RestoreEj();                         /* extern */
M2C_UNK func_020586a8();                         /* extern */
extern void *data_0206efc0;
extern M2C_UNK func_02058760;

void func_020586d8(void *arg0, s32 arg1) {
    s32 temp_ip;
    s32 temp_r4;

    temp_r4 = _ZN3IRQ7DisableEv();
    if (data_0206efc0 == NULL) {
        data_0206efc0 = arg0;
        func_020586a8(arg0 + 0x98);
        M2C_FIELD(arg0, s32 *, 0x94) = 0;
        temp_ip                      = (arg1 - 0xB8) & ~3;
        func_020489d8(arg0, &func_02058760, arg0, arg0 + 0xB8 + temp_ip, temp_ip, 0);
        func_02048870(arg0);
    }
    _ZN3IRQ7RestoreEj(temp_r4);
}
