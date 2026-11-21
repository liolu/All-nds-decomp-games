#include "m2c.h"

typedef struct S {
    u8 pad[0xD0B];
    u8 lo : 4;
    u8 hi : 4;
    u8 pad2[6];
    u8 b12;
    u8 pad3[3];
    u16 h16;
} S;
s32 func_ov000_021fbf44(s32);
s32 func_ov000_021fcb74(S *);
s32 func_ov000_021fc75c(S *);
void func_ov000_021fc588(s32);

s32 func_ov000_021fc9ec(S *arg0, s32 arg1) {
    s32 state = arg1;
    switch (state) {
        case 3:
            if (arg0->b12 != 0 || arg0->h16 != 0) {
                if (func_ov000_021fbf44(1) != 0) {
                    state = 4;
                } else {
                    state = func_ov000_021fcb74(arg0);
                }
            } else {
                if (arg0->hi >= 1) {
                    state = 6;
                } else {
                    state = func_ov000_021fc75c(arg0);
                }
            }
            break;
        case 4:
            state = func_ov000_021fcb74(arg0);
            break;
        case 5:
            if (arg0->hi >= 1) {
                state = 6;
            } else {
                state = func_ov000_021fc75c(arg0);
            }
            break;
    }
    func_ov000_021fc588(state);
    return state;
}
