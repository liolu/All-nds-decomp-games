/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_0208b7d4(s32);
void func_0208aaa4(void *, void *);
extern u8 data_020de468;

void func_0208c300(u8 *arg0) {
    func_0208b7d4(*(s32 *) (arg0 + 0x40));
    func_0208aaa4(&data_020de468, arg0);
    *(s32 *) (arg0 + 0x24) = *(s32 *) (arg0 + 0x24) & ~1;
}
