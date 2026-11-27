/* compiler: 1.2/sp3 */
#include "m2c.h"

extern u8 data_ov009_0218f2d4;
extern u8 data_ov009_0218f2b8;
void func_ov009_02171388(void *);

u8 *func_ov009_02161a70(u8 *obj) {
    *(void **) obj = (void *) &data_ov009_0218f2d4;
    *(void **) obj = (void *) &data_ov009_0218f2b8;
    func_ov009_02171388(obj);
    return obj;
}
