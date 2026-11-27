/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWC_ConnectInetAsync from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/net_common.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
extern void MI_CpuFill8(void *dest, u8 data, u32 size);
typedef struct NetConnection {
    int handle;
    u16 state;
    u16 flag;
    u16 priority;
    u16 one;
    u8 unk_0C;
    u8 unk_0D[3];
    u32 phase;
    u8 apSsid[32];
    u8 apKey[32];
    u32 apKeyType;
    u8 apSpotInfo[12];
} NetConnection;
typedef struct NetConnectionState {
    int error;
    NetConnection *connection;
} NetConnectionState;
typedef struct NetStartParams {
    void *(*alloc)(int heap, u32 size);
    void (*free)(int heap, void *ptr, u32 size);
    u8 priority;
    u8 one;
    u8 unk_0A[2];
} NetStartParams;
extern void DWCi_SetError(int type, int code);
extern void *DWC_Alloc(int heap, u32 size);
extern void DWC_Free(int heap, void *p, u32 size);
extern void DWC_ConnectInetAsync(void);
extern NetConnectionState data_0210e718;
extern int DWC_AC_Create(NetStartParams *);
void DWCi_SetError(int type, int code);
void *DWC_Alloc(int heap, u32 size);
void DWC_Free(int heap, void *p, u32 size);
void DWC_ConnectInetAsync(void) {
    NetStartParams p;
    if (data_0210e718.connection) {
        if (data_0210e718.connection->state != 1) {
            return;
        }
        MI_CpuFill8(&p, 0, 12);
        p.priority                      = data_0210e718.connection->priority;
        p.one                           = data_0210e718.connection->one;
        p.alloc                         = DWC_Alloc;
        p.free                          = DWC_Free;
        data_0210e718.connection->state = 2;
        if (DWC_AC_Create(&p)) {
            return;
        }
        DWCi_SetError(9, -50199);
    } else {
        DWCi_SetError(9, -50199);
    }
}
