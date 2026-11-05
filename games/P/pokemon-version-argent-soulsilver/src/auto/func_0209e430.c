#include "m2c.h"

typedef struct S5a {
    s64 a;
    s64 b;
    u16 c;
    u16 d;
} S5a;

extern u8 data_021d43f4;
extern u8 data_021d43f9;
extern u8 data_021d43fe;
extern u8 data_021d4400;
void func_020d4a50(void *, void *, s32);

void func_0209e430(S5a *arg0) {
    s64 *p;
    func_020d4a50(&data_021d43f4, arg0, 6);
    arg0->a &= 0x7FFFFFFFFFFLL;
    p = &arg0->b;
    func_020d4a50(&data_021d43f9, p, 6);
    *p = (u64) *p >> 3;
    *p &= 0x7FFFFFFFFFFLL;
    func_020d4a50(&data_021d43fe, &arg0->c, 2);
    arg0->c = (s32) arg0->c >> 6;
    arg0->c &= 0x3FF;
    func_020d4a50(&data_021d4400, &arg0->d, 2);
}
