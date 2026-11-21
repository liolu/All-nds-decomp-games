typedef int s32;
extern void func_020d168c(s32 a, s32 b, void *c, s32 d, s32 e, s32 f, s32 g);
extern void func_020e9580(s32 a);
extern char data_ov000_02217a00[];
void func_ov000_021ed490(s32 a0, s32 a1, s32 a2, s32 a3) {
    func_020d168c(a2, 0x1000, data_ov000_02217a00, a3, a0, a3, a1);
    func_020e9580(a2);
}
