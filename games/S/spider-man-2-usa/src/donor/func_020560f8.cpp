/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* _ZN2GX7LoadTexEPKvjj from https://github.com/tangosdev/sm64ds-decomp src/engine/gx/GX.cpp (license: MIT), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
extern int data_02157c3c;
extern u32 data_0216125c;
extern u32 data_0216126c;
extern u32 data_02161270;
extern "C" {
extern void func_02057d18(int ch, int src, int dst, u32 size, void (*cb)(int), int cbarg);
extern void func_02057f10(unsigned int channel, const void *src, void *dest, unsigned int len);
extern void func_020580d0(int *src, int *dst, int len);
}
namespace GX {
    void LoadTex(const void *src, unsigned int offset, unsigned int size) {
        unsigned int dst;
        int base = data_0216126c;
        if (base == 0) {
            dst = data_0216125c + offset;
        } else {
            int top = data_02161270;
            if (offset + size < top) {
                dst = data_0216125c + offset;
            } else if (offset >= top) {
                dst = base + offset - top;
            } else {
                top -= offset;
                unsigned int d0 = data_0216125c + offset;
                int ch          = data_02157c3c;
                if (ch != -1) {
                    func_02057f10(ch, src, (void *) d0, top);
                    func_02057d18(data_02157c3c, (int) ((char *) src + top), base, size - top, 0, 0);
                    return;
                }
                func_020580d0((int *) src, (int *) d0, top);
                func_020580d0((int *) ((char *) src + top), (int *) base, size - top);
                return;
            }
        }
        if (data_02157c3c != -1) {
            func_02057d18(data_02157c3c, (int) src, dst, size, 0, 0);
            return;
        }
        func_020580d0((int *) src, (int *) dst, size);
    }
} // namespace GX
