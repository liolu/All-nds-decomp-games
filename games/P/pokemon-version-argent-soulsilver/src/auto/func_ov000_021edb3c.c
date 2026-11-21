#include "m2c.h"
s32 func_ov000_021fe3f8();
void func_ov000_021ffdf0(void *, s32, void *, s32);
void func_ov000_021ffd70(void *, s32, s32);
void func_ov000_02210d38();
s32 func_ov000_021ec250();
s32 func_ov000_021ecb60();
s32 func_ov000_021ee8d4();
void func_ov000_021ee820(s32);
void func_ov000_021ee81c();
void func_ov000_021ef3e0(s32, s32);
void func_ov000_021ef2cc();
void func_ov000_021ef294();
void func_ov000_021f0048();
void func_ov000_021f1e04(s32);
void func_ov000_021f9aac();
extern u8 *data_ov000_0221a7a4;
extern u8 func_ov000_021eecec;
extern u8 func_ov000_021eecb4;
extern u8 func_ov000_021f0358;
extern u8 func_ov000_021f02b0;

void func_ov000_021edb3c(void) {
    if (func_ov000_021ecb60() != 0) {
        func_ov000_021ee81c();
    }
    if (data_ov000_0221a7a4 == NULL) {
        return;
    }
    if (*(u32 *) (data_ov000_0221a7a4 + 0x24) == 0) {
        return;
    }
    if (func_ov000_021ec250() != 0) {
        return;
    }
    switch (*(u32 *) (data_ov000_0221a7a4 + 0x24)) {
        case 1:
            switch (func_ov000_021fe3f8()) {
                case 1:
                    func_ov000_021ffd70(data_ov000_0221a7a4 + 0x1C, *(s32 *) (data_ov000_0221a7a4 + 0xA0), 0);
                    if (func_ov000_021ee8d4() != 0) {
                        return;
                    }
                    func_ov000_021ffdf0(data_ov000_0221a7a4 + 0x1C, 0, &func_ov000_021eecb4, 0);
                    if (func_ov000_021ee8d4() != 0) {
                        return;
                    }
                    func_ov000_021ffdf0(data_ov000_0221a7a4 + 0x1C, 3, &func_ov000_021eecec, 0);
                    if (func_ov000_021ee8d4() != 0) {
                        return;
                    }
                    func_ov000_021ffdf0(data_ov000_0221a7a4 + 0x1C, 1, &func_ov000_021f02b0, 0);
                    if (func_ov000_021ee8d4() != 0) {
                        return;
                    }
                    func_ov000_021ffdf0(data_ov000_0221a7a4 + 0x1C, 2, &func_ov000_021f0358, 0);
                    if (func_ov000_021ee8d4() != 0) {
                        return;
                    }
                    func_ov000_021ee820(2);
                    func_ov000_021ef294();
                    break;
                case 2:
                    func_ov000_021ef3e0(3, 0xFFFFB172);
                    return;
                case 3:
                    func_ov000_021ef3e0(4, 0xFFFFB17B);
                    return;
            }
            break;
        case 2:
            func_ov000_021ef2cc();
            break;
        case 3:
        case 4:
            func_ov000_021f0048();
            func_ov000_021f1e04(0);
            break;
        case 5:
            func_ov000_021f1e04(1);
            func_ov000_021f0048();
            break;
        case 6:
            func_ov000_021f9aac();
            func_ov000_021f0048();
            if (*(volatile u8 *) (data_ov000_0221a7a4 + 0x389) == 2 || *(volatile u8 *) (data_ov000_0221a7a4 + 0x389) == 3) {
                func_ov000_021f1e04(1);
            } else if (*(s32 *) data_ov000_0221a7a4 != 0) {
                func_ov000_021f1e04(0);
            }
            break;
    }
    if (data_ov000_0221a7a4[0x38C] != 1) {
        return;
    }
    if (*(s32 *) (data_ov000_0221a7a4 + 0x384) != 0) {
        func_ov000_02210d38();
        *(s32 *) (data_ov000_0221a7a4 + 0x384) = 0;
    }
    data_ov000_0221a7a4[0x38C] = 0;
}
