/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02001e30(void *, s32, void *);
extern s32 data_ov014_0214d7a0;
extern void (*data_ov014_0214d7a4)(s32, void *);
extern M2C_UNK data_ov014_0214d7a8;

void func_ov014_0213ef2c(s32 arg0, ...) {
    void *args;

    args = (void *) ((u32 *) ((u32) &arg0 & ~0x3) + 1);
    func_02001e30(&data_ov014_0214d7a8, arg0, args);
    if (data_ov014_0214d7a4 == NULL) {
        return;
    }
    data_ov014_0214d7a4(data_ov014_0214d7a0, &data_ov014_0214d7a8);
}
