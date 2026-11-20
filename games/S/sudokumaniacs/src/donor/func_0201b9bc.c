/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020564d0 from projets/children-of-mana/src/auto/func_020564d0.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
extern u16 data_0202a4cc;
extern u16 data_0203dccc;
extern u16 data_0202a4cc;
extern u16 data_0203dccc;
void func_0201b9bc(u32 dispMode, u32 bgMode, u32 bg0_2d3d) {
    u32 cnt = (*(u32 *) ((0x04000000) | 0x0));

    data_0203dccc = dispMode;
    if (!data_0202a4cc) {
        dispMode = 0;
    }
    (*(u32 *) ((0x04000000) | 0x0)) = (cnt & ~0xf000f) | (dispMode << 16) | bgMode | (bg0_2d3d << 3);
    if (data_0203dccc == 0) {
        data_0202a4cc = 0;
    }
}
