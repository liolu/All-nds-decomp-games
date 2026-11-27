#include "m2c.h"

extern M2C_UNK data_020f1950;

u32 func_020b6bd0(void);
void func_020b6be4(u32 arg0);
void func_020b50ac(void);
void func_020b5560(void);
void func_020b5a5c(void *arg0);
void func_020b5184(void *arg0);
void func_020b4bb0(s32 arg0, void *arg1);
void func_020b4c94(void *arg0);
void func_020b5230(void *arg0);
void func_020b5594(void);
void func_020b52e8(void);

void func_020b5108(u8 *param_1) {
    u32 state;

    state = func_020b6bd0();
    if (*(u8 **) ((u8 *) &data_020f1950 + 0x28) == param_1) {
        func_020b50ac();
    }
    func_020b5560();
    func_020b5a5c(param_1);
    func_020b5184(param_1);
    if (*(u32 *) (param_1 + 0x78) != 0) {
        func_020b4bb0(*(u32 *) (param_1 + 0x78), param_1);
    }
    func_020b4c94(param_1);
    *(u32 *) (param_1 + 0x64) = 2;
    func_020b5230(param_1 + 0x9C);
    func_020b5594();
    func_020b6be4(state);
    func_020b52e8();
}
