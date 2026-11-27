#include "m2c.h"

void func_020d519c(s32, s32, s32, s32);
void func_020d57d4(s32);
void func_020d5990(s32);
s32 func_020d59fc(void);
extern s32 data_021e0334[];
extern s32 data_021e037c[];

void func_020c921c(void) {
    s32 t;
    s32 r2;
    s32 *p = data_021e037c;
    if (data_021e0334[18] == 0) {
        return;
    }
    if (p[11] >= 0) {
        r2 = 1 << p[11];
    } else {
        r2 = 0;
    }
    func_020d519c(p[9], p[10], r2, 0);
    t = func_020d59fc();
    func_020d57d4(1);
    func_020d5990(t);
}
