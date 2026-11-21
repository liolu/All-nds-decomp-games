#include "m2c.h"
typedef struct {
    s32 a, b, c;
} T3;
extern T3 data_ov013_022457a4;
u8 func_ov013_022403b4(s32);
void func_ov013_0222b968(s32, s32 *);
void func_ov013_0223be8c(s32, s32, s32, s32, s32);
void func_ov013_0222b908(void (*)(void));
void func_ov013_02238600(void);
void func_ov013_02238578(void) {
    s32 idx;
    T3 tbl;
    tbl = data_ov013_022457a4;
    if (func_ov013_022403b4(1) != 0) {
        return;
    }
    if (func_ov013_022403b4(0) != 0) {
        return;
    }
    func_ov013_0222b968(0, &idx);
    func_ov013_0223be8c(((s32 *) &tbl)[idx], 1, 1, -1, 0);
    func_ov013_0222b908(func_ov013_02238600);
}
