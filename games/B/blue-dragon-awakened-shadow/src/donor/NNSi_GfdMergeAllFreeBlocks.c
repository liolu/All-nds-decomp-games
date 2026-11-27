/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNSi_GfdMergeAllFreeBlocks from https://github.com/RonyxDumb/mkds src/arm9/02016b00_func_02016b00.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned long u32;
typedef int BOOL;
typedef struct NNSiGfdLnkVramBlock NNSiGfdLnkVramBlock;
struct NNSiGfdLnkVramBlock {
    u32 addr;
    u32 szByte;
    NNSiGfdLnkVramBlock *pBlkPrev;
    NNSiGfdLnkVramBlock *pBlkNext;
};
typedef struct NNSiGfdLnkMemRegion {
    u32 start;
    u32 end;
} NNSiGfdLnkMemRegion;
typedef struct NNSiGfdLnkVramMan {
    NNSiGfdLnkVramBlock *pFreeList;
} NNSiGfdLnkVramMan;
extern void NNSi_GfdMergeAllFreeBlocks(NNSiGfdLnkVramMan *pMan, NNSiGfdLnkVramBlock **ppBlockPoolList);
BOOL TryToMergeBlockRegion_(NNSiGfdLnkVramMan *pMan, NNSiGfdLnkVramBlock **ppBlockPoolList, NNSiGfdLnkMemRegion *pRegion);
void NNSi_GfdMergeAllFreeBlocks(NNSiGfdLnkVramMan *pMan, NNSiGfdLnkVramBlock **ppBlockPoolList) {
    NNSiGfdLnkMemRegion region;

    NNSiGfdLnkVramBlock *pCursor = pMan->pFreeList;
    while (pCursor) {
        region.start = pCursor->addr;
        region.end   = pCursor->addr + pCursor->szByte;

        if (TryToMergeBlockRegion_(pMan, ppBlockPoolList, &region)) {
            pCursor->addr   = region.start;
            pCursor->szByte = region.end - region.start;

            pCursor = pMan->pFreeList;
        } else {
            pCursor = pCursor->pBlkNext;
        }
    }
}
