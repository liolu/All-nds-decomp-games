#include "m2c.h"
typedef struct {
    u8 p[0xd];
    u8 n;
    u8 q[0xe6];
    s32 k[0x77];
    u8 v[0x40];
} G;
extern G *func_ov000_021f957c(void);
u8 func_ov000_021f7d0c(s32 key, s32 b) {
    s32 i = (b == 0);
    if (i <= func_ov000_021f957c()->n) {
        do {
            if (key == func_ov000_021f957c()->k[i]) {
                return *(u8 *) ((u8 *) func_ov000_021f957c() + (i + 0x2d0));
            }
            i++;
        } while (i <= func_ov000_021f957c()->n);
    }
    return 0xff;
}
