/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_020c7c54(s32);
void func_020b4cb4(void *, void *);
extern u8 data_021e0268;

void func_020c8e68(u8 *arg0) {
    func_020c7c54(*(s32 *) (arg0 + 0x40));
    func_020b4cb4(&data_021e0268, arg0);
    *(s32 *) (arg0 + 0x24) = *(s32 *) (arg0 + 0x24) & ~1;
}
