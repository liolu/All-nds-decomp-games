/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_GfdInitFrmPlttVramManager from https://github.com/RonyxDumb/mkds src/arm9/020162d4_AnotherPaletteHandler.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef int BOOL;
typedef u32 NNSGfdPlttKey;
typedef NNSGfdPlttKey (*NNSGfdFuncAllocPlttVram)(u32 szByte, BOOL is4pltt, u32 opt);
typedef int (*NNSGfdFuncFreePlttVram)(NNSGfdPlttKey plttKey);
extern NNSGfdFuncAllocPlttVram data_0211094c;
extern NNSGfdFuncFreePlttVram data_02110950;
extern void func_020b5d18(u32 szByte, BOOL useAsDefault);
extern NNSGfdPlttKey func_020b5d64(u32 szByte, BOOL b4Pltt, u32 bAllocFromLo);
extern int func_020b5ea0(NNSGfdPlttKey plttKey);
extern void func_020b5ee0(void);
typedef struct NNSGfdFramPlttVramManager {
    u32 loAddr;
    u32 hiAddr;
    u32 szTotal;
} NNSGfdFrmPlttVramManager;
extern NNSGfdFrmPlttVramManager data_021d84e4;
void func_020b5d18(u32 szByte, BOOL useAsDefault) {
    ((void) 0);

    data_021d84e4.szTotal = szByte;

    func_020b5ee0();

    ((void) 0);

    if (useAsDefault) {
        data_0211094c = func_020b5d64;
        data_02110950 = func_020b5ea0;
    }
}
NNSGfdPlttKey func_020b5d64(u32 szByte, BOOL bPltt4, u32 allocFrom);
int func_020b5ea0(NNSGfdPlttKey plttKey);
void func_020b5ee0(void);
