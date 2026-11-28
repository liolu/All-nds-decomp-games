/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_021511a0;
extern u8 data_021517a0;
void func_02096194(s32, s32, s32, s32);
void func_0208d924(u32, u32);

void func_0208d8cc(void) {
    u8 *r4 = (u8 *) &data_021511a0;
    u32 v;

    func_02096194(*(s32 *) (r4 + 0x24), 0x04100010, *(s32 *) (r4 + 0x1C), 0x200);
    v = *(u32 *) (r4 + 0x18);
    func_0208d924((v >> 8) | 0xB7000000, v << 0x18);
    *(volatile u32 *) 0x040001A4 = *(u32 *) (&data_021517a0 + 4);
}
