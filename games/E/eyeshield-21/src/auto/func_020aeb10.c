/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_G3dGeSendDL from https://github.com/RonyxDumb/mkds src/arm9/01ff9048_func_01ff9048.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef int BOOL;
extern u32 data_020f94ec;
typedef void (*MIDmaCallback)(void *);
extern void func_020bf9fc(u32 dmaNo, const void *src, u32 commandLength, MIDmaCallback callback, void *arg);
extern void func_020bf800(u32 dmaNo, const void *src, u32 commandLength, MIDmaCallback callback, void *arg);
extern void func_020aec00(void);
extern void func_020aeb10(const void *src, u32 szByte);
extern void func_020aea14(u32 op, const u32 *args, u32 num);
extern volatile int data_0212c2a0;
void func_020aec00(void);
void func_020aebdc(void *arg);
extern BOOL data_0212c2a4;
void func_020aeb10(const void *src, u32 szByte) {
    ((void) 0);
    ((void) 0);

    if (szByte < 256 || (data_020f94ec) == ((u32) ~0)) {
        func_020aea14(*(const u32 *) src, (const u32 *) src + 1, (szByte >> 2) - 1);
    } else {
        func_020aec00();
        data_0212c2a0 = 1;

        if (data_0212c2a4) {
            func_020bf800((data_020f94ec), src, szByte, &func_020aebdc, (void *) &data_0212c2a0);
        } else {
            func_020bf9fc((data_020f94ec), src, szByte, &func_020aebdc, (void *) &data_0212c2a0);
        }
    }
}
void func_020aea14(u32 op, const u32 *args, u32 num);
