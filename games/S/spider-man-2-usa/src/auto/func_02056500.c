/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02056500(s32 arg0) {
    volatile u16 *ime = (volatile u16 *) 0x04000208;
    volatile s32 *reg = (volatile s32 *) 0x4000214;
    u16 saved;
    s32 old;
    saved = *ime;
    *ime  = 0;
    old   = *reg;
    *reg  = arg0;
    (void) *ime;
    *ime = saved;
    return old;
}
