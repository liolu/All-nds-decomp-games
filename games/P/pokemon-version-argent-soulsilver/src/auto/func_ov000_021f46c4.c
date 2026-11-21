#include "m2c.h"
char *func_020e987c(char *s, s32 c);
void func_020d4a50(void *src, void *dst, s32 n);
s32 func_ov000_021f46c4(char *dst, char *src, s32 n) {
    char *end = func_020e987c(src, 0);
    char *p;
    s32 len;
    s32 i;
    for (i = 0; i < n; i++) {
        p = func_020e987c(src, '/');
        if (p == 0) {
            return -1;
        }
        src = p + 1;
    }
    p = func_020e987c(src, '/');
    if (p == 0) {
        p = end;
    }
    if (src == p) {
        return -1;
    }
    len = p - src;
    func_020d4a50(src, dst, len);
    dst[len] = 0;
    return len;
}
