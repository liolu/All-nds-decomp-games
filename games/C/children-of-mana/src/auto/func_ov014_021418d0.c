/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov014_0214685c(void *);
void func_ov014_0213c2cc(void);

void func_ov014_021418d0(u8 *arg0) {
    void *obj;
    void **vt;

    func_ov014_0214685c(arg0 + 0x42024);
    obj = *(void **) (arg0 + 0x42028);
    vt  = *(void ***) obj;
    ((void (*)(void *)) vt[3])(obj);
    *(void **) (arg0 + 0x42028) = 0;
    func_ov014_0213c2cc();
}
