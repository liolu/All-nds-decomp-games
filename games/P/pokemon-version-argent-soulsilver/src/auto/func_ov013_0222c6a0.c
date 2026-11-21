#include "m2c.h"
typedef struct {
    u16 a, b, c, d;
} Rec;
extern Rec data_ov013_0224534e[];
extern u8 data_ov013_0224f51c;
extern u16 data_ov013_0224535e[][4];
extern u16 data_ov013_02245362[][4];
extern u16 data_ov013_02245360[][4];
extern u16 data_ov013_02245364[][4];
s32 func_ov013_022417fc(void *);
void func_ov013_0222728c(s8);
void func_ov013_02227c48(s32, s32, s32, s32);
s32 func_ov013_022416b4(s32);
s32 func_ov013_022416f4(s32);
void func_ov013_0222c934(s32);
void func_ov013_0222c6a0(void) {
    u32 i;
    for (i = 0; i < 2; i++) {
        if (func_ov013_022417fc(&data_ov013_0224534e[i]) != 0) {
            func_ov013_0222728c(1);
            data_ov013_0224f51c = i;
            func_ov013_02227c48(data_ov013_0224535e[data_ov013_0224f51c][0], data_ov013_02245362[data_ov013_0224f51c][0],
                                data_ov013_02245360[data_ov013_0224f51c][0], data_ov013_02245364[data_ov013_0224f51c][0]);
            return;
        }
    }
    if (func_ov013_022416b4(1) != 0) {
        func_ov013_0222728c(1);
        return;
    }
    if (func_ov013_022416b4(2) != 0) {
        func_ov013_0222728c(0);
        return;
    }
    if (func_ov013_022416f4(0x40) != 0) {
        func_ov013_0222c934(1);
        return;
    }
    if (func_ov013_022416f4(0x80) != 0) {
        func_ov013_0222c934(3);
        return;
    }
    if (func_ov013_022416f4(0x20) != 0) {
        func_ov013_0222c934(0);
        return;
    }
    if (func_ov013_022416f4(0x10) != 0) {
        func_ov013_0222c934(2);
    }
}
