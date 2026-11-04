/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_02050d54 from https://github.com/tangosdev/sm64ds-decomp src/engine/sound/SoundEngine.cpp (license: MIT), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
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
typedef struct HeapOwner {
    HeapAllocator *heap;
    NestedHeapIterator iter;
} HeapOwner;
extern "C" {
extern int func_0205e1b8(int a, int b, int c);
extern struct HeapAllocator;
extern struct NestedHeapIterator;
extern int func_0205e14c(void *o, int r1, int sel);
extern void func_02056208(int a0, int a1, int *p);
extern void func_02056214(int a0, int a1, int *p);
extern void func_02056220(int a0, int a1, int *p);
extern int func_02056598(char *obj, void *owner, int flag);
extern void *func_020568e8(HeapOwner *owner, u32 elemSize, u32 param2, u32 param3, u32 param4);
}
extern "C" void *func_020568e8(HeapOwner *owner, u32 elemSize, u32 param2, u32 param3, u32 param4);
extern "C" int func_02056598(char *obj, void *owner, int flag) {
    unsigned int sz;
    int r;
    *(void **) (obj + 0x84) =
        ((void *(*) (void *owner, unsigned int elemSize, void *cb, void *obj, unsigned int p4)) func_020568e8)(
            owner, *(unsigned int *) (obj + 0x1c), (void *) func_02056220, obj, 0);
    if (*(void **) (obj + 0x84) == 0) {
        return 0;
    }
    *(void **) (obj + 0x7c) =
        ((void *(*) (void *owner, unsigned int elemSize, void *cb, void *obj, unsigned int p4)) func_020568e8)(
            owner, *(unsigned int *) (obj + 0x24), (void *) func_02056214, obj, 0);
    if (*(void **) (obj + 0x7c) == 0) {
        return 0;
    }
    if (flag != 0 && (sz = *(unsigned int *) (obj + 0x14)) != 0) {
        *(void **) (obj + 0x80) = ((void *(*) (void *owner, unsigned int elemSize, void *cb, void *obj,
                                               unsigned int p4)) func_020568e8)(owner, sz, (void *) func_02056208, obj, 0);
        if (*(void **) (obj + 0x80) == 0) {
            return 0;
        }
    }
    if (func_0205e14c((void *) (obj + 0x30), *(int *) (obj + 0x18), 0) == 0) {
        return 0;
    }
    r = ((int (*)(void *o, int a, int b)) func_0205e1b8)((void *) (obj + 0x30), *(int *) (obj + 0x84), *(int *) (obj + 0x1c));
    if (r != *(int *) (obj + 0x1c)) {
        return 0;
    }
    if (func_0205e14c((void *) (obj + 0x30), *(int *) (obj + 0x20), 0) == 0) {
        return 0;
    }
    r = ((int (*)(void *o, int a, int b)) func_0205e1b8)((void *) (obj + 0x30), *(int *) (obj + 0x7c), *(int *) (obj + 0x24));
    if (r != *(int *) (obj + 0x24)) {
        return 0;
    }
    if (flag != 0 && *(int *) (obj + 0x14) != 0) {
        if (func_0205e14c((void *) (obj + 0x30), *(int *) (obj + 0x10), 0) == 0) {
            return 0;
        }
        r = ((int (*)(void *o, int a, int b)) func_0205e1b8)((void *) (obj + 0x30), *(int *) (obj + 0x80),
                                                             *(int *) (obj + 0x14));
        if (r != *(int *) (obj + 0x14)) {
            return 0;
        }
    }
    return 1;
}
extern "C" void func_02056220(int a0, int a1, int *p);
extern "C" void func_02056214(int a0, int a1, int *p);
extern "C" void func_02056208(int a0, int a1, int *p);
