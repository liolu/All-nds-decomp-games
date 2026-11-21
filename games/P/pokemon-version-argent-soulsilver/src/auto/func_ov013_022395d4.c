#include "m2c.h"

typedef struct {
    u8 pad[0x14];
    u8 f14;
    u8 pad1[3];
    u8 b18;
    u8 pad2;
    u8 b1a;
    u8 b1b;
    u8 state;
    u8 out;
    u8 b1e;
} G;

extern G *data_ov013_0224f5bc;
s32 func_ov013_02239934(void);
s32 func_ov013_022399c0(s32);
void func_ov013_0223abd8(s32);
void func_ov013_0223abfc(s32);
void func_ov013_022419fc(void *);
void func_ov013_022398a0(s32);
void func_ov013_022398cc(void);
void func_ov013_02239758(void);

void func_ov013_022395d4(void) {
    data_ov013_0224f5bc->out = 0;
    switch (data_ov013_0224f5bc->state) {
        case 0:
            if (data_ov013_0224f5bc->b1e != 0) {
                return;
            }
            switch (func_ov013_02239934()) {
                case 1:
                    if (data_ov013_0224f5bc->b1b == 0) {
                        return;
                    }
                    func_ov013_0223abd8(0x16);
                    func_ov013_0223abfc(0);
                    data_ov013_0224f5bc->out = 1;
                    func_ov013_022419fc(&data_ov013_0224f5bc->f14);
                    data_ov013_0224f5bc->b18   = data_ov013_0224f5bc->b1a;
                    data_ov013_0224f5bc->state = 1;
                    return;
                case 2:
                    func_ov013_022398a0(2);
                    return;
                case 3:
                    func_ov013_022398a0(3);
                    return;
                case 4:
                    func_ov013_022398cc();
                    return;
            }
            break;
        case 1:
            func_ov013_02239758();
            return;
        case 2:
            if (func_ov013_022399c0(2) != 2) {
                data_ov013_0224f5bc->out   = 5;
                data_ov013_0224f5bc->state = 0;
                return;
            }
            if (func_ov013_02239934() != 2) {
                return;
            }
            func_ov013_022398a0(2);
            return;
        case 3:
            if (func_ov013_022399c0(3) != 3) {
                data_ov013_0224f5bc->out   = 7;
                data_ov013_0224f5bc->state = 0;
                return;
            }
            if (func_ov013_02239934() != 3) {
                return;
            }
            func_ov013_022398a0(3);
            break;
    }
}
