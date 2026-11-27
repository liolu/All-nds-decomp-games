/* compiler: 1.2/sp2p3 */
typedef unsigned int u32;
typedef int s32;

extern s32 data_020f94ec;
extern u32 data_0212d7b0;
void func_020bf42c(s32, u32, u32, u32, void *, s32);
void func_020bfb58(u32, u32, u32);

void func_020bbf5c(u32 arg0, u32 arg1) {
    u32 v = data_0212d7b0;
    s32 h = data_020f94ec;
    if (h != -1) {
        func_020bf42c(h, arg0, v, arg1, 0, 0);
        return;
    }
    func_020bfb58(arg0, v, arg1);
}
