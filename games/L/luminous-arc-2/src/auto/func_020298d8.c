/* Reconstructed from USA ARM9 at 0x020c2a50 (64 bytes).
 * Allocates a block from the unit heap and clears it if the heap is flagged.
 */
#include "m2c.h"

void *func_020298c0(void *block);                          /* extern */
void func_020074b8(u16 value, u16 *dest, u32 count); /* extern */

void *func_020298d8(void *heap, u32 index) {
    void *result;
    u32 count;

    result = func_020298c0((u8 *) heap + 0x24);
    if (result != 0) {
        count = M2C_FIELD(heap, u32 *, 0x28);
        if ((u8) M2C_FIELD(heap, u32 *, 0x20) & 1) {
            func_020074b8(0, result, count);
        }
    }
    return result;
}
