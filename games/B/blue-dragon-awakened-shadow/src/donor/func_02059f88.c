/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_TransportRecvBody from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/ap_connect_control.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
extern void MI_CpuCopy8(const void *src, void *dst, u32 size);
typedef u64 OSTick;
extern OSTick OS_GetTick(void);
typedef void (*RecvCb)(int, void *, int);
typedef struct RecvEntry {
    u32 unk0;
    u8 *buf;
    int size;
    u32 unkC;
    int pos;
    u32 unk14;
    int total;
    u8 unk1C;
    u8 state;
    u8 saved;
    u8 unk1F;
    u16 unk20;
    u16 type;
    u32 tickLo;
    u32 tickHi;
    int tickOn;
} RecvEntry;
typedef struct RecvWork {
    RecvEntry entries[32];
    u32 unk600;
    RecvCb cb;
    int tickOn;
} RecvWork;
extern RecvWork *data_0210f060;
extern u8 func_02059ca8(int, void *, int);
extern void DWCi_SetError(int, int);
extern void func_02059f88(int idx, void *p, int len);
void func_02059f88(int idx, void *p, int len) {
    RecvEntry *e = &data_0210f060->entries[idx];
    if (func_02059ca8(idx, p, len) == 2) {
        int pos = e->pos;
        if (pos + len > e->size) {
            DWCi_SetError(6, -97620);
            return;
        }
        MI_CpuCopy8(p, e->buf + pos, len);
    }
    e->pos += len;
    if (e->pos == e->total) {
        int total = e->total;
        e->state  = 1;
        e->pos    = 0;
        e->total  = 0;
        if (data_0210f060->cb != ((void *) 0)) {
            data_0210f060->cb(idx, e->buf, total);
        }
    }
    if (data_0210f060->tickOn && e->tickOn) {
        *(u64 *) &e->tickLo = OS_GetTick();
    }
}
