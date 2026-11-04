/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov002_0210c2c8;
extern u8 data_0208e4b8;
void func_02043d48(void *);

u8 *func_ov002_020fb8f8(u8 *obj) {
    *(void **) obj = (void *) &data_ov002_0210c2c8;
    *(void **) obj = (void *) &data_0208e4b8;
    func_02043d48(obj);
    return obj;
}
