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
extern UnkGxLoad3dState data_020347e4;
extern const u16 data_02030914[16][3];
extern s32 func_0200cde0(void);
void func_0200bf0c(void) {
    s32 bank                    = func_0200cde0();
    data_020347e4.texBank       = bank;
    data_020347e4.texStartAddr  = data_02030914[bank][0] << 12;
    data_020347e4.texStartAddr2 = data_02030914[bank][1] << 12;
    data_020347e4.texSize1      = data_02030914[bank][2] << 12;
}
