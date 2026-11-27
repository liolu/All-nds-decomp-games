#include "m2c.h"

extern M2C_UNK data_021e169c;

u32 _Z20DisableIRQInterruptsv(void);
void _Z20SetIRQInterruptStatei(u32 arg0);
void func_020d1c84(void);
void func_020d21fc(void);
void func_020d26f8(void *arg0);
void func_020d1e20(void *arg0);
void func_020d1784(s32 arg0, void *arg1);
void func_020d1868(void *arg0);
void func_020d1ecc(void *arg0);
void func_020d2230(void);
void func_020d1f84(void);

void func_020d1ce0(u8 *param_1) {
    u32 state;

    state = _Z20DisableIRQInterruptsv();
    if (*(u8 **) ((u8 *) &data_021e169c + 0x28) == param_1) {
        func_020d1c84();
    }
    func_020d21fc();
    func_020d26f8(param_1);
    func_020d1e20(param_1);
    if (*(u32 *) (param_1 + 0x78) != 0) {
        func_020d1784(*(u32 *) (param_1 + 0x78), param_1);
    }
    func_020d1868(param_1);
    *(u32 *) (param_1 + 0x64) = 2;
    func_020d1ecc(param_1 + 0x9C);
    func_020d2230();
    _Z20SetIRQInterruptStatei(state);
    func_020d1f84();
}
