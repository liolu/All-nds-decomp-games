/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
};

extern "C" void func_0200a594(u8 *arg0) {
    VA *o = *(VA **) (arg0 + 0x4);
    if (o != 0) {
        o->f1();
    }
    *(VA **) (arg0 + 0x4) = 0;
}
