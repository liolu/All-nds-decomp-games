typedef int s32;
extern void func_ov000_02207f3c(s32 a, void *fn, s32 *b);
extern void func_ov000_02207f7c(void);
s32 func_ov000_02207fa8(s32 a, s32 v) {
    s32 s[2];
    s[0] = v;
    s[1] = 0;
    func_ov000_02207f3c(a, func_ov000_02207f7c, s);
    return s[1];
}
