#include "m2c.h"
s32 func_02083968(s32 v) {
    u16 ime;
    s32 ie;
    ime                         = *(volatile u16 *) 0x4000208;
    *(volatile u16 *) 0x4000208 = 0;
    ie                          = *(volatile s32 *) 0x4000210;
    *(volatile s32 *) 0x4000210 = v;
    (void) *(volatile u16 *) 0x4000208;
    *(volatile u16 *) 0x4000208 = ime;
    return ie;
}