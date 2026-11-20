/* Reconstructed from USA ARM9 at 0x020d1240 (76 bytes).
 * Registers (or clears) the receive callback of a PXI FIFO channel.
 */
#include "m2c.h"

extern void *data_021497e8[]; /* extern */

u32 func_02006be0(void);       /* extern */
void func_02006bf4(u32 state);  /* extern */

void func_02008de0(u32 index, void (*callback)(void)) {
    u32 *words = (u32 *) 0x027FFC00;
    u32 state;

    state                = func_02006be0();
    data_021497e8[index] = callback;
    if (callback != NULL) {
        words[0x388 / 4] |= (1 << index);
    } else {
        words[0x388 / 4] &= ~(1 << index);
    }
    func_02006bf4(state);
}
