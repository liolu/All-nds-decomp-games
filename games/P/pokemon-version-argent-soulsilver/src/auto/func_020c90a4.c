#include "m2c.h"

extern u8 data_021e0334[];
extern u8 data_021e037c[];
void func_020c912c(void);
s32 func_020caf0c(void *);
void func_020caf40(void *);
s32 func_020caf58(void *);
void func_020d52a0(s32, s32, s32);

void func_020c90a4(void) {
    u8 *b = data_021e037c;
    s32 t;
    if (*(s32 *) (data_021e0334 + 0x48) == 0) {
        return;
    }
    if (*(s32 *) (b + 4) != 0) {
        return;
    }
    func_020caf40(b + 0x3c);
    if (*(s32 *) (b + 0x4c) != 0 && func_020caf58(b + 0x3c) != 0) {
        func_020c912c();
        return;
    }
    t = func_020caf0c(b + 0x3c) >> 8;
    if (t == *(s32 *) (b + 0x50)) {
        return;
    }
    func_020d52a0(*(s32 *) (b + 0x24), t, 0);
    *(s32 *) (b + 0x50) = t;
}
