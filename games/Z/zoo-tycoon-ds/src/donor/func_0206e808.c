/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* TP_GetUnCalibratedPoint from https://github.com/RonyxDumb/mkds src/arm9/0214e6e4_func_0214e6e4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef signed long s32;
typedef volatile u16 vu16;
typedef enum {
    TP_REQUEST_COMMAND_SAMPLING      = 0x0,
    TP_REQUEST_COMMAND_AUTO_ON       = 0x1,
    TP_REQUEST_COMMAND_AUTO_OFF      = 0x2,
    TP_REQUEST_COMMAND_SET_STABILITY = 0x3,
    TP_REQUEST_COMMAND_AUTO_SAMPLING = 0x10
} TPRequestCommand;
typedef enum {
    TP_RESULT_SUCCESS = 0,
    TP_RESULT_INVALID_PARAMETER,
    TP_RESULT_ILLEGAL_STATUS,
    TP_RESULT_EXCLUSIVE,
    TP_RESULT_PXI_BUSY
} TPRequestResult;
typedef struct {
    u16 x;
    u16 y;
    u16 touch;
    u16 validity;
} TPData;
typedef void (*TPRecvCallback)(TPRequestCommand command, TPRequestResult result, u16 index);
extern void func_0206e808(u16 *raw_x, u16 *raw_y, u16 dx, u16 dy);
extern const u16(*ctrdgi_fl_maxtime);
typedef struct {
    s32 x0;
    s32 xDotSize;
    s32 xDotSizeInv;
    s32 y0;
    s32 yDotSize;
    s32 yDotSizeInv;
} TPiCalibrateParam;
extern struct {
    TPRecvCallback callback;
    TPData buf;
    u16 index;
    u16 frequence;
    TPData *samplingBufs;
    u16 bufSize;
    TPiCalibrateParam calibrate;
    u16 calibrate_flg;
    vu16 state;
    vu16 err_flg;
    vu16 command_flg;
} data_02186608;
void func_0206e808(u16 *raw_x, u16 *raw_y, u16 dx, u16 dy) {
    TPiCalibrateParam *cal;

    ((void) 0);
    ((void) 0);
    ((void) 0);

    if (!data_02186608.calibrate_flg) {
        *raw_x = dx;
        *raw_y = dy;
        return;
    }

    cal = &data_02186608.calibrate;

    *raw_x = (u16) ((((s32) (dx * cal->xDotSize) >> (8 - 2)) + (s32) cal->x0) >> 2);
    *raw_y = (u16) ((((s32) (dy * cal->yDotSize) >> (8 - 2)) + (s32) cal->y0) >> 2);
}
