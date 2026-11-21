#include "m2c.h"
typedef struct {
    s32 f0, f4, f8, fc, f10, f14;
    u8 f18;
} S;
void func_020d3f48(void);
u8 func_ov013_0222b9e8(void);
s32 func_ov013_0222bafc(s32, s32);
s32 func_ov013_0223ea78(void);
void func_ov013_0223e82c(void *, S *);
u8 *func_ov013_022412ac(s32, s32);
s32 func_ov013_02242548(s32, void *, s32, s32);
extern S data_ov013_02245fac;
extern u8 *data_ov013_0224f510;
extern s32 data_ov013_0224f518;
extern u8 func_ov013_0222bce0;
void func_ov013_0222bb40(s32 arg0) {
    S s;
    u8 *r;

    r                            = func_ov013_022412ac(0x1E2A4, 0x20);
    data_ov013_0224f510          = r;
    *(s32 *) (r + 0x1E298)       = arg0;
    data_ov013_0224f510[0x1E2A0] = 0;
    data_ov013_0224f510[0x1E2A1] = 0;
    s                            = data_ov013_02245fac;
    s.f4                         = func_ov013_0222bafc(data_ov013_0224f518, 0);
    s.f8                         = func_ov013_0222bafc(data_ov013_0224f518, 1);
    s.f18                        = func_ov013_0222b9e8();
    func_ov013_0223e82c(data_ov013_0224f510, &s);
    if (func_ov013_0223ea78() == 0) {
        func_020d3f48();
    }
    *(s32 *) (data_ov013_0224f510 + 0x1E29C) = func_ov013_02242548(0, &func_ov013_0222bce0, 0, 0x78);
}
