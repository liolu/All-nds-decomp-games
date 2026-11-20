/* compiler: 1.2/sp3 */
#include "m2c.h"
extern u8 data_02263378[];
extern void func_0205a954();
void *func_0205c504(void *, s32, void *, s32, s32);
u32 func_0205c640(void *, void *);
void func_02057ee8(void *, void *);

u32 func_0205b12c(s32 idx, void *heap, void *arg) {
    u32 *blk;
    u32 r;
    blk = func_0205c504(heap, (s32) arg + 0x14, (void *) func_0205a954, 0, 0);
    if (blk == NULL) {
        return 0;
    }
    blk[3] = 0;
    blk[4] = idx;
    blk[2] = 0;
    r      = func_0205c640(blk + 5, arg);
    if (r == 0) {
        return 0;
    }
    blk[2] = r;
    func_02057ee8(data_02263378 + idx * 0x24 + 0xc, blk);
    return 1;
}
