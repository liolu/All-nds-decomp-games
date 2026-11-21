#include "m2c.h"
extern u8 data_ov013_0224f558;
extern u8 data_ov013_02245444[];
extern u8 data_ov013_02245448[];
extern u8 data_ov013_02245446[];
extern void func_ov013_02227b8c(s32 a, s32 b, s32 c, s32 d);
void func_ov013_02230ce4(void) {
    u32 i = data_ov013_0224f558;
    s32 k = (i < 4) ? 2 : 3;
    func_ov013_02227b8c(k, *(u16 *) (data_ov013_02245444 + i * 8), *(u16 *) (data_ov013_02245448 + i * 8),
                        *(u16 *) (data_ov013_02245446 + i * 8));
}
