#include "m2c.h"
s32 func_ov000_021fe704(s32 *);
s32 func_ov000_021fe70c(void *, s32);
void func_ov000_02213f78(void *, s32);
void func_ov000_021fe698(void *);
void func_ov000_022148c4(u8 *p) {
    s32 i;
    if (*(void **) (p + 8) == 0) {
        return;
    }
    for (i = 0; i < func_ov000_021fe704(*(s32 **) (p + 8)); i++) {
        s32 *e = (s32 *) func_ov000_021fe70c(*(void **) (p + 8), i);
        func_ov000_02213f78(p, *e);
    }
    func_ov000_021fe698(*(void **) (p + 8));
    *(void **) (p + 8) = 0;
}
