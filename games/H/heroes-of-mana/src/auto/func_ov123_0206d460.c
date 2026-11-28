/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 OSi_ThreadInfo[];
extern u16 data_ov123_020df1d8;
u16 func_ov123_0206d460(void) {
    s32 found;
    u8 *cur;
    u16 id;
    u8 *p;
    u8 *head;
    head = *(u8 **) (OSi_ThreadInfo + 8);
    do {
        found               = 0;
        data_ov123_020df1d8 = data_ov123_020df1d8 + 1;
        if (data_ov123_020df1d8 < 0x400 || data_ov123_020df1d8 >= 0x1388) {
            data_ov123_020df1d8 = 0x400;
        }
        cur = head;
        if (cur != NULL) {
            id = data_ov123_020df1d8;
            do {
                p = *(u8 **) (cur + 0xa4);
                if (p != NULL && *(s32 *) p != 0 && *(u16 *) (p + 0xa) == id) {
                    found = 1;
                    break;
                }
                cur = *(u8 **) (cur + 0x68);
            } while (cur != NULL);
        }
    } while (found != 0);
    return data_ov123_020df1d8;
}
