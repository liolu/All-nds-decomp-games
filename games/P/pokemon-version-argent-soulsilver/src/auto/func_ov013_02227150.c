#include "m2c.h"

typedef struct {
    s32 slot[4];
    u8 p[6];
    s8 b16;
    u8 b17;
} G;

extern u8 data_ov013_02244f00[];
extern u8 data_ov013_02244ee4[];
extern G *data_ov013_0224f488;
G *func_ov013_022412ac(s32, s32);
s32 func_ov013_022401d0(s32, s32, s32);
void func_ov013_02240028(s32, s32, s32);
void func_ov013_0222731c(s32);
s32 func_ov013_02242548(s32, void *, s32, s32);
extern u8 func_ov013_022273b0;

void func_ov013_02227150(s32 a0) {
    s32 cnt = data_ov013_02244f00[a0];
    s32 i;
    u8 *p;
    data_ov013_0224f488      = func_ov013_022412ac(0x1C, 4);
    data_ov013_0224f488->b16 = -2;
    data_ov013_0224f488->b17 = a0;
    i                        = 0;
    if (cnt > 0) {
        p = data_ov013_02244ee4 + a0 * 2;
        do {
            data_ov013_0224f488->slot[i] = func_ov013_022401d0(0, *p, 1);
            func_ov013_02240028(data_ov013_0224f488->slot[i], -1, 1);
            i++;
            p++;
        } while (i < cnt);
    }
    data_ov013_0224f488->slot[2] = func_ov013_022401d0(0, 1, 1);
    func_ov013_02240028(data_ov013_0224f488->slot[2], -1, 1);
    func_ov013_0222731c(0xC0);
    data_ov013_0224f488->slot[3] = func_ov013_02242548(0, &func_ov013_022273b0, 0, 0x78);
}
