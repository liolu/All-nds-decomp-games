/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VCT_Update from https://github.com/Project-Holon/aletheia src/game/ov013/vct.c (license: none (MIT = tooling only)), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef struct VctPeer {
    u32 mode;
    u8 peerId;
    u8 floorHolderId;
    u8 pad6[2];
    u32 memberMask;
    int phase;
    u32 pad10;
    struct VctPeer *next;
} VctPeer;
typedef void (*VctEventCallback)(int aid, int event, VctPeer *peer, int arg);
typedef struct VctSession {
    u8 localId;
    u8 hostId;
    u8 pad2[2];
    VctEventCallback eventCallback;
    int callbackArg;
    int sharedSession;
    int mode;
    u32 sessionFlags;
} VctSession;
typedef struct VctLibState {
    s32 tickCount;
    s32 audioFrameCount;
    s32 initialized;
    VctSession session;
} VctLibState;
extern VctLibState data_021d84ac;
extern int func_020b2214(void);
extern int func_020b22e4(void);
extern void func_020b34c4(void);
extern void func_020b49d4(void);
void func_020b49d4(void) {
    if (data_021d84ac.initialized == 0) {
        return;
    }
    data_021d84ac.tickCount++;
    if ((data_021d84ac.tickCount & 0xf) == 0) {
        func_020b34c4();
    }
    if (func_020b22e4()) {
        func_020b2214();
    }
}
