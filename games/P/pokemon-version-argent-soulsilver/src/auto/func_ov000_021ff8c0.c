typedef unsigned char u8;
typedef int s32;
typedef struct B {
    u8 b[8];
} B;
extern s32 func_020a2f04(s32 a, B *p);
extern void func_ov000_021ff80c(s32 a, s32 b);
void func_ov000_021ff8c0(s32 a, B *src, u8 c) {
    B buf;
    buf      = *src;
    buf.b[0] = c;
    func_ov000_021ff80c(func_020a2f04(a, &buf), -1);
}
