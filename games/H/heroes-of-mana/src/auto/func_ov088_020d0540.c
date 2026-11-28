/* compiler: 2.0/sp1p5 -flag no-opt_dead_assignments */
/* near start: 4 diffs with profile "2.0/sp1p5" */
#include "m2c.h"

typedef struct {
    s32 w[8];
} Arr8;
extern Arr8 data_ov088_020d1890;
extern Arr8 data_ov088_020d1870;
s32 CalRnd(void);
void GettingItemOneForFree(s32);

void func_ov088_020d0540(s32 *a, s32 *b, s32 *c) {
    Arr8 x = data_ov088_020d1890;
    Arr8 y = data_ov088_020d1870;
    s32 i;
    for (i = 0; i < 8; i++) {
        s32 j  = CalRnd() % 8;
        s32 t  = x.w[i];
        s32 xj = x.w[j];
        s32 u  = y.w[i];
        s32 yj = y.w[j];
        x.w[i] = xj;
        y.w[i] = yj;
        x.w[j] = t;
        y.w[j] = u;
    }
    GettingItemOneForFree(x.w[0]);
    GettingItemOneForFree(x.w[1]);
    GettingItemOneForFree(x.w[2]);
    *a = y.w[0];
    *b = y.w[1];
    *c = y.w[2];
}
