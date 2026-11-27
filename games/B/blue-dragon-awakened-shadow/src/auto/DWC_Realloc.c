/* Reconstructed from USA ARM9 at 0x02066118 (20 bytes).
 * Names and types are inferred from the binary.
 */
#include "m2c.h"

extern s32 DWC_ReallocEx(s32, s32, s32, s32, s32);
s32 DWC_Realloc(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return DWC_ReallocEx(arg0, arg1, arg2, arg3, 32);
}
