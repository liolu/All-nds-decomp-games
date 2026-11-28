/* compiler: 1.2/sp3 */
/* near start: 14 diffs with profile "1.2/sp3" */
/* near start: 21 diffs with profile "1.2/sp3" */
#include "m2c.h"

s8 func_ov123_0208d1e4(u8);

void func_ov123_0208d114(u8 *arg0, s32 arg1, s8 *arg2) {
    u8 in[3];
    u8 out[4];
    s32 n = 0;
    s32 i;
    u8 *p;
    u8 *q;
    s32 j;
    s32 z = 0;
    u8 a;
    u8 b;
    u8 c;
    if (arg1 > 0) {
        do {
            i = 0;
            p = in;
            do {
                if (n < arg1) {
                    *p = *arg0++;
                } else {
                    *p = z;
                }
                i++;
                n++;
                p++;
            } while (i <= 2);
            a      = in[0];
            b      = in[1];
            c      = in[2];
            out[0] = a >> 2;
            out[1] = ((a & 3) << 4) + (b >> 4);
            out[2] = ((b & 0xF) << 2) + (c >> 6);
            out[3] = c & 0x3F;
            j      = z;
            q      = out;
            do {
                *arg2 = func_ov123_0208d1e4(*q);
                arg2++;
                j++;
                q++;
            } while (j <= 3);
        } while (n < arg1);
    }
    *arg2 = 0;
}
