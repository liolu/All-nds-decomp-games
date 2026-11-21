#include "m2c.h"

void func_ov013_0222c4e8(void);
void func_ov013_02227e04(s32);
void func_ov013_022277d8(s32, s32, s32);
void func_ov013_0223b714(s32);
void func_ov013_02227c48(u16, u16, u16, u16);
void func_ov013_0222b908(void *);
void func_ov013_0222c5d4(void);
extern u8 data_ov013_0224f51c;
extern u16 data_ov013_0224535e[];

void func_ov013_0222c46c(void) {
    s32 i;

    func_ov013_0222c4e8();
    func_ov013_02227e04(0);
    func_ov013_022277d8(0x2E, -1, 0);
    func_ov013_0223b714(4);
    i = data_ov013_0224f51c;
    func_ov013_02227c48(data_ov013_0224535e[i * 4], data_ov013_0224535e[i * 4 + 2], data_ov013_0224535e[i * 4 + 1],
                        data_ov013_0224535e[i * 4 + 3]);
    func_ov013_0222b908(func_ov013_0222c5d4);
}
