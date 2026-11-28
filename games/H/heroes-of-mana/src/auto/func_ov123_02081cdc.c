/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct P {
    s32 k;
    u8 pad[0x18];
    s32 r;
} P;
extern u8 data_ov123_020daaa0[];
extern u8 data_ov123_020daae8[];
extern u8 data_ov123_020daaec[];
s32 func_ov123_0207eac0(s32, void *, s32);
s32 func_ov123_02081048(s32, void *, s32);
s32 func_ov123_0208389c(s32, void *, s32);
s32 func_ov123_02085f74(s32, void *, s32);
void func_ov123_0208655c(s32, void *, s32);
void func_02020d04(void *, void *, s32, s32);

s32 func_ov123_02081cdc(s32 a, P *p, s32 c) {
    u32 t = p->k;
    s32 r = 0;
    switch (t) {
        case 0:
            r = func_ov123_0207eac0(a, p, c);
            break;
        case 1:
            r = func_ov123_0208389c(a, p, c);
            break;
        case 2:
            r = func_ov123_02081048(a, p, c);
            break;
        case 4:
            r = func_ov123_02085f74(a, p, c);
            break;
        default:
            func_ov123_0208655c(a, data_ov123_020daaa0, t);
            func_02020d04(data_ov123_020daae8, data_ov123_020daaec, 0, 0x146);
            break;
    }
    if (r != 0) {
        p->r = r;
    }
    return r;
}
