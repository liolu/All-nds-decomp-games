/* compiler: 2.0/sp1p5  */
/* NNS_SndHeapLoadState from projets/blue-dragon-awakened-shadow/src/auto/NNS_SndHeapLoadState.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_0208aaa4(M2C_UNK, M2C_UNK);
extern M2C_UNK func_0208ab1c(M2C_UNK, M2C_UNK);
extern M2C_UNK func_0208ae34(M2C_UNK, M2C_UNK);
extern void func_0208ae84(M2C_UNK, M2C_UNK);
extern void func_0208ce74(M2C_UNK);
extern M2C_UNK func_0208d0fc(M2C_UNK);
extern void func_0208d138(void);
void func_0208cfe4(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_ip)(s32, s32, s32, s32);
    s32 temp_r0;
    s32 var_r7;
    s32 var_r8;

    var_r8 = 0;
    var_r7 = 0;
    if (arg1 == 0) {
        func_0208ce74(arg0);
        return;
    }
    if (arg1 < (s32) (*(u16 *) ((s8 *) (arg0) + (0xC)))) {
        do {
            temp_r0 = func_0208ab1c(arg0 + 4, 0);
            var_r8  = func_0208ab1c(temp_r0, var_r8);
            if (var_r8 != 0) {
                do {
                    temp_ip = (*(M2C_UNK(**)(s32, s32, s32, s32))((s8 *) (var_r8) + (0xC)));
                    if (temp_ip != ((void *) 0)) {
                        temp_ip(var_r8 + 0x20, (*(s32 *) ((s8 *) (var_r8) + (8))), (*(s32 *) ((s8 *) (var_r8) + (0x10))),
                                (*(s32 *) ((s8 *) (var_r8) + (0x14))));
                        var_r7 = 1;
                    }
                    var_r8 = func_0208ab1c(temp_r0, var_r8);
                } while (var_r8 != 0);
            }
            func_0208aaa4(arg0 + 4, temp_r0);
        } while (arg1 < (s32) (*(u16 *) ((s8 *) (arg0) + (0xC))));
    }
    func_0208ae84((*(s32 *) ((s8 *) (arg0) + (0))), arg1);
    if (var_r7 != 0) {
        func_0208d138();
    }
    func_0208ae34((*(s32 *) ((s8 *) (arg0) + (0))), (s32) (*(u16 *) ((s8 *) (arg0) + (0xC))));
    func_0208d0fc(arg0);
}
