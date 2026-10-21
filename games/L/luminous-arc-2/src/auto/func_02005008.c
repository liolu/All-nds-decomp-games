#include "m2c.h"

extern M2C_UNK data_021478e0;

u32 func_02006be0(void);
void func_02006bf4(u32 arg0);
void func_02004fac(void);
void func_0200546c(void);
void func_02005980(void *arg0);
void func_02005084(void *arg0);
void func_02004ab0(s32 arg0, void *arg1);
void func_02004b94(void *arg0);
void func_02005130(void *arg0);
void func_020054a0(void);
void func_020051e8(void);

void func_02005008(u8 *param_1) {
    u32 state;

    state = func_02006be0();
    if (*(u8 **) ((u8 *) &data_021478e0 + 0x28) == param_1) {
        func_02004fac();
    }
    func_0200546c();
    func_02005980(param_1);
    func_02005084(param_1);
    if (*(u32 *) (param_1 + 0x78) != 0) {
        func_02004ab0(*(u32 *) (param_1 + 0x78), param_1);
    }
    func_02004b94(param_1);
    *(u32 *) (param_1 + 0x64) = 2;
    func_02005130(param_1 + 0x9C);
    func_020054a0();
    func_02006bf4(state);
    func_020051e8();
}
