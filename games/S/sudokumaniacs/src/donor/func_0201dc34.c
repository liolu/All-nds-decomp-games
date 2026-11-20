/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205c194 from projets/children-of-mana/src/auto/func_0205c194.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned long u32;
typedef u32 OSIntrMode;
extern OSIntrMode func_0201e3b0(void);
extern OSIntrMode func_0201e3c4(OSIntrMode state);
typedef enum {
    OS_ARENA_MAIN         = 0,
    OS_ARENA_MAIN_SUBPRIV = 1,
    OS_ARENA_MAINEX       = 2,
    OS_ARENA_ITCM         = 3,
    OS_ARENA_DTCM         = 4,
    OS_ARENA_SHARED       = 5,
    OS_ARENA_WRAM_MAIN    = 6,
    OS_ARENA_WRAM_SUB     = 7,
    OS_ARENA_WRAM_SUBPRIV = 8,
    OS_ARENA_MAX          = 9
} OSArenaId;
typedef int OSHeapHandle;
extern OSHeapHandle func_0201dc34(OSArenaId id, OSHeapHandle heap);
typedef struct Cell Cell;
typedef struct HeapDesc HeapDesc;
struct Cell {
    Cell *prev;
    Cell *next;
    long size;
};
struct HeapDesc {
    long size;
    Cell *free;
    Cell *allocated;
};
typedef struct {
    volatile OSHeapHandle currentHeap;
    int numHeaps;
    void *arenaStart;
    void *arenaEnd;
    HeapDesc *heapArray;
} OSHeapInfo;
extern void *data_0203dfc8[OS_ARENA_MAX];
OSHeapHandle func_0201dc34(OSArenaId id, OSHeapHandle heap) {
    OSHeapInfo *heapInfo;
    OSHeapHandle prev;
    OSIntrMode enabled = func_0201e3b0();

    ((void) 0);
    ((void) 0);

    heapInfo = data_0203dfc8[id];

    ((void) 0);
    ((void) 0);
    ((void) 0);

    prev                  = heapInfo->currentHeap;
    heapInfo->currentHeap = heap;

    (void) func_0201e3c4(enabled);
    return prev;
}
