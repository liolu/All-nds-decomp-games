#include "m2c.h"
typedef struct {
    u8 len;
    u8 family;
    u16 port;
    s32 addr;
} SA;
typedef struct {
    u8 pad[0xc];
    s32 **list;
} H;
extern char data_ov000_02219f00[];
s32 func_ov000_021ffa64(char *);
s32 func_020e9734(char *, char *);
H *func_020a30d4(char *);
s32 func_ov000_02210eec(char *host, s32 port0, SA *sa, H **out) {
    H *h       = 0;
    u16 port   = port0;
    sa->family = 2;
    sa->port   = (u16) (((port >> 8) & 0xff) | ((port << 8) & 0xff00));
    if (host == 0) {
        sa->addr = 0;
    } else {
        sa->addr = func_ov000_021ffa64(host);
    }
    if (sa->addr == -1) {
        if (func_020e9734(host, data_ov000_02219f00) != 0) {
            h = func_020a30d4(host);
            if (h == 0) {
                return 0;
            }
            sa->addr = **h->list;
        }
    }
    if (out != 0) {
        *out = h;
    }
    return 1;
}
