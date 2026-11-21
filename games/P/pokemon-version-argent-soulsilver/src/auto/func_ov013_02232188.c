#include "m2c.h"

typedef struct D {
    u8 pad[8];
    u8 tab[0x0c];
    u8 idx;
} D;
extern D *data_ov013_0224f564;
void func_020d4a50(void *, void *, s32);
s32 func_020eb82c(void *);

s32 func_ov013_02232188(s32 a) {
    u8 buf[4];
    s32 i;
    u8 *q;
    u8 *e = data_ov013_0224f564->tab + data_ov013_0224f564->idx * 3;
    if (e[0] != 0 && e[0] != 0x20) {
        return 1;
    }
    func_020d4a50(e, buf, 3);
    buf[3] = 0;
    i      = 0;
    q      = buf;
    do {
        if (*q != 0) {
            break;
        }
        i++;
        *q++ = 0x20;
    } while (i < 3);
    return func_020eb82c(buf) >= a;
}
