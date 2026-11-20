/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OvlDisp_GetProcessStage from https://github.com/Yotona/twewy src/Engine/Overlay/OverlayDispatcher.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef void (*OverlayCB)(void *);
typedef enum {
    PROCESS_STAGE_INIT,
    PROCESS_STAGE_MAIN,
    PROCESS_STAGE_EXIT = 0x7FFFFFFF,
} OverlayProcessStage;
typedef struct {
    s32 id;
    OverlayCB cb;
} OverlayTag;
typedef struct {
    OverlayTag tag;
    void *cbArg;
    OverlayProcessStage processStage;
} OverlayData;
typedef struct {
    OverlayData *data;
    OverlayCB cb;
    void *cbArg;
    s32 unk_0C;
    u32 stackDepth;
    OverlayData stack[17];
} OverlayDispatcher;
OverlayProcessStage func_02053814(OverlayDispatcher *dispatcher) {
    return dispatcher->data->processStage;
}
