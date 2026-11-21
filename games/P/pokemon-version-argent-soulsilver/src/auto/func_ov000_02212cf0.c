typedef int s32;
extern s32 func_ov000_02213f08(s32 a, s32 b);
extern void func_ov000_021fef94(s32 a, s32 *p);
void func_ov000_02212cf0(s32 *o, s32 x, s32 y) {
    s32 s[2];
    s[0] = func_ov000_02213f08(0, x);
    s[1] = func_ov000_02213f08(0, y);
    func_ov000_021fef94(o[6], s);
}
