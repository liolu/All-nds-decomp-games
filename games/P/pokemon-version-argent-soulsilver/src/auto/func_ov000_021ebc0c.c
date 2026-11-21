#include "m2c.h"

extern void *data_ov000_0221a768;
extern u8 data_ov000_02216b84;
extern u8 data_ov000_02216b8c;
extern u8 data_ov000_02216b98;
extern u8 data_ov000_02216ba4;
extern u8 data_ov000_02216bac;
extern u8 data_ov000_02216bbc;
extern s32 data_021e58e0;

s32 func_ov000_021e9f4c(void *a, s32 b);
void func_ov000_021ec26c(s32 a, s32 b);
s32 func_ov000_021ea1ec(void *a, void *b);
void func_ov000_021eb5d0(void);
s32 func_020eb82c(void *s);
s32 func_ov000_021ea244(void *a, void *b, void *c, s32 d);

s32 func_ov000_021ebc0c(void) {
    u8 *r4;
    signed char sp0;
    s32 r2;
    s32 ok;

    r4 = (u8 *) data_ov000_0221a768 + 8;
    if (func_ov000_021e9f4c(r4, 0) == 0) {
        func_ov000_021ec26c(0x10, 0xFFFF9DF3);
        return 0;
    }
    if (func_ov000_021ea1ec(r4, &data_ov000_02216b84) != 0) {
        func_ov000_021eb5d0();
    }
    ok = func_ov000_021ea1ec(r4, &data_ov000_02216b8c);
    if (ok == 0) {
        func_ov000_021ec26c(0x10, 0xFFFF9DF3);
        return 0;
    }
    r2 = func_020eb82c((void *) ok);
    if (data_021e58e0 == 0x22) {
        func_ov000_021ec26c(0x10, 0xFFFF9DF3);
        return 0;
    }
    if (r2 != 0xC8) {
        func_ov000_021ec26c(0x10, (s32) 0xFFFF9E58 - r2);
        return 0;
    }
    if (func_ov000_021ea244(r4, &data_ov000_02216b98, &sp0, 4) <= 0) {
        func_ov000_021ec26c(0x10, 0xFFFF9DF3);
        return 0;
    }
    r2 = func_020eb82c(&sp0);
    if (data_021e58e0 == 0x22) {
        func_ov000_021ec26c(0x10, 0xFFFF9DF3);
        return 0;
    }
    if (r2 >= 0x64) {
        func_ov000_021ec26c(0x10, (s32) 0xFFFFA240 - r2);
        return 0;
    }
    func_ov000_021ea244(r4, &data_ov000_02216ba4, *(u8 **) ((u8 *) data_ov000_0221a768 + 0x1C1C) + 4, 0x40);
    func_ov000_021ea244(r4, &data_ov000_02216bac, *(u8 **) ((u8 *) data_ov000_0221a768 + 0x1C1C) + 0x45, 0x12C);
    func_ov000_021ea244(r4, &data_ov000_02216bbc, &sp0, 1);
    if (sp0 == 0x59) {
        *(s32 *) *(u8 **) ((u8 *) data_ov000_0221a768 + 0x1C1C) = 1;
    } else {
        *(s32 *) *(u8 **) ((u8 *) data_ov000_0221a768 + 0x1C1C) = 0;
    }
    return 1;
}
