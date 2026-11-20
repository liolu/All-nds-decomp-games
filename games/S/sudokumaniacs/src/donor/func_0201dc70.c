/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205c1d0 from projets/children-of-mana/src/auto/func_0205c1d0.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern u32 func_0201e3b0(void);
extern u32 func_0201e3c4(u32 irq_flag);
typedef struct UnkHeapCell UnkHeapCell;
struct UnkHeapCell {
    UnkHeapCell *prev;
    UnkHeapCell *next;
    s32 size;
};
typedef struct UnkHeapDesc {
    s32 size;
    UnkHeapCell *free;
    UnkHeapCell *allocated;
} UnkHeapDesc;
typedef struct UnkHeapInfo {
    s32 currentHeap;
    s32 numHeaps;
    void *arenaStart;
    void *arenaEnd;
    UnkHeapDesc *heapArray;
} UnkHeapInfo;
extern UnkHeapInfo *data_0203dfc8[9];
extern UnkHeapCell *func_0201ded8(UnkHeapCell *list, UnkHeapCell *cell);
extern UnkHeapCell *func_0201de10(UnkHeapCell *list, UnkHeapCell *cell);
void func_0201dc70(u32 id, s32 heap, void *ptr) {
    UnkHeapInfo *heapInfo;
    UnkHeapDesc *hd;
    UnkHeapCell *cell;
    u32 prev = func_0201e3b0();

    heapInfo = data_0203dfc8[id];
    if (heap < 0) {
        heap = heapInfo->currentHeap;
    }
    hd = &heapInfo->heapArray[heap];

    cell          = (UnkHeapCell *) ((char *) ptr - 0x20);
    hd->allocated = func_0201ded8(hd->allocated, cell);
    hd->free      = func_0201de10(hd->free, cell);

    func_0201e3c4(prev);
}
