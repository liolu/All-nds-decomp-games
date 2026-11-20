/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_0204f9c4 from https://github.com/tangosdev/sm64ds-decomp src/engine/sound/SoundEngine.cpp (license: MIT), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
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
struct SoundPlayerRecord {
    NestedHeapIterator mLists[2];
    u32 mPlayableSeqCount;
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
struct E1 {
    unsigned char pad[0x2c];
    unsigned char f2c;
    unsigned char pad2[0xf];
    unsigned char f3c;
    unsigned char pad3[7];
};
struct S {
    char pad0[4];
    u8 *ptr;
    char pad8[0x24];
    u8 active;
    char pad2d[0x17];
};
extern "C" {
extern struct HeapAllocator;
extern struct NestedHeapIterator;
extern SoundPlayerRecord data_0206a250[];
extern struct E1 data_0206a5d0[];
extern void func_02041900(u8 *thiz, int arg1);
extern void func_02041d4c(int idx, int arg1);
}
extern "C" void func_02041d4c(int idx, int arg1) {
    int i;
    struct S *p = ((struct S *) data_0206a5d0);
    u8 *thiz    = &((u8 *) data_0206a250)[idx * 0x1c];
    for (i = 0; i < 16; i++, p++) {
        if (p->active != 0 && p->ptr == thiz) {
            func_02041900((u8 *) p, arg1);
        }
    }
}
extern "C" void func_02041900(u8 *thiz, int arg1);
