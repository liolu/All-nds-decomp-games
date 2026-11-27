/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void (*data_021368d8)(void *);
extern void func_0207690c(void *);

void func_0207697c(u8 *arg0) {
    void *v;

    v = *(void **) (arg0 + 0x10);
    if (v != 0) {
        data_021368d8(v);
    }
    func_0207690c(arg0);
}
