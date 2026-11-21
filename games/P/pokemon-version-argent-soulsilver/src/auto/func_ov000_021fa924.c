#include "m2c.h"

s32 _Z20DisableIRQInterruptsv(void);
void _Z20SetIRQInterruptStatei(s32);
s32 func_ov000_021fb030(void);
void func_ov000_021faff8(void);
u32 func_ov000_021faeec(void);
void func_ov000_021fae8c(u32);
u32 func_ov000_021fb6d8(void);
u32 func_ov000_021fbd58(void);
u32 func_ov000_021fc34c(void);
u32 func_ov000_021fc428(void);
u32 func_ov000_021fcbf8(void);
u32 func_ov000_021fcc80(void);

s32 func_ov000_021fa924(void) {
    s32 saved;
    s32 res;
    u32 st;

    st = func_ov000_021faeec();
    if (st == 1) {
        st = func_ov000_021fcbf8();
    } else if (st < 7U) {
        saved = _Z20DisableIRQInterruptsv();
        st    = func_ov000_021fc428();
        func_ov000_021fae8c(st);
        _Z20SetIRQInterruptStatei(saved);
    } else if (st < 9U) {
        st = func_ov000_021fb6d8();
    } else if (st < 0xAU) {
        st = func_ov000_021fc34c();
    } else if (st < 0x10U) {
        st = func_ov000_021fcc80();
    } else if (st == 0x11) {
        st = func_ov000_021fbd58();
    }
    func_ov000_021fae8c(st);
    if (st == 0x10) {
        res = func_ov000_021fb030();
        func_ov000_021faff8();
        return res;
    }
    if (st != 0x12) {
        return 0;
    }
    func_ov000_021faff8();
    return -1;
}
