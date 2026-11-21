#include "m2c.h"
extern void func_020d4a50(void *, void *, int);
extern int func_020e5bb0(void *, void *, int);
extern char data_ov000_02217ba8;
unsigned short func_ov000_021f994c(void *a) {
    unsigned short s[4];
    func_020d4a50(a, s, 8);
    if (func_020e5bb0(&s[3], &data_ov000_02217ba8, 2) == 0) {
        return s[2];
    }
    return 0;
}