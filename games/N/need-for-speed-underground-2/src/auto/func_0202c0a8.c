/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0209a470;
extern u8 data_0209a4c8;
void func_02031e80(void *);

u8 *func_0202c0a8(u8 *obj) {
    *(void **) obj = (void *) &data_0209a470;
    *(void **) obj = (void *) &data_0209a4c8;
    func_02031e80(obj);
    return obj;
}
