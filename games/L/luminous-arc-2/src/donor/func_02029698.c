/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_FndVisitAllocatedForExpHeap from https://github.com/RonyxDumb/mkds src/arm9/020176c0_Mem_Exp_GetAllocatableSize.c
 * (license: none), reused by tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
extern const u16(*ctrdgi_fl_maxtime);
typedef struct {
    void *prevObject;
    void *nextObject;
} NNSFndLink;
typedef struct {
    void *headObject;
    void *tailObject;
    u16 numObjects;
    u16 offset;
} NNSFndList;
typedef struct NNSiFndHeapHead NNSiFndHeapHead;
struct NNSiFndHeapHead {
    u32 signature;
    NNSFndLink link;
    NNSFndList childList;
    void *heapStart;
    void *heapEnd;
    u32 attribute;
};
typedef NNSiFndHeapHead *NNSFndHeapHandle;
typedef struct NNSiFndExpHeapMBlockHead NNSiFndExpHeapMBlockHead;
struct NNSiFndExpHeapMBlockHead {
    u16 signature;
    u16 attribute;
    u32 blockSize;
    NNSiFndExpHeapMBlockHead *pMBHeadPrev;
    NNSiFndExpHeapMBlockHead *pMBHeadNext;
};
typedef struct NNSiFndExpMBlockList NNSiFndExpMBlockList;
struct NNSiFndExpMBlockList {
    NNSiFndExpHeapMBlockHead *head;
    NNSiFndExpHeapMBlockHead *tail;
};
typedef struct NNSiFndExpHeapHead NNSiFndExpHeapHead;
struct NNSiFndExpHeapHead {
    NNSiFndExpMBlockList mbFreeList;
    NNSiFndExpMBlockList mbUsedList;
    u16 groupID;
    u16 feature;
};
typedef void (*NNSFndHeapVisitor)(void *memBlock, NNSFndHeapHandle heap, u32 userParam);
extern void func_02029698(NNSFndHeapHandle heap, NNSFndHeapVisitor visitor, u32 userParam);
typedef u32 NNSiUIntPtr;
inline NNSiUIntPtr NNSiGetUIntPtr(const void *ptr) {
    return (NNSiUIntPtr) ptr;
}
inline void *AddU32ToPtr(void *ptr, u32 val) {
    return (void *) (NNSiGetUIntPtr(ptr) + val);
}
static inline NNSiFndExpHeapHead *GetExpHeapHeadPtrFromHeapHead(NNSiFndHeapHead *pHHead) {
    return AddU32ToPtr(pHHead, sizeof(NNSiFndHeapHead));
}
static inline NNSiFndExpHeapHead *GetExpHeapHeadPtrFromHandle(NNSFndHeapHandle heap) {
    return GetExpHeapHeadPtrFromHeapHead(heap);
}
static inline void *GetMemPtrForMBlock(NNSiFndExpHeapMBlockHead *pMBlkHd) {
    return AddU32ToPtr(pMBlkHd, sizeof(NNSiFndExpHeapMBlockHead));
}
void func_02029698(NNSFndHeapHandle heap, NNSFndHeapVisitor visitor, u32 userParam) {
    ((void) 0);
    ((void) 0);

    {
        NNSiFndExpHeapMBlockHead *pMBHead = GetExpHeapHeadPtrFromHandle(heap)->mbUsedList.head;

        while (pMBHead) {
            NNSiFndExpHeapMBlockHead *pMBHeadNext = pMBHead->pMBHeadNext;
            (*visitor)(GetMemPtrForMBlock(pMBHead), heap, userParam);
            pMBHead = pMBHeadNext;
        }
    }
}
