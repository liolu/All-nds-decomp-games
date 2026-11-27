/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_POOL_InitFrames from https://github.com/Project-Holon/aletheia src/game/ov013/vct_pool.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef u32 uptr;
typedef struct VctRxPacket {
    struct VctRxPacket *freeLink;
    struct VctRxPacket *prev;
    struct VctRxPacket *next;
    int codecMode;
    u8 senderAid;
    u8 queueIndex;
    u8 pad12[2];
    u32 payloadSize;
    u32 seq;
    u8 buffer[0x45c - 0x1c];
    u32 marker;
    u32 timestamp;
    u64 arrivalTick;
    u64 playTick;
    void *payload;
} VctRxPacket;
typedef struct VctFramePool {
    VctRxPacket *freeHead;
    VctRxPacket *base;
} VctFramePool;
extern VctFramePool data_021d7004;
extern void func_020d4858(u32 data, void *destp, u32 size);
extern int func_020b4014(VctRxPacket *buffer, u32 size);
int func_020b4014(VctRxPacket *buffer, u32 size) {
    u32 i;
    u32 count;
    VctRxPacket *area;
    count              = size / 0x478;
    area               = buffer;
    data_021d7004.base = area;
    if (count < 4 || count > 0x48) {
        return 0;
    }
    if (area == 0) {
        return 0;
    }
    if ((uptr) area & 0x1f) {
        data_021d7004.base = 0;
        return 0;
    }
    i = 0;
    func_020d4858(i, area, size);
    for (i = 0; i < count - 1; i++) {
        data_021d7004.base[i].freeLink = &data_021d7004.base[i + 1];
    }
    (data_021d7004.base + count)[-1].freeLink = 0;
    data_021d7004.freeHead                    = data_021d7004.base;
    return 1;
}
