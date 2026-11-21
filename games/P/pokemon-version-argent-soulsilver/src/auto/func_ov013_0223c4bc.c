#include "m2c.h"
typedef struct {
    u8 pad[0x14];
    s32 h;
    u16 cnt;
    u8 pad2;
    s8 f;
} S;
extern S *data_ov013_0224f5d8;
void func_ov013_022425f0(s32, s32);
s32 func_ov013_02242548(s32, s32, s32, s32);
void func_ov013_0223c81c(void);
void func_ov013_0223c4bc(s32 a) {
    data_ov013_0224f5d8->f = -1;
    data_ov013_0224f5d8->cnt++;
    if (data_ov013_0224f5d8->cnt >= 0x78) {
        func_ov013_022425f0(0, a);
        data_ov013_0224f5d8->h = func_ov013_02242548(1, (s32) func_ov013_0223c81c, 0, 0x78);
    }
}
