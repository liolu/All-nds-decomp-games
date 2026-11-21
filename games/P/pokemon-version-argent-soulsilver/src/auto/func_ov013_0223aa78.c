#include "m2c.h"

void func_020d4994(u8 *, int, int);
void func_020d4a50(u8 *, u8 *, int);
int func_020eb82c(u8 *);

void func_ov013_0223aa78(u8 *a, u8 *b) {
    u8 buf[4];
    int i;
    int j;
    int k;
    u8 *p;
    func_020d4994(buf, 0, 4);
    i = 0;
    j = 0;
    do {
        func_020d4a50(a + j, buf, 3);
        k = 0;
        p = buf;
        do {
            if (*p != 0) {
                break;
            }
            k++;
            *p++ = 0x20;
        } while (k < 3);
        b[i] = func_020eb82c(buf);
        i++;
        j += 3;
    } while (i < 4);
}
