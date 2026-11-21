/* near start: 10 diffs with profile "1.2/sp3 -O2,p" */
/* near start: 13 diffs with profile "1.2/sp3 -O2,p" */
#include "m2c.h"
typedef struct {
    u8 p[0x1b];
    s8 sel;
    u8 page;
} S;
void func_ov013_0223c75c(s32);
void func_ov013_02240e94(void *, void *, void *);
s32 func_ov013_022417fc(void *);
s32 func_ov013_022416b4(s32);
extern u8 data_ov013_02245954[];
extern u8 data_ov013_022458aa[];
extern s8 data_ov013_022458b4[];
extern u8 data_ov013_022458c8[];
extern u8 data_ov013_02245924[];
extern S *data_ov013_0224f5d8;

void func_ov013_0223c360(void) {
    s32 sp0[2];
    s32 i;
    u32 page;
    S *st;
    s32 j;
    s32 n;
    i    = 0;
    page = data_ov013_0224f5d8->page;
    if ((s32) data_ov013_02245954[page] > 0) {
    loop:
        func_ov013_02240e94(data_ov013_02245924 + page * 8 + (data_ov013_022458aa + page * 2)[i] * 4,
                            data_ov013_022458c8 + page * 4, sp0);
        if (func_ov013_022417fc(sp0) != 0) {
            data_ov013_0224f5d8->sel = i;
        } else {
            i++;
            page = data_ov013_0224f5d8->page;
            if (i < data_ov013_02245954[page]) {
                goto loop;
            }
        }
    }
    if (func_ov013_022416b4(1) != 0) {
        data_ov013_0224f5d8->sel = data_ov013_022458b4[data_ov013_0224f5d8->page * 2];
    }
    if (func_ov013_022416b4(2) != 0) {
        data_ov013_0224f5d8->sel = (data_ov013_022458b4 + 1)[data_ov013_0224f5d8->page * 2];
    }
    st = data_ov013_0224f5d8;
    j  = 0;
    n  = data_ov013_02245954[st->page];
    if (n > 0) {
        do {
            if (j == st->sel) {
                func_ov013_0223c75c(j);
                return;
            }
            j++;
        } while (j < data_ov013_02245954[st->page]);
    }
    st->sel = -1;
}
