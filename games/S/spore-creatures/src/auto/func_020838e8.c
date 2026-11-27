#include "m2c.h"

/* Reconstructed from USA ARM9 at 0x020c73b4 (152 bytes).
 *
 * Fills a u16 slot table: the global at data_020dfc64 is copied into the
 * object, the slot array is resized through func_020cf19c and then every
 * entry of the list at a1 is looked up with func_02082c9c.  A successful
 * lookup stores (index | 0x100) into the slot array.
 */

typedef struct {
    u8 pad[0xc];
    u32 f0c;
    u8 pad2[0x19 - 0x10];
    u8 f19;
    u16 slots[64];
} Self;

typedef struct {
    u8 pad[9];
    u8 count;
    u8 pad2[0xe - 0xa];
    u16 offset;
} List;

typedef struct {
    u8 pad[8];
    u32 base;
    u8 pad2[0x18 - 0xc];
    u8 count;
} Data;

extern u32 data_020dfc64;
M2C_UNK func_020b7528(M2C_UNK, void *, M2C_UNK);    /* extern */
extern s32 func_02082c9c(void *a0, u32 a1);

void func_020838e8(Self *self, List *list, Data *data) {
    u32 gv = data_020dfc64;
    u8 count;
    u32 i;
    u8 *base = (u8 *) data + data->base;

    self->f0c = gv;
    count     = data->count;
    self->f19 = count;
    func_020b7528(0, self->slots, count << 1);

    for (i = 0; i < list->count; i++) {
        u8 *p    = (u8 *) list + 8 + list->offset;
        u32 addr = (u32) p + *(u16 *) (p + 2) + i * 16;
        s32 ret  = func_02082c9c(base + 4, addr);
        if (ret >= 0) {
            *(u16 *) ((u8 *) self + ret * 2 + 0x1a) = (u16) (i | 0x100);
        }
    }
}
