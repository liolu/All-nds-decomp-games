#include "m2c.h"

s32 func_ov000_021fbc98(void);
void func_ov000_021ea538(void);
void func_ov000_021ea440(void);
s32 func_ov000_021fbd28(void);

s32 func_ov000_021fbc10(u8 *p) {
    s32 r;

    if (p[0] <= 10) {
        r = func_ov000_021fbc98();
        if (r == 1) {
            p[0] = 0;
            return 1;
        }
        if (r == -1) {
            p[0] = 18;
            return 1;
        }
    } else {
        if (p[0] == 14) {
            func_ov000_021ea538();
            func_ov000_021ea440();
            p[0] = 12;
        } else if (p[0] < 18) {
            r = func_ov000_021fbd28();
            if (r == 1) {
                p[0] = 10;
            }
        }
    }
    return 0;
}
