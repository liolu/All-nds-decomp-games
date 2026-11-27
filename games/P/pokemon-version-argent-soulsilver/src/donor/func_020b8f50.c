/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_G2dGetMCBankNumNodesRequired from https://github.com/Project-Holon/aletheia src/game/arm9/nns_g2d_multi_cell_animation.c
 * (license: none (MIT = tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
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
extern MultiCellData *func_020b7090(MultiCellBank *bank, u32 idx);
extern u16 func_020b8f50(MultiCellBank *pBank);
u16 func_020b8f50(MultiCellBank *pBank) {
    u16 max = 0;
    u16 i;

    for (i = 0; i < pBank->numMultiCell; i++) {
        u16 n = func_020b7090(pBank, i)->numNodes;

        if (n > max) {
            max = n;
        }
    }

    return max;
}
