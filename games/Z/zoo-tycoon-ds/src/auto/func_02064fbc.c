/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u32 _ZN18SolidHeapAllocator10MemoryLeftEi(s32, M2C_UNK);                    /* extern */

s32 func_02064fbc(s32 *arg0) {
    u32 temp_r0;

    temp_r0 = _ZN18SolidHeapAllocator10MemoryLeftEi(*arg0, 0x20);
    if (temp_r0 < 0x20U) {
        return 0;
    }
    return (temp_r0 - 0x20) & ~0x1F;
}
