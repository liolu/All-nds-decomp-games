/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* __load_buffer from https://github.com/Project-Holon/aletheia src/game/arm9/msl_stdio.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned long size_t;
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
extern void func_020e4adc(void *a, void *b);
extern void func_020e4ae0(struct MslStream *stream);
extern int func_020e4b10(struct MslStream *stream, size_t *bytes_loaded, int mode);
void func_020e4ae0(struct MslStream *stream);
int func_020e4b10(struct MslStream *stream, size_t *bytes_loaded, int mode) {
    u32 r;

    func_020e4ae0((struct MslStream *) stream);
    if (mode == 1) {
        stream->buffer_len = stream->buffer_size;
    }
    r = stream->read_proc(stream->handle, stream->buffer, &stream->buffer_len, stream->ref_con);
    if (r == 2) {
        stream->buffer_len = 0;
    }
    if (bytes_loaded != 0) {
        *bytes_loaded = stream->buffer_len;
    }
    if (r != 0) {
        return r;
    }
    stream->position += stream->buffer_len;
    if (((stream->mode << 19) >> 31) == 0) {
        func_020e4adc(stream->buffer, &stream->buffer_len);
    }
    return 0;
}
