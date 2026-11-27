/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNSi_GfdFreeLnkVram from https://github.com/RonyxDumb/mkds src/arm9/02016b00_func_02016b00.c (license: none), reused by
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
extern BOOL NNSi_GfdFreeLnkVram(NNSiGfdLnkVramMan *pMan, NNSiGfdLnkVramBlock **ppBlockPoolList, u32 addr, u32 szByte);
static inline void InitBlockFromRegion_(NNSiGfdLnkVramBlock *pBlk, const NNSiGfdLnkMemRegion *pRegion) {
    ((void) 0);
    ((void) 0);

    pBlk->addr     = pRegion->start;
    pBlk->szByte   = (u32) (pRegion->end - pRegion->start);
    pBlk->pBlkPrev = 0;
    pBlk->pBlkNext = 0;
}
static inline void InsertBlock_(NNSiGfdLnkVramBlock **pListHead, NNSiGfdLnkVramBlock *prev) {
    ((void) 0);

    if ((*pListHead) != 0) {
        (*pListHead)->pBlkPrev = prev;
    }

    prev->pBlkNext = *pListHead;
    prev->pBlkPrev = 0;
    *pListHead     = prev;
}
static inline NNSiGfdLnkVramBlock *GetNewBlock_(NNSiGfdLnkVramBlock **ppBlockPoolList) {
    ((void) 0);
    {
        NNSiGfdLnkVramBlock *pNew = *ppBlockPoolList;
        if (pNew) {
            *ppBlockPoolList = pNew->pBlkNext;
        }

        return pNew;
    }
}
BOOL TryToMergeBlockRegion_(NNSiGfdLnkVramMan *pMan, NNSiGfdLnkVramBlock **ppBlockPoolList, NNSiGfdLnkMemRegion *pRegion);
BOOL NNSi_GfdFreeLnkVram(NNSiGfdLnkVramMan *pMan, NNSiGfdLnkVramBlock **ppBlockPoolList, u32 addr, u32 szByte) {
    ((void) 0);
    ((void) 0);
    ;

    {
        {
            NNSiGfdLnkMemRegion region;

            region.start = addr;
            region.end   = addr + szByte;

            ((void) 0);
            ((void) 0);
            {
                (void) TryToMergeBlockRegion_(pMan, ppBlockPoolList, &region);

                {
                    NNSiGfdLnkVramBlock *pNewFreeBlk = GetNewBlock_(ppBlockPoolList);
                    if (pNewFreeBlk == 0) {
                        return 0;
                    } else {
                        InitBlockFromRegion_(pNewFreeBlk, &region);
                        InsertBlock_(&pMan->pFreeList, pNewFreeBlk);
                    }
                }

                return 1;
            }
        }
    }
}
