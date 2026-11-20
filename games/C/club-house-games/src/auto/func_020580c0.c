/* compiler: 1.2/sp3 */
#include "m2c.h"
void func_02058684(void *, void *);
void func_0205865c(void *, void *);
void func_02058188(void *, void *);

void func_020580c0(u8 *heap, u8 *obj) {
    u32 region[3];
    u8 *info = heap + 0x24;
    u8 *blk  = obj - 0x10;
    func_02058684(region, blk);
    func_0205865c(info + 8, blk);
    func_02058188(info, region);
}
