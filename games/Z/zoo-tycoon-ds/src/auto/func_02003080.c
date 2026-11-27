/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02067264(s32);                         /* extern */
M2C_UNK func_02067870();                            /* extern */
extern s16 data_0217e310;
extern s16 data_0217ef28;

void func_02003080(s32 arg0, s32 arg1) {
    func_02067870();
    switch (arg0) {                                 /* switch 1; irregular */
        case 0x20:                                      /* switch 1 */
            data_0217e310 = 0x200;
            break;
        case 0x40:                                      /* switch 1 */
            data_0217e310 = 0x200;
            break;
        case 0x70:                                      /* switch 1 */
            data_0217e310 = 0xC00;
            break;
        case 0x0:                                       /* switch 1 */
            data_0217e310 = 0;
            break;
        case 0x60:                                      /* switch 1 */
            data_0217e310 = 0x400;
            break;
        case 0x10:                                      /* switch 1 */
            data_0217e310 = 0x800;
            break;
        case 0x30:                                      /* switch 1 */
            data_0217e310 = 0x800;
            break;
        case 0x1:                                       /* switch 1 */
            data_0217e310 = 0x1000;
            break;
        case 0x2:                                       /* switch 1 */
            data_0217e310 = 0x1000;
            break;
        case 0x3:                                       /* switch 1 */
            data_0217e310 = 0x2000;
            break;
    }
    func_02067264(arg1);
    switch (arg1) {                                 /* switch 2; irregular */
        case 0x100:                                     /* switch 2 */
            data_0217ef28 = 0x200;
            return;
        case 0x0:                                       /* switch 2 */
            data_0217ef28 = 0;
            return;
        case 0x8:                                       /* switch 2 */
            data_0217ef28 = 0x1000;
            return;
    }
}
