/* Reconstructed from USA ARM9 at 0x020d1240 (76 bytes).
 * Registers (or clears) the receive callback of a PXI FIFO channel.
 */
#include "m2c.h"

extern void *data_021e35c8[]; /* extern */

u32 _Z20DisableIRQInterruptsv(void);       /* extern */
void _Z20SetIRQInterruptStatei(u32 state);  /* extern */

void func_020d6654(u32 index, void (*callback)(void)) {
    u32 *words = (u32 *) 0x027FFC00;
    u32 state;

    state                = _Z20DisableIRQInterruptsv();
    data_021e35c8[index] = callback;
    if (callback != NULL) {
        words[0x388 / 4] |= (1 << index);
    } else {
        words[0x388 / 4] &= ~(1 << index);
    }
    _Z20SetIRQInterruptStatei(state);
}
