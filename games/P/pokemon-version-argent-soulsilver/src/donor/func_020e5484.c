/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* __ftell from https://github.com/Project-Holon/aletheia src/game/arm9/msl_stdio.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
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
extern int func_020e5484(struct MslStream *stream);
extern int data_021e58e0;
int func_020e5484(struct MslStream *stream) {
    struct MslStateBits *m08 = (struct MslStateBits *) &stream->state;
    u8 mode;
    u8 sel;
    u32 m;
    u32 v;

    mode = ((struct MslFileKind *) &stream->mode)->kind;
    sel  = mode + 0xff;
    if (sel > 1 || stream->error != 0) {
        data_021e58e0 = 0x28;
        return -1;
    }
    m = m08->mode;
    if (m == 0) {
        return stream->position;
    }
    v = stream->saved_buffer_len + (stream->buffer_ptr - stream->buffer);
    if (m >= 3) {
        v -= m - 2;
    }
    return v;
}
