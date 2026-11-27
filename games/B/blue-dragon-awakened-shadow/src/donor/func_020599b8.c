/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_TransportRecv from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/transport.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef struct TransportChannel {
    u8 *sendBuf;
    u8 *recvBuf;
    int size;
    int sent;
    int received;
    int total;
    int pending;
    u8 sending;
    u8 receiving;
    u16 unk_1E;
    u16 unk_20;
    u16 unk_22;
    u64 tick;
    u32 timeout;
} TransportChannel;
typedef struct Transport {
    TransportChannel channel[32];
    void (*sendCallback)(int size, int aid);
    void (*recvCallback)(int aid, const void *data, int size);
    void (*timeoutCallback)(int aid);
    void (*pingCallback)(int size, int aid);
    u16 maxSize;
    u16 unk_612;
} Transport;
extern Transport *data_0210f060;
extern void func_02059e40(int, const void *, int, int);
extern void func_020599b8(int aid, const void *p, int n, int flag);
extern void func_02059d4c(int id, const void *p, int n);
void func_020599b8(int aid, const void *p, int n, int flag) {
    if (!data_0210f060) {
        return;
    }
    if (!p || !n) {
        return;
    }
    if (flag) {
        func_02059d4c(aid, p, n);
    } else {
        func_02059e40(aid, p, n, flag);
    }
}
void func_02059d4c(int id, const void *p, int n);
