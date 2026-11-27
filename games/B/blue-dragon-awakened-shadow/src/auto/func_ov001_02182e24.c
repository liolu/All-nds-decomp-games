/* near start: 10 diffs with profile "1.2/sp3 -O2,p" */
/* near start: 13 diffs with profile "1.2/sp3 -O2,p" */
#include "m2c.h"
typedef struct {
    u8 p[0x1b];
    s8 sel;
    u8 page;
} S;
void func_ov001_02183220(s32);
void func_ov001_02187958(void *, void *, void *);
s32 func_ov001_021882c0(void *);
s32 func_ov001_02188178(s32);
extern u8 data_ov001_02192fd0[];
extern u8 data_ov001_02192f26[];
extern s8 data_ov001_02192f30[];
extern u8 data_ov001_02192f44[];
extern u8 data_ov001_02192fa0[];
extern S *data_ov001_02196c5c;

void func_ov001_02182e24(void) {
    s32 sp0[2];
    s32 i;
    u32 page;
    S *st;
    s32 j;
    s32 n;
    i    = 0;
    page = data_ov001_02196c5c->page;
    if ((s32) data_ov001_02192fd0[page] > 0) {
    loop:
        func_ov001_02187958(data_ov001_02192fa0 + page * 8 + (data_ov001_02192f26 + page * 2)[i] * 4,
                            data_ov001_02192f44 + page * 4, sp0);
        if (func_ov001_021882c0(sp0) != 0) {
            data_ov001_02196c5c->sel = i;
        } else {
            i++;
            page = data_ov001_02196c5c->page;
            if (i < data_ov001_02192fd0[page]) {
                goto loop;
            }
        }
    }
    if (func_ov001_02188178(1) != 0) {
        data_ov001_02196c5c->sel = data_ov001_02192f30[data_ov001_02196c5c->page * 2];
    }
    if (func_ov001_02188178(2) != 0) {
        data_ov001_02196c5c->sel = (data_ov001_02192f30 + 1)[data_ov001_02196c5c->page * 2];
    }
    st = data_ov001_02196c5c;
    j  = 0;
    n  = data_ov001_02192fd0[st->page];
    if (n > 0) {
        do {
            if (j == st->sel) {
                func_ov001_02183220(j);
                return;
            }
            j++;
        } while (j < data_ov001_02192fd0[st->page]);
    }
    st->sel = -1;
}
