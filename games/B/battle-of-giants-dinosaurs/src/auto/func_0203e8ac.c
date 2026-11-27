/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

void func_0203e8fc(s32);
extern u8 data_020c25c8[];
extern u8 data_020c25cc[];
extern u8 data_020c25d0[];

void func_0203e8ac(s32 arg0, s32 arg1, s32 arg2) {
    s32 t;
    s32 sh;

    t                            = arg0 * 12;
    sh                           = 1 << (arg0 + 3);
    *(s32 *) (data_020c25c8 + t) = arg1;
    *(s32 *) (data_020c25d0 + t) = arg2;
    func_0203e8fc(sh);
    *(s32 *) (data_020c25cc + t) = 1;
}
