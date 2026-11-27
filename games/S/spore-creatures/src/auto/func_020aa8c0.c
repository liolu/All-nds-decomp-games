/* Reconstructed from USA ARM9 at 0x020c0434 (24 bytes).
 * Names and types are inferred from the binary.
 */
#include "m2c.h"

extern u32 *func_020aa418(void *);
u32 *func_020aa8c0(void *object) {
    u32 *cursor                    = func_020aa418(object);
    u32 value                      = *cursor++;
    M2C_FIELD(object, u32 *, 0x28) = value;
    return cursor;
}
