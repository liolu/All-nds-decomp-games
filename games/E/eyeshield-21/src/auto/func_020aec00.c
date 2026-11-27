/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_01ff9234 from https://github.com/RonyxDumb/mkds src/arm9/01ff9048_func_01ff9048.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef volatile u32 vu32;
typedef vu32 REGType32v;
extern void func_020bfb70(const void *srcp, volatile void *destp, u32 size);
static inline void MI_CpuSend32(const void *src, volatile void *dest, u32 size) {
    ((void) 0);
    ((void) 0);
    ((void) 0);

    func_020bfb70(src, dest, size);
}
typedef struct NNSG3dGeBuffer_ {
    u32 idx;
    u32 data[192];
} NNSG3dGeBuffer;
extern void func_020aebe8(void);
extern void func_020aec00(void);
extern volatile int data_0212c2a0;
extern NNSG3dGeBuffer *data_0212c29c;
static inline void sendNB(const void *src, void *dst, u32 szByte) {
    MI_CpuSend32(src, dst, szByte);
}
void func_020aec00(void) {
    if (data_0212c2a0) {
        func_020aebe8();
    }

    if (data_0212c29c && data_0212c29c->idx > 0) {
        sendNB(&data_0212c29c->data[0], (void *) &(*(REGType32v *) (0x04000000 + 0x400)), data_0212c29c->idx << 2);
        data_0212c29c->idx = 0;
    }
}
void func_020aebe8(void);
