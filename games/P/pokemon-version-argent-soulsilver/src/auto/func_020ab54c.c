/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 pad[0x824];
    s32 f824;
    s32 f828;
    s32 f82c;
} Ctx;
typedef struct {
    u8 pad[0xc];
    Ctx *ctx;
} Hd;
extern void (*data_021d4680)(s32);
void func_020ab54c(u32 n, Hd *h) {
    Ctx *c;
    c = h->ctx;
    if (n >= (u32) (c->f828 - c->f82c)) {
        if (c->f824 != 0) {
            data_021d4680(c->f824);
        }
        c->f824 = 0;
    } else {
        c->f82c += n;
    }
}
