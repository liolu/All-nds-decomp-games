#include "m2c.h"

extern u8 data_020f39cc;
typedef struct {
    u16 a;
    u16 b;
    u32 c;
} E8;
extern E8 data_020f3a0c[5];
extern u8 data_020f39f4;
void func_020bc1dc(void);
void func_020b8d4c(void);
s32 func_020b8ea4(s32 a, s32 b);
void func_020b8e58(s32 a, void *cb);
void func_020b5964(void *);

void func_020bc138(void) {
    s32 i;
    if (*(u16 *) &data_020f39cc != 0) {
        return;
    }
    *(u16 *) &data_020f39cc          = 1;
    *(s32 *) (&data_020f39cc + 0x18) = 0;
    *(s32 *) (&data_020f39cc + 0x1C) = 0;
    func_020b8d4c();
    while (!func_020b8ea4(8, 1)) {
    }
    func_020b8e58(8, func_020bc1dc);
    for (i = 0; i < 5; i++) {
        data_020f3a0c[i].a = 0;
    }
    func_020b5964(&data_020f39f4);
    *(s32 *) (&data_020f39cc + 0x10) = *(s32 *) 0x027FFC3C;
}
