/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 *p;
    s8 bits;
    u8 cur;
} R;
u32 func_ov123_0206b264(R *c, s32 n) {
    s32 b   = c->bits;
    u32 cur = c->cur;
    u32 r;
    if (b < n) {
        u8 *p   = c->p;
        c->p    = p + 1;
        r       = cur << (n - b);
        c->cur  = *p;
        c->bits = 8;
        r |= func_ov123_0206b264(c, n - b);
    } else {
        r       = cur >> (b - n);
        c->bits = b - n;
    }
    return r & (0xff >> (8 - n));
}
