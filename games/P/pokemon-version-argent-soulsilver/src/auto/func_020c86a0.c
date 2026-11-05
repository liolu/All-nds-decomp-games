#include "m2c.h"
typedef struct {
    u8 pad[0x1c];
    u32 ch;
} Q;
typedef struct {
    u8 pad[4];
    Q *q;
    u8 pad2[0x28];
    u8 trk;
    u8 pad3[0];
} Dummy;
typedef struct {
    u8 pad[4];
    Q *q;
    u8 pad2[0x24];
    u8 b2c;
    u8 pad4[2];
    u8 b2f;
    s32 tag;
    u8 pad5[8];
    u8 trk;
} P;
void func_020d5064(u32);
void func_020d514c(u32, u32, u32);
void func_020c87b8(void *);
s32 func_020d59fc(void);
void func_020c86a0(P *p) {
    Q *q = p->q;
    func_020d5064(p->trk);
    if (q->ch != 0) {
        func_020d514c(p->trk, 0xffff, q->ch);
    }
    func_020c87b8(p);
    p->tag = func_020d59fc();
    p->b2f = 1;
    p->b2c = 1;
}
