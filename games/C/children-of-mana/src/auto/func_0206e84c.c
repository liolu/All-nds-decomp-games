/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_G3dGeSendDL from https://github.com/RonyxDumb/mkds src/arm9/01ff9048_func_01ff9048.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef int BOOL;
extern u32 data_020ff090;
typedef void (*MIDmaCallback)(void *);
extern void func_0205a018(u32 dmaNo, const void *src, u32 commandLength, MIDmaCallback callback, void *arg);
extern void func_02059e1c(u32 dmaNo, const void *src, u32 commandLength, MIDmaCallback callback, void *arg);
extern void func_0206e93c(void);
extern void func_0206e84c(const void *src, u32 szByte);
extern void func_0206e750(u32 op, const u32 *args, u32 num);
extern volatile int data_02123238;
void func_0206e93c(void);
void func_0206e918(void *arg);
extern BOOL data_0212323c;
void func_0206e84c(const void *src, u32 szByte) {
    ((void) 0);
    ((void) 0);

    if (szByte < 256 || (data_020ff090) == ((u32) ~0)) {
        func_0206e750(*(const u32 *) src, (const u32 *) src + 1, (szByte >> 2) - 1);
    } else {
        func_0206e93c();
        data_02123238 = 1;

        if (data_0212323c) {
            func_02059e1c((data_020ff090), src, szByte, &func_0206e918, (void *) &data_02123238);
        } else {
            func_0205a018((data_020ff090), src, szByte, &func_0206e918, (void *) &data_02123238);
        }
    }
}
void func_0206e750(u32 op, const u32 *args, u32 num);
