/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_SndHeapLoadState from https://github.com/RonyxDumb/mkds src/arm9/0212d98c_Sound_Context_MaybeReset.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
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
extern void func_020a105c(NNSFndList *list, void *object);
extern void *func_020a1030(NNSFndList *list, void *object);
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
extern BOOL func_020a1a28(NNSFndHeapHandle heap, u32 tagName);
extern BOOL func_020a19cc(NNSFndHeapHandle heap, u32 tagName);
typedef void (*NNSSndHeapDisposeCallback)(void *mem, u32 size, u32 data1, u32 data2);
typedef struct NNSSndHeap *NNSSndHeapHandle;
extern void func_020b53c4(NNSSndHeapHandle heap);
extern void func_020b5210(NNSSndHeapHandle heap, int level);
typedef struct NNSSndHeap {
    NNSFndHeapHandle handle;
    NNSFndList sectionList;
} NNSSndHeap;
typedef struct NNSSndHeapBlock {
    NNSFndLink link;
    u32 size;
    NNSSndHeapDisposeCallback callback;
    u32 data1;
    u32 data2;
    u8 padding[0x20 - ((sizeof(NNSFndLink) + sizeof(NNSSndHeapDisposeCallback) + sizeof(u32) * 3) & 0x1f)];
    u32 buffer[0];
} NNSSndHeapBlock;
typedef struct NNSSndHeapSection {
    NNSFndList blockList;
    NNSFndLink link;
} NNSSndHeapSection;
extern BOOL func_020b5170(NNSSndHeap *heap);
extern void func_020b514c(void);
void func_020b53c4(NNSSndHeapHandle heap);
void func_020b5210(NNSSndHeapHandle heap, int level) {
    NNSSndHeapSection *section;
    void *object = ((void *) 0);
    BOOL result;
    BOOL doCallback = 0;

    ((void) 0);
    ((void) 0);

    if (level == 0) {
        func_020b53c4(heap);
        return;
    }

    while (level < heap->sectionList.numObjects) {
        section = (NNSSndHeapSection *) func_020a1030(&heap->sectionList, ((void *) 0));

        while ((object = func_020a1030(&section->blockList, object)) != ((void *) 0)) {
            NNSSndHeapBlock *block = (NNSSndHeapBlock *) object;
            if (block->callback != ((void *) 0)) {
                block->callback(block->buffer, block->size, block->data1, block->data2);
                doCallback = 1;
            }
        }

        func_020a105c(&heap->sectionList, section);
    }

    result = func_020a19cc(heap->handle, (u32) level);
    ((void) 0);

    if (doCallback) {
        func_020b514c();
    }

    result = func_020a1a28(heap->handle, heap->sectionList.numObjects);
    ((void) 0);

    result = func_020b5170(heap);
    ((void) 0);
}
BOOL func_020b5170(NNSSndHeap *heap);
void func_020b514c(void);
