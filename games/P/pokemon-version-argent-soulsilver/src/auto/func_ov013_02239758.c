#include "m2c.h"

typedef struct Pt {
    u16 x;
    u16 y;
} Pt;
typedef struct O {
    u8 pad[0x10];
    u16 h10;
    u8 pad2[4];
    u16 h16;
    u8 b18;
    u8 b19;
    u8 b1a;
    u8 b1b;
    u8 b1c;
    u8 b1d;
} O;
void func_ov013_02239ae4(s32);
void func_ov013_02239828(s32);
void func_ov013_0223ac40(void);
void func_ov013_022419fc(Pt *);
s32 func_ov013_02241774(void *);
extern u8 data_ov013_022457b4[];
extern u8 data_ov013_02245978[];
extern O *data_ov013_0224f5bc;

void func_ov013_02239758(void) {
    Pt sp;
    s32 r4;
    if (func_ov013_02241774(data_ov013_02245978) != 0) {
        func_ov013_022419fc(&sp);
        if (sp.x >= data_ov013_0224f5bc->h10 - 0x1E) {
            r4 = data_ov013_0224f5bc->b18 + (sp.y - data_ov013_0224f5bc->h16);
            if (r4 < 0) {
                r4 = 0;
            } else {
                s32 t = data_ov013_0224f5bc->b19 - data_ov013_022457b4[data_ov013_0224f5bc->b1b];
                if (r4 >= t) {
                    r4 = t;
                }
            }
            func_ov013_02239828(r4);
            func_ov013_02239ae4(r4);
            data_ov013_0224f5bc->b1d = 2;
            return;
        }
    }
    func_ov013_0223ac40();
    data_ov013_0224f5bc->b1c = 0;
    data_ov013_0224f5bc->b1d = 3;
}
