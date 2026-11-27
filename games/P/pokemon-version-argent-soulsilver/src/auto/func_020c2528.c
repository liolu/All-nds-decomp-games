/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0206de34 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g3d/g3d_gecom.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
typedef struct NNSG3dGeBuffer {
    u32 idx;
    u32 data[0xc0];
} NNSG3dGeBuffer;
typedef struct UnkGeState {
    NNSG3dGeBuffer *buf;
    volatile u32 busy;
    u32 useDmaAsync;
} UnkGeState;
extern void func_020d4830(const void *src, volatile void *dest, u32 size);
extern void func_020d48b4(const void *src, void *dest, u32 size);
extern void func_020c23f4(void);
extern void func_020c2450(void);
extern void func_020c2528(u32 op, const void *args, u32 num);
extern UnkGeState data_021dd424;
extern UnkGeState data_021dd424;
void func_020c23f4(void);
void func_020c2450(void);
void func_020c2528(u32 op, const void *args, u32 num) {
    if (data_021dd424.buf) {
        if (data_021dd424.busy) {
            u32 idx = data_021dd424.buf->idx;
            if (idx + 1 + num <= 0xc0) {
                data_021dd424.buf->idx       = idx + 1;
                data_021dd424.buf->data[idx] = op;
                if (num) {
                    func_020d48b4(args, &data_021dd424.buf->data[data_021dd424.buf->idx], num * 4);
                    data_021dd424.buf->idx += num;
                }
                return;
            }
        }
        if (data_021dd424.buf->idx) {
            func_020c23f4();
        } else if (data_021dd424.busy) {
            func_020c2450();
        }
    } else if (data_021dd424.busy) {
        func_020c2450();
    }
    (*(vu32 *) 0x04000400) = op;
    func_020d4830(args, &(*(vu32 *) 0x04000400), num * 4);
}
