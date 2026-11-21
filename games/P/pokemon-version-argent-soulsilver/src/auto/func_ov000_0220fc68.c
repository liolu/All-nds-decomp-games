#include "m2c.h"
extern int func_ov000_021ffa38(void *, void *, int *);
unsigned short func_ov000_0220fc68(void *a) {
    unsigned short b[4];
    int n = 8;
    if (func_ov000_021ffa38(a, b, &n) == -1) {
        return 0;
    }
    return b[1];
}