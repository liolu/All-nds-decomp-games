/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef void (*Fn)(void);
extern Fn data_021266e8[];
extern u8 data_0213b890[];

void func_020d41c8(void) {
    u8 *p = *(u8 **) (data_0213b890 + 0x4C);
    p[60] = 0;
    data_021266e8[data_0213b890[0x21]]();
}
