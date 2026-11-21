#include "m2c.h"
typedef struct {
    u8 pad[0x348];
    s32 n;
    s32 a;
    u8 pad2[0];
} T;
typedef struct {
    u8 pad[0x348];
    s32 n;
    s32 v;
} X;
extern X *func_ov000_021f957c(void);
void func_020d4808(void *, void *, s32);
void func_ov000_021f5b00(s32 a, s32 *p) {
    u32 n = p[0] + 2;
    if (n > 2) {
        func_020d4808(p + 1, (u8 *) func_ov000_021f957c() + 0x350, (n - 2) * 4);
    }
    func_ov000_021f957c()->n = n - 1;
    func_ov000_021f957c()->v = a;
}
