#include "m2c.h"
typedef struct {
    u8 a;
    u8 b;
    u8 c[6];
} B;
extern s32 func_020a2ed8(s32 o, B *b);
extern s32 func_ov000_021ff80c(s32 o, s32 k);
s32 func_ov000_021ff860(s32 o, B *src, u8 v) {
    B b;
    if (*(u16 *) ((u8 *) src + 2) == 0) {
        return 0;
    }
    b   = *src;
    b.a = v;
    return func_ov000_021ff80c(func_020a2ed8(o, &b), -1);
}
