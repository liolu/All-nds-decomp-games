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
extern UnkGxLoad3dState data_0214785c;
extern const u16 data_020dbd6c[16][3];
extern s32 func_0200266c(void);
void func_02003e90(void) {
    s32 bank                    = func_0200266c();
    data_0214785c.texBank       = bank;
    data_0214785c.texStartAddr  = data_020dbd6c[bank][0] << 12;
    data_0214785c.texStartAddr2 = data_020dbd6c[bank][1] << 12;
    data_0214785c.texSize1      = data_020dbd6c[bank][2] << 12;
}
