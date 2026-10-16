/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020755f8 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_arcload.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
extern void func_02015d08(void *ptr, u32 size);
extern u32 func_020195c4(void *waveArc);
extern void *func_02019600(void *waveArc, u32 index);
extern void func_020195cc(void *waveArc, u32 index, void *wave);
typedef struct UnkSndWaveArc UnkSndWaveArc;
typedef struct UnkSndWaveArcLink {
    UnkSndWaveArc *waveArc;
    struct UnkSndWaveArcLink *next;
} UnkSndWaveArcLink;
struct UnkSndWaveArc {
    u8 unk_00[8];
    u32 fileSize;
    u8 unk_0c[4];
    u8 blockHeader[8];
    UnkSndWaveArcLink *topLink;
    u32 reserved[7];
    u32 waveCount;
    u32 waveOffset[0];
};
typedef void (*UnkSndHeapCallback)(void *mem, u32 size, void *data1, u32 data2);
extern s32 func_02004648(u32 fileId, void *dst, u32 size, u32 offset);
extern void *func_0200489c(void *heap, u32 size, UnkSndHeapCallback callback, void *data1, u32 data2);
extern void func_02004ee4(void *mem, u32 size, void *data1, u32 data2);
extern BOOL func_02004f2c(UnkSndWaveArc *waveArc, u32 index, u32 fileId, void *heap);
void func_02004ee4(void *mem, u32 size, void *data1, u32 data2);
BOOL func_02004f2c(UnkSndWaveArc *waveArc, u32 index, u32 fileId, void *heap) {
    u32 size;
    u32 offset;
    u32 end;

    if (func_02019600(waveArc, index) != 0) {
        return 1;
    }

    {
        u32 count = func_020195c4(waveArc);
        u32 i     = waveArc->waveCount + index;
        offset    = waveArc->waveOffset[i];
        end       = index < count - 1 ? *(waveArc->waveOffset + i + 1) : waveArc->fileSize;
    }
    size = end - offset;

    if (heap == 0) {
        return 0;
    }

    heap = func_0200489c(heap, size + 0x20, func_02004ee4, waveArc, index);
    if (heap == 0) {
        return 0;
    }

    if (size != func_02004648(fileId, heap, size, offset)) {
        return 0;
    }

    func_02015d08(heap, size);
    func_020195cc(waveArc, index, heap);
    return 1;
}
