#include "m2c.h"
typedef struct {
    u8 pad[0x63];
    s8 cur;
    s8 prev;
} St;
extern void func_ov013_0222ae44(void);
extern void func_ov013_0223abd8(s32);
extern s8 data_ov013_022452fa[][4];
extern St *data_ov013_0224f4e0;
void func_ov013_0222aed0(s32 arg0) {
    s8 old;
    s32 v;
    St *p;
    old                      = data_ov013_0224f4e0->cur;
    data_ov013_0224f4e0->cur = data_ov013_022452fa[old][arg0];
    p                        = data_ov013_0224f4e0;
    v                        = p->cur;
    if (v == 13 && (arg0 == 1 || arg0 == 3)) {
        p->prev = old;
    } else if (v == -1) {
        if (p->prev == 1 || p->prev == 10) {
            p->cur = 10;
        } else {
            p->cur = 11;
        }
    } else if (v == -2) {
        if (p->prev == 1 || p->prev == 10) {
            p->cur = 1;
        } else {
            p->cur = 2;
        }
    }
    func_ov013_0222ae44();
    func_ov013_0223abd8(8);
}
