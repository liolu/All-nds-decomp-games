/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02072340 from projets/nintendogs-dachshund/src/donor/func_02072340.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;
typedef struct LinkList {
    void *head;
    void *tail;
    u16 count;
    u16 linkOffset;
} LinkList;
extern void *func_02040e00(LinkList *list, void *object);
extern void func_02040e2c(LinkList *list, void *object);
typedef struct SoundHeapItem {
    u8 pad_00[8];
    u32 unk_08;
    void (*onUnload)(void *payload, u32 arg1, u32 arg2, u32 arg3);
    u32 unk_10;
    u32 unk_14;
    u8 pad_18[8];
    u8 payload[1];
} SoundHeapItem;
typedef struct SoundHeap {
    void *frameHeap;
    LinkList levels;
} SoundHeap;
extern BOOL func_02042d68(SoundHeap *heap);
extern void func_02041188(void *frameHeap, int flags);
extern void func_02042d44(void);
void func_02042e78(SoundHeap *heap) {
    LinkList *saved;
    SoundHeapItem *item;

    saved = func_02040e00(&heap->levels, ((void *) 0));
    while (saved != ((void *) 0)) {
        item = func_02040e00(saved, ((void *) 0));
        while (item != ((void *) 0)) {
            if (item->onUnload != ((void *) 0)) {
                item->onUnload(item->payload, item->unk_08, item->unk_10, item->unk_14);
            }
            item = func_02040e00(saved, item);
        }
        func_02040e2c(&heap->levels, saved);
        saved = func_02040e00(&heap->levels, ((void *) 0));
    }
    func_02041188(heap->frameHeap, 3);
    func_02042d44();
    func_02042d68(heap);
}
