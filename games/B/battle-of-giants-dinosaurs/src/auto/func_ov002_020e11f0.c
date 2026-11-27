/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef void (*FP1)(void *);
void func_ov002_020e11f0(u8 *o) {
    FP1 fn = *(FP1 *) (o + 0xAC);
    fn(o);
}
