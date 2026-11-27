#include "m2c.h"

void func_020d422c(s32 n);
u32 _Z20DisableIRQInterruptsv(void);
void _Z20SetIRQInterruptStatei(u32 s);
void func_020d1118(s32 n, void (*cb)(void *), void *arg);
void func_01ff84f8(s32 n, u32 ctrl, u32 src, u32 cnt);

void func_020d40d0(s32 dmaNo, u32 dest, u32 data, u32 size, void (*callback)(void *), void *arg) {
    u32 state;
    if (size == 0) {
        if (callback != NULL) {
            callback(arg);
        }
        return;
    }
    func_020d422c(dmaNo);
    if (callback != NULL) {
        func_020d1118(dmaNo, callback, arg);
        state                                               = _Z20DisableIRQInterruptsv();
        *(volatile u32 *) (0x04000000 + (dmaNo * 4) + 0xE0) = data;
        func_01ff84f8(dmaNo, 0x040000E0 + (dmaNo * 4), dest, (size >> 2) | 0xC5000000);
        _Z20SetIRQInterruptStatei(state);
        return;
    }
    state                                               = _Z20DisableIRQInterruptsv();
    *(volatile u32 *) (0x04000000 + (dmaNo * 4) + 0xE0) = data;
    func_01ff84f8(dmaNo, 0x040000E0 + (dmaNo * 4), dest, (size >> 2) | 0x85000000);
    _Z20SetIRQInterruptStatei(state);
}
