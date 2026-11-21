#include "m2c.h"

typedef struct S {
    s32 f0;
    u8 pad[0x10];
    s32 f14;
    u8 pad2[4];
    u8 f1c;
} S;

void func_ov013_02240088(s32, s32, s32 *, s32 *);
void func_ov013_0223c528(s32);
s32 func_ov013_02242548(s32, void *, s32, s32);
void func_ov013_022425f0(s32, s32);
extern u16 data_ov013_022458f6[];
extern S *data_ov013_0224f5d8;
extern void func_ov013_0223c4bc(void);
extern void func_ov013_0223c360(void);

void func_ov013_0223c28c(s32 arg0) {
    s32 sp0;
    s32 sp4;
    s32 lim;

    func_ov013_02240088(data_ov013_0224f5d8->f0, 0, &sp0, &sp4);
    sp4 -= 0xc;
    lim = data_ov013_022458f6[data_ov013_0224f5d8->f1c * 2];
    if (sp4 > lim) {
        func_ov013_0223c528(sp4);
        return;
    }
    func_ov013_0223c528(lim);
    if (data_ov013_0224f5d8->f1c == 5) {
        data_ov013_0224f5d8->f14 = func_ov013_02242548(0, func_ov013_0223c4bc, 0, 0x78);
    } else {
        data_ov013_0224f5d8->f14 = func_ov013_02242548(0, func_ov013_0223c360, 0, 0x78);
    }
    func_ov013_022425f0(1, arg0);
}
