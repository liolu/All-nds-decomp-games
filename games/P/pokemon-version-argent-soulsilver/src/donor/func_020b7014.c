/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNSi_G2dUnpackMultiCellBank from https://github.com/Project-Holon/aletheia src/game/arm9/nns_g2d_anim_bank.c (license: none
 * (MIT = tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef u32 uptr;
typedef struct HierData {
    u16 animSequenceIdx;
    s16 posX;
    s16 posY;
    u16 nodeAttr;
} HierData;
typedef struct MultiCellData {
    u16 numNodes;
    u16 numCellAnim;
    HierData *pHierDataArray;
} MultiCellData;
typedef struct MultiCellBank {
    u16 numMultiCell;
    u16 pad02;
    MultiCellData *pArray;
    u32 nodeBase;
    u32 reserved0C;
    u8 *pAnimBank;
} MultiCellBank;
extern void func_020b7004(void *animBank);
extern void func_020b7014(volatile MultiCellBank *bank);
void func_020b7004(void *animBank);
void func_020b7014(volatile MultiCellBank *bank) {
    u16 i;
    u16 n;
    MultiCellData *array;
    u8 *anim;
    uptr tmp;

    bank->pArray   = (MultiCellData *) ((uptr) bank->pArray + (uptr) bank);
    bank->nodeBase = bank->nodeBase + (uptr) bank;

    i     = 0;
    n     = bank->numMultiCell;
    array = bank->pArray;

    while (i < n) {
        tmp                     = (uptr) array[i].pHierDataArray + bank->nodeBase;
        array[i].pHierDataArray = (HierData *) tmp;
        n                       = bank->numMultiCell;
        i++;
    }

    anim = bank->pAnimBank;
    if (anim != 0) {
        anim            = anim + (uptr) bank;
        bank->pAnimBank = anim;
        func_020b7004(anim);
    }
}
