/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* TryToMergeBlockRegion_ from https://github.com/RonyxDumb/mkds src/arm9/02016b00_func_02016b00.c (license: none), reused by
 * tools/donor_match.py */
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
static inline void InsertBlock_(NNSiGfdLnkVramBlock **pListHead, NNSiGfdLnkVramBlock *prev) {
    ((void) 0);

    if ((*pListHead) != 0) {
        (*pListHead)->pBlkPrev = prev;
    }

    prev->pBlkNext = *pListHead;
    prev->pBlkPrev = 0;
    *pListHead     = prev;
}
static inline void RemoveBlock_(NNSiGfdLnkVramBlock **pListHead, NNSiGfdLnkVramBlock *pBlk) {
    ((void) 0);
    {
        NNSiGfdLnkVramBlock *const pPrev = pBlk->pBlkPrev;
        NNSiGfdLnkVramBlock *const pNext = pBlk->pBlkNext;

        if (pPrev) {
            pPrev->pBlkNext = pNext;
        } else {
            *pListHead = pNext;
        }

        if (pNext) {
            pNext->pBlkPrev = pPrev;
        }
    }
}
static inline u32 GetBlockEndAddr_(NNSiGfdLnkVramBlock *pBlk) {
    ((void) 0);
    return (u32) (pBlk->addr + pBlk->szByte);
}
BOOL TryToMergeBlockRegion_(NNSiGfdLnkVramMan *pMan, NNSiGfdLnkVramBlock **ppBlockPoolList, NNSiGfdLnkMemRegion *pRegion) {
    ((void) 0);
    ((void) 0);
    ((void) 0);

    {
        NNSiGfdLnkVramBlock *pCursor = pMan->pFreeList;
        NNSiGfdLnkVramBlock *pNext   = 0;
        BOOL bMerged                 = 0;

        while (pCursor) {
            pNext = pCursor->pBlkNext;

            if (pCursor->addr == pRegion->end) {
                pRegion->end = GetBlockEndAddr_(pCursor);
                RemoveBlock_(&pMan->pFreeList, pCursor);
                InsertBlock_(ppBlockPoolList, pCursor);
                bMerged |= 1;
            }

            if (GetBlockEndAddr_(pCursor) == pRegion->start) {
                pRegion->start = pCursor->addr;
                RemoveBlock_(&pMan->pFreeList, pCursor);
                InsertBlock_(ppBlockPoolList, pCursor);
                bMerged |= 1;
            }

            pCursor = pNext;
        }

        return bMerged;
    }
}
