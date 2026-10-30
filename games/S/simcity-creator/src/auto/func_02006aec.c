#include "m2c.h"

void func_02006c48(s32 n);
u32 func_020066e0(void);
void func_020066f4(u32 s);
void func_020041ec(s32 n, void (*cb)(void *), void *arg);
void func_01ff8264(s32 n, u32 ctrl, u32 src, u32 cnt);

void func_02006aec(s32 dmaNo, u32 dest, u32 data, u32 size, void (*callback)(void *), void *arg) {
    u32 state;
    if (size == 0) {
        if (callback != NULL) {
            callback(arg);
        }
        return;
    }
    func_02006c48(dmaNo);
    if (callback != NULL) {
        func_020041ec(dmaNo, callback, arg);
        state                                               = func_020066e0();
        *(volatile u32 *) (0x04000000 + (dmaNo * 4) + 0xE0) = data;
        func_01ff8264(dmaNo, 0x040000E0 + (dmaNo * 4), dest, (size >> 2) | 0xC5000000);
        func_020066f4(state);
        return;
    }
    state                                               = func_020066e0();
    *(volatile u32 *) (0x04000000 + (dmaNo * 4) + 0xE0) = data;
    func_01ff8264(dmaNo, 0x040000E0 + (dmaNo * 4), dest, (size >> 2) | 0x85000000);
    func_020066f4(state);
}
