#include "m2c.h"

s32 func_020853b0(s32 *);                           /* extern */
s32 func_0208579c(s32, s32);                        /* extern */
extern s32 data_02170354;

s32 func_02085400(void) {
    s32 sp0;

    if (data_02170354 == 0) {
        return 0;
    }
    return func_0208579c(sp0, func_020853b0(&sp0));
}
