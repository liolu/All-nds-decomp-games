/* Reconstructed from USA ARM9 at 0x020d1240 (76 bytes).
 * Registers (or clears) the receive callback of a PXI FIFO channel.
 */
#include "m2c.h"

extern void *data_020f3888[]; /* extern */

u32 func_020b6bd0(void);       /* extern */
void func_020b6be4(u32 state);  /* extern */

void func_020b8e58(u32 index, void (*callback)(void)) {
    u32 *words = (u32 *) 0x027FFC00;
    u32 state;

    state                = func_020b6bd0();
    data_020f3888[index] = callback;
    if (callback != NULL) {
        words[0x388 / 4] |= (1 << index);
    } else {
        words[0x388 / 4] &= ~(1 << index);
    }
    func_020b6be4(state);
}
