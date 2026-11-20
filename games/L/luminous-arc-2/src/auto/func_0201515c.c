#include "m2c.h"
typedef struct {
    u8 pad[0x4b4];
    u8 f4b4;
    u8 pad2[7];
    u32 f4bc;
} Inner;
typedef struct {
    u8 pad[0x18];
    Inner *cur;
    Inner *sel;
    u8 pad2[4];
    u8 state;
    u8 pad3;
    u8 f26;
} MbSt;
extern MbSt data_0214ade0;
extern u8 data_0214ae20;
s32 func_020172b4(void);
u16 func_020172c8(void);
s32 func_02012aa4(void *a, s32 b, u32 c, s32 d, u16 e, u8 f);
void func_020150ac(void);
s32 func_0201515c(void) {
    Inner *n;
    if (*(u32 *) ((u8 *) &data_0214ade0 + 0x18) == 0) {
        s32 g = func_020172b4();
        u16 t = func_020172c8();
        func_02012aa4(0, (s32) &data_0214ae20, 0x70, g, t, 8);
        return 0;
    }
    if (data_0214ade0.sel == 0 || (n = (Inner *) data_0214ade0.sel->f4bc) == 0) {
        n = data_0214ade0.cur;
    }
    data_0214ade0.sel = n;
    func_020150ac();
    data_0214ade0.f26   = data_0214ade0.sel->f4b4;
    data_0214ade0.state = 2;
    return 1;
}
