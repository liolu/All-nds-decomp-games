/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GX_BeginLoadTexPltt from projets/blue-dragon-awakened-shadow/src/donor/GX_BeginLoadTexPltt.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef struct {
    s32 clearImageBank;
    u32 texStartAddr;
    u32 texPlttStartAddr;
    s32 texPlttBank;
    u32 clearImageAddr;
    s32 texBank;
    u32 texStartAddr2;
    u32 texSize1;
} UnkGxLoad3dState;
extern UnkGxLoad3dState data_020d857c;
extern const u16 data_02099fcc[8];
extern s32 func_0208168c(void);
void func_02082aa4(void) {
    s32 bank                       = func_0208168c();
    data_020d857c.texPlttBank      = bank;
    data_020d857c.texPlttStartAddr = data_02099fcc[bank >> 4] << 12;
}
