/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MSL_C_LIB_FlushAllGated from https://github.com/Project-Holon/aletheia src/game/arm9/msl_crt.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct MslStream {
    u32 handle;
    u32 mode;
    u32 state;
    u8 eof;
    u8 error;
    u8 pad0e[0x0a];
    u32 position;
    u8 *buffer;
    u32 buffer_size;
    u8 *buffer_ptr;
    u32 buffer_len;
    u32 buffer_alignment;
    u32 pad30;
    u32 saved_buffer_len;
    u32 (*seek_proc)(u32, u32 *, u32, void *);
    u32 (*read_proc)(u32, u8 *, u32 *, void *);
    u32 (*write_proc)(u32, u8 *, u32 *, void *);
    u32 (*close_proc)(u32);
    void *ref_con;
} MslStream;
struct MslFileKind {
    u32 pad : 7;
    u32 kind : 3;
    u32 rest : 22;
};
struct MslStateBits {
    u32 mode : 3;
    u32 rest : 29;
};
extern int func_020e499c(void);
extern int func_020e539c(struct MslStream *stream);
extern u8 data_02110fec[];
int func_020e499c(void) {
    u8 *p = data_02110fec;
    int i = 1;
    int r = 0;

    do {
        if (((struct MslFileKind *) (p + 4))->kind != 0 && (((((struct MslStream *) p)->mode << 25) >> 30) & 1) != 0 &&
            ((struct MslStateBits *) (p + 8))->mode == 1) {
            if (func_020e539c((struct MslStream *) p) != 0) {
                r = -1;
            }
        }
        p = (i < 3) ? data_02110fec + i++ * 0x4c : 0;
    } while (p != 0);
    return r;
}
