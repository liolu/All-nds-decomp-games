/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02003594 from projets/farm-frenzy/src/donor/func_02003594.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
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
extern UnkGxLoad3dState data_020d0bbc;
extern const u16 data_020bd84c[16][3];
extern s32 func_02002298(void);
void func_02003b18(void) {
    s32 bank                    = func_02002298();
    data_020d0bbc.texBank       = bank;
    data_020d0bbc.texStartAddr  = data_020bd84c[bank][0] << 12;
    data_020d0bbc.texStartAddr2 = data_020bd84c[bank][1] << 12;
    data_020d0bbc.texSize1      = data_020bd84c[bank][2] << 12;
}
