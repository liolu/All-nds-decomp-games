/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200d15c from projets/livly-garden/src/donor/func_0200d15c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkFndLink {
    void *unk_00;
    void *unk_04;
} UnkFndLink;
typedef struct UnkFndList {
    void *unk_00;
    void *unk_04;
    u16 unk_08;
    u16 unk_0a;
} UnkFndList;
typedef struct UnkFndHeapHead {
    u32 unk_00;
    UnkFndLink unk_04;
    UnkFndList unk_0c;
    void *unk_18;
    void *unk_1c;
    u32 unk_20;
} UnkFndHeapHead;
extern void func_02028df4(UnkFndList *list, u16 offset);
extern void func_02028e38(UnkFndList *list, void *obj);
extern void func_0202905c(UnkFndHeapHead *heap, u32 signature, void *start, void *end, u16 option);
extern BOOL data_0216bc3c;
extern UnkFndList data_0216bc40;
extern UnkFndList *func_02029034(void *heap);
void func_0202905c(UnkFndHeapHead *heap, u32 signature, void *start, void *end, u16 option) {
    heap->unk_00 = signature;
    heap->unk_18 = start;
    heap->unk_1c = end;
    heap->unk_20 = 0;
    heap->unk_20 = (heap->unk_20 & ~0xff) | (option & 0xff);
    func_02028df4(&heap->unk_0c, 4);
    if (!data_0216bc3c) {
        func_02028df4(&data_0216bc40, 4);
        data_0216bc3c = 1;
    }
    func_02028e38(func_02029034(heap), heap);
}
