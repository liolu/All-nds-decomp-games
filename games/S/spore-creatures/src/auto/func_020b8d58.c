/* Reconstructed from USA ARM9 at 0x020d1140 (0x100 bytes).
 * Names and types are inferred from the binary.
 */
#include "m2c.h"

extern u32 func_020b6bd0(void);
extern void func_020b6be4(u32 state);
extern void func_020b468c(u32 mask);
extern void func_020b445c(u32 mask, void (*handler)(void));
extern void func_020b462c(u32 mask);
extern void func_020b8f50(void);

extern volatile u16 data_020f3884;
extern void (*data_020f3888[0x20])(void);

void func_020b8d58(void) {
    u32 state;
    u32 *pxi;
    volatile u16 *sync;
    s32 i;
    s32 timeout;
    u16 v;
    u32 n;

    state = func_020b6bd0();
    if (data_020f3884 == 0) {
        data_020f3884  = 1;
        pxi            = (u32 *) 0x027FFC00;
        pxi[0x388 / 4] = 0;
        for (i = 0; i < 0x20; i++) {
            data_020f3888[i] = NULL;
        }
        sync  = (volatile u16 *) 0x04000184;
        *sync = 0xc408;
        func_020b468c(0x40000);
        func_020b445c(0x40000, func_020b8f50);
        func_020b462c(0x40000);
        sync    = (volatile u16 *) 0x04000180;
        i       = 0;
        timeout = 0x3e8;
        for (;;) {
            v     = *sync;
            n     = v & 0xf;
            *sync = n << 8;
            if (n == 0 && i > 4) {
                break;
            }
            timeout = 0x3e8;
            if ((*sync & 0xf) == n) {
                for (;;) {
                    if (timeout <= 0) {
                        i = 0;
                        break;
                    }
                    v = *sync;
                    timeout--;
                    if ((v & 0xf) == n) {
                        continue;
                    }
                    break;
                }
            }
            i++;
        }
    }
    func_020b6be4(state);
}
