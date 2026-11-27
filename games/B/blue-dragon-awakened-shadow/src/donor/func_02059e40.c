/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_TransportRecvUnreliable from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/ap_connect_control.c
 * (license: none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
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
extern int func_0204e494(int);
extern void func_02059e40(int a, void *p, int len);
void func_02059e40(int a, void *p, int len) {
    int idx      = func_0204e494(a);
    RecvWork *g  = data_0210f060;
    RecvEntry *e = &g->entries[idx];
    if (e->buf == ((void *) 0)) {
        return;
    }
    if (e->size < len) {
        return;
    }
    if (g->cb != ((void *) 0)) {
        g->cb(idx, p, len);
    }
    if (data_0210f060->tickOn && e->tickOn) {
        *(u64 *) &e->tickLo = OS_GetTick();
    }
}
