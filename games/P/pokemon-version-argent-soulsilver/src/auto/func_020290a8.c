/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

typedef struct Sub {
    u8 flags;
} Sub;

void func_020290a8(u8 *arg0) {
    Sub *s   = (Sub *) (arg0 + 29);
    s->flags = (u8) (s->flags | 0x2);
}
