/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_G2dUnpackNMC from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSystem/src/g2d_load.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef struct NNSG2dMultiCellHierarchyData {
    u16 animSequenceIdx;
    s16 posX;
    s16 posY;
    u16 nodeAttr;
} NNSG2dMultiCellHierarchyData;
typedef struct NNSG2dMultiCellData {
    u16 numNodes;
    u16 numCellAnim;
    NNSG2dMultiCellHierarchyData *pHierDataArray;
} NNSG2dMultiCellData;
typedef struct NNSG2dMultiCellDataBank {
    u16 numMultiCellData;
    u16 pad16;
    NNSG2dMultiCellData *pMultiCellDataArray;
    NNSG2dMultiCellHierarchyData *pHierarchyDataArray;
    void *pStringBank;
    void *pExtendedData;
} NNSG2dMultiCellDataBank;
extern void func_0206504c(void *pExtendedData);
extern void func_02064fc8(NNSG2dMultiCellDataBank *pMCBank);
void func_0206504c(void *pExtendedData);
#pragma force_active on
void func_02064fc8(NNSG2dMultiCellDataBank *pMCBank) {
    u16 i                           = 0;
    pMCBank->pMultiCellDataArray    = (NNSG2dMultiCellData *) ((u32) pMCBank->pMultiCellDataArray + (u32) pMCBank);
    pMCBank->pHierarchyDataArray    = (NNSG2dMultiCellHierarchyData *) ((u32) pMCBank->pHierarchyDataArray + (u32) pMCBank);
    NNSG2dMultiCellData *multiCells = pMCBank->pMultiCellDataArray;
    for (; i < pMCBank->numMultiCellData; i++) {
        multiCells[i].pHierDataArray =
            (NNSG2dMultiCellHierarchyData *) ((u8 *) pMCBank->pHierarchyDataArray + (u32) multiCells[i].pHierDataArray);
    }
    if (pMCBank->pExtendedData) {
        pMCBank->pExtendedData = (void *) ((u32) pMCBank->pExtendedData + (u32) pMCBank);
        func_0206504c(pMCBank->pExtendedData);
    }
}
