/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02056d00 from projets/children-of-mana/src/auto/func_02056d00.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u8 vu8;
typedef struct {
    u16 lcdc;
    u16 bg;
    u16 obj;
    u16 arm7;
    u16 tex;
    u16 texPltt;
    u16 clearImage;
    u16 bgExtPltt;
    u16 objExtPltt;
    u16 subBg;
    u16 subObj;
    u16 subBgExtPltt;
    u16 subObjExtPltt;
} UnkGxVramState;
extern UnkGxVramState data_0206b934;
extern UnkGxVramState data_0206b934;
extern void func_020462b8(u32 lcdc);
void func_02045904(s32 subBg) {
    data_0206b934.lcdc  = ~subBg & (data_0206b934.lcdc | data_0206b934.subBg);
    data_0206b934.subBg = subBg;

    switch (subBg) {
        case 0x004:
            (*(vu8 *) 0x04000242) = 0x84;
            break;
        case 0x180:
            (*(vu8 *) 0x04000249) = 0x81;
        case 0x080:
            (*(vu8 *) 0x04000248) = 0x81;
            break;
        case 0x000:
        default:
            break;
    }
    func_020462b8(data_0206b934.lcdc);
}
