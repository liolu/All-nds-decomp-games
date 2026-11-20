/* compiler: 1.2/sp3 */
#include "m2c.h"
s32 func_0205bf8c(void);
u8 *func_0205bd98(s32);
void func_0205b1d8(s32, s32);
void func_0205b1c0(s32, s32);
s32 func_0205b12c(s32, void *, void *);

u32 func_0205d3c8(void *heap) {
    s32 i;
    u8 *info;
    s32 j;
    func_0205bf8c();
    i = 0;
    do {
        info = func_0205bd98(i);
        if (info != NULL) {
            func_0205b1d8(i, info[0]);
            func_0205b1c0(i, *(u16 *) (info + 2));
            if (*(void **) (info + 4) != NULL && heap != NULL) {
                for (j = 0; j < info[0]; j++) {
                    if (func_0205b12c(i, heap, *(void **) (info + 4)) == 0) {
                        return 0;
                    }
                }
            }
        }
        i++;
    } while (i < 0x20);
    return 1;
}
