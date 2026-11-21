/* near start: 10 diffs with profile "1.2/sp3" */
#include "m2c.h"
s32 func_020d1204(s32);
void _Z24EnableSpecificInterruptsj(s32);
typedef struct N {
    struct N *next;
    struct N *prev;
} N;
void func_ov013_02241c00(N *arg0) {
    s32 old          = func_020d1204(1);
    arg0->next->prev = arg0->prev;
    arg0->prev->next = arg0->next;
    arg0->prev       = 0;
    arg0->next       = arg0->prev;
    _Z24EnableSpecificInterruptsj(old);
}
