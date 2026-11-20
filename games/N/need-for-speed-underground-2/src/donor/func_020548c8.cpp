/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* _ZN18SolidHeapAllocator10MemoryLeftEi from projets/spider-man-2-usa/src/donor/func_0205be40.cpp (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
struct HeapAllocator;
struct NestedHeapIterator {
    HeapAllocator *mFirst;
    HeapAllocator *mLast;
    u16 mCount;
    u16 mLinkOffset;

    NestedHeapIterator() {}
    NestedHeapIterator(u32 linkOffset);

    int Next(HeapAllocator *h_);
    int Previous(HeapAllocator *h_);
    void AddAt(HeapAllocator *at_, HeapAllocator *node_);
    void AddFirst(HeapAllocator *a_);
    void AddLast(HeapAllocator *a_);

    static NestedHeapIterator *FindNested(void *addr);
    void Init(HeapAllocator *a_);
    void Remove(HeapAllocator *node_);
    void *RecursiveFindNested(void *addr);
};
struct HeapAllocator {
    u32 mMagic;
    HeapAllocator *mPrevious;
    HeapAllocator *mNext;
    NestedHeapIterator mChildren;
    void *mStart;
    void *mEnd;
    u32 mFlags;

    HeapAllocator() {}

    void Remove();
    void Destroy();
};
struct SolidHeapFreeRegion {
    void *begin;
    void *end;
    u32 flags;
};
struct SolidHeapAllocator : HeapAllocator {
    SolidHeapFreeRegion mFreeRegion;

    SolidHeapAllocator(void *heapEnd, u32 flags);

    void *Allocate(u32 size, int align);
    u32 Reallocate(void *ptr, u32 size);
    int MemoryLeft(int align);
    s32 TryResizeToFit();
    void Reset(u32 params);
    void ResetStart();
    void ResetEnd();
    int SaveState(u32 arg);
    s32 LoadState(u32 id);

    static void *AllocateForwards(void *freeBlockPair, u32 size, u32 align);
    static void *AllocateBackwards(void *freeBlockPair, u32 size, u32 align);
};
extern "C" int func_020646ec(int x);
int SolidHeapAllocator::MemoryLeft(int align) {
    u32 a;
    char *new_var2;
    u32 mask;
    u32 new_var;
    int **new_var3;
    int *fb;
    u32 aligned;
    u32 end;

    a       = (u32) func_020646ec(align);
    mask    = a - 1u;
    fb      = (int *) ((char *) this + 0x24);
    aligned = (mask + (u32) * (int *) ((long long) (int) ((char *) this + 0x24))) & ~(a - 1u);
    end     = (u32) fb[1];
    if (!(a - 1u)) {
    }
    new_var = end;
    if (aligned > new_var) {
        return 0;
    }
    new_var2 = (char *) this;
    new_var3 = &fb;
    fb       = *new_var3;
    return (int) (end - ((mask + (u32) * (int *) ((long long) (int) (new_var2 + 0x24))) & ~(a - 1u)));
}
