#include "m2c.h"

s32 func_02064588();                         /* extern */
M2C_UNK func_02064590();                     /* extern */
s32 func_020645c4();                         /* extern */
M2C_UNK func_02064830();                     /* extern */
s32 func_02064884();                         /* extern */

s32 func_02064524(M2C_UNK arg0) {
    if (func_02064588() != 0) {
        func_02064830(arg0);
    }
    func_02064590(arg0);
    if (func_020645c4(arg0) == 0) {
        return 1;
    }
    if ((func_02064588(arg0) != 0) && (func_02064884(arg0) == 0)) {
        return 2;
    }
    return 0;
}
