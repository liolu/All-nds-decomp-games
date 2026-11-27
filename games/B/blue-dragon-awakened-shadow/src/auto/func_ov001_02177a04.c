/* near start: 1 diffs with profile "2.0/sp1p5" */
#include "m2c.h"

typedef struct Q {
    u16 a0;
    u16 a2;
    u16 lo : 10;
    u16 mode : 2;
    u16 hi : 4;
} Q;
typedef struct S {
    s32 f0;
    Q *q;
    u8 body[0x21];
    s8 b29;
} S;

void func_ov001_0216e1b0(s32, s8, s32);
void func_ov001_0216e35c(s32);
void func_ov001_0216e7dc(s32);
void func_ov001_02172344(s32 *, s32 *);
void func_ov001_021722e4(void *);
void func_ov001_021781d4(void);
void func_ov001_021780e0(void);
void func_ov001_02177b38(void);
void func_ov001_02180d30(void *);
Q *func_ov001_02186c68(s32, s32);
s32 func_ov001_02187384(s32, s32);
S *func_ov001_02187d70(s32, s32);
s8 func_ov001_02188b58(void *, s32);
extern u8 data_ov001_02192af0[];
extern S *data_ov001_02196be0;
extern void func_ov001_02177bf4(void);

void func_ov001_02177a04(void) {
    s32 sp4;
    s32 sp8;
    u8 sp[2];
    sp[0]               = data_ov001_02192af0[0];
    sp[1]               = data_ov001_02192af0[1];
    data_ov001_02196be0 = func_ov001_02187d70(0x2C, 4);
    func_ov001_02172344(&sp4, &sp8);
    if (sp4 == 0) {
        func_ov001_02180d30((u8 *) data_ov001_02196be0 + 8);
        data_ov001_02196be0->b29 = func_ov001_02188b58((u8 *) data_ov001_02196be0 + 8, 0x20);
    }
    func_ov001_02177b38();
    func_ov001_0216e7dc(sp4 + 9);
    if (sp8 == 1) {
        func_ov001_0216e1b0(0x35, -1, 0);
    } else {
        s32 t = sp[sp4];
        func_ov001_0216e1b0(t, -1, 0);
    }
    func_ov001_0216e35c(2);
    data_ov001_02196be0->f0      = func_ov001_02187384(0, 0);
    data_ov001_02196be0->q       = func_ov001_02186c68(0, 0x3E);
    data_ov001_02196be0->q->mode = 3;
    func_ov001_021781d4();
    func_ov001_021780e0();
    func_ov001_021722e4(func_ov001_02177bf4);
}
