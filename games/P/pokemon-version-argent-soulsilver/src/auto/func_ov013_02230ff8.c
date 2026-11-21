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

void func_ov013_022277d8(s32, s8, s32);
void func_ov013_02227984(s32);
void func_ov013_02227e04(s32);
void func_ov013_0222b968(s32 *, s32 *);
void func_ov013_0222b908(void *);
void func_ov013_022317c8(void);
void func_ov013_022316d4(void);
void func_ov013_0223112c(void);
void func_ov013_0223a2ac(void *);
Q *func_ov013_022401a4(s32, s32);
s32 func_ov013_022408c0(s32, s32);
S *func_ov013_022412ac(s32, s32);
s8 func_ov013_02242094(void *, s32);
extern u8 data_ov013_02245474[];
extern S *data_ov013_0224f560;
extern void func_ov013_022311e8(void);

void func_ov013_02230ff8(void) {
    s32 sp4;
    s32 sp8;
    u8 sp[2];
    sp[0]               = data_ov013_02245474[0];
    sp[1]               = data_ov013_02245474[1];
    data_ov013_0224f560 = func_ov013_022412ac(0x2C, 4);
    func_ov013_0222b968(&sp4, &sp8);
    if (sp4 == 0) {
        func_ov013_0223a2ac((u8 *) data_ov013_0224f560 + 8);
        data_ov013_0224f560->b29 = func_ov013_02242094((u8 *) data_ov013_0224f560 + 8, 0x20);
    }
    func_ov013_0223112c();
    func_ov013_02227e04(sp4 + 9);
    if (sp8 == 1) {
        func_ov013_022277d8(0x35, -1, 0);
    } else {
        s32 t = sp[sp4];
        func_ov013_022277d8(t, -1, 0);
    }
    func_ov013_02227984(2);
    data_ov013_0224f560->f0      = func_ov013_022408c0(0, 0);
    data_ov013_0224f560->q       = func_ov013_022401a4(0, 0x3E);
    data_ov013_0224f560->q->mode = 3;
    func_ov013_022317c8();
    func_ov013_022316d4();
    func_ov013_0222b908(func_ov013_022311e8);
}
