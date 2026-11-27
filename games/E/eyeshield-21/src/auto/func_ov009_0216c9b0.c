/* compiler: 1.2/sp3 */
#include "m2c.h"

extern u8 data_ov009_02191d6c;
extern u8 data_ov009_02192d60;
void func_ov009_02171388(void *);

u8 *func_ov009_0216c9b0(u8 *obj) {
    *(void **) obj = (void *) &data_ov009_02191d6c;
    *(void **) obj = (void *) &data_ov009_02192d60;
    func_ov009_02171388(obj);
    return obj;
}
