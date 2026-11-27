/* Reconstructed from USA ARM9 at 0x02062ae4 (44 bytes).
 * Names and types are inferred from the binary.
 */
#include "m2c.h"

s32 func_020948cc();

u32 func_020945e0(s32 arg0) {
    u32 t = func_020948cc() & 0x7FFF;
    return (t * (arg0 + 1) * 2) >> 0x10;
}
