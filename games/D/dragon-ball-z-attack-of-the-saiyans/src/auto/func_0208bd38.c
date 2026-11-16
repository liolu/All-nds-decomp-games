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
void func_02086148(u32);
void func_020861e0(u32, u32, u32);
void func_0208be50(void *);
s32 func_0208695c(void);
void func_0208bd38(P *p) {
    Q *q = p->q;
    func_02086148(p->trk);
    if (q->ch != 0) {
        func_020861e0(p->trk, 0xffff, q->ch);
    }
    func_0208be50(p);
    p->tag = func_0208695c();
    p->b2f = 1;
    p->b2c = 1;
}
