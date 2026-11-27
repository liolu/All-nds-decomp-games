#include "m2c.h"
typedef struct {
    u8 pad[0x1c];
    u32 a;
    u32 b;
} PmData;
extern PmData data_020f39cc;
s32 func_020bc074(void);
void func_020bc67c(u32 d);
u32 func_020bc338(u32 p1, u32 p2, u32 p3) {
    if (func_020bc074() == 0) {
        return 1;
    }
    data_020f39cc.a = p2;
    data_020f39cc.b = p3;
    func_020bc67c(((p1 >> 16) & 0xff) | 0x2006300);
    func_020bc67c(0x1010000 | (p1 & 0xffff));
    return 0;
}
