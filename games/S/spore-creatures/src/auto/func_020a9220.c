/* Reconstructed from USA ARM9 at 0x020be7e8 (24 bytes).
 * Names and types are inferred from the binary.
 */
#include "m2c.h"

extern u32 *func_020a8f18(void *);
u32 *func_020a9220(void *object) {
    u32 *cursor                    = func_020a8f18(object);
    u32 value                      = *cursor++;
    M2C_FIELD(object, u32 *, 0x14) = value;
    return cursor;
}
