/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* __fseek from https://github.com/Project-Holon/aletheia src/game/arm9/msl_stdio.c (license: none (MIT = tooling only)),
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
struct MslStateBits {
    u32 mode : 3;
    u32 rest : 29;
};
struct MslFileModeBits {
    u32 pad : 2;
    u32 io_mode : 3;
    u32 buffer_mode : 2;
    u32 kind : 3;
    u32 rest : 22;
};
extern int func_020e4b9c(struct MslStream *stream, u32 *bytes_flushed);
extern int func_020e5484(struct MslStream *stream);
extern int func_020e561c(MslStream *stream, u32 pos, u32 whence);
extern int data_021e58e0;
int func_020e4b9c(struct MslStream *stream, u32 *bytes_flushed);
int func_020e5484(struct MslStream *stream);
int func_020e561c(MslStream *stream, u32 pos, u32 whence) {
    u8 mode;

    mode = ((struct MslFileModeBits *) &stream->mode)->kind;
    if (mode != 1 || stream->error != 0) {
        data_021e58e0 = 0x28;
        return -1;
    }
    if (((struct MslStateBits *) &stream->state)->mode == 1 && func_020e4b9c((struct MslStream *) stream, 0) != 0) {
        stream->error      = 1;
        stream->buffer_len = 0;
        data_021e58e0      = 0x28;
        return -1;
    }
    if (whence == 1) {
        whence = 0;
        pos += func_020e5484((struct MslStream *) stream);
    }
    if (whence != 2 && ((struct MslFileModeBits *) &stream->mode)->io_mode != 3 &&
        ((struct MslStateBits *) &stream->state)->mode - 2 <= 1) {
        if (pos >= stream->position || pos < stream->saved_buffer_len) {
            ((struct MslStateBits *) &stream->state)->mode = 0;
        } else {
            stream->buffer_ptr                             = stream->buffer + (pos - stream->saved_buffer_len);
            stream->buffer_len                             = stream->position - pos;
            ((struct MslStateBits *) &stream->state)->mode = 2;
        }
    } else {
        ((struct MslStateBits *) &stream->state)->mode = 0;
    }
    if (((struct MslStateBits *) &stream->state)->mode == 0) {
        if (stream->seek_proc != 0 && stream->seek_proc(stream->handle, &pos, whence, stream->ref_con) != 0) {
            stream->error      = 1;
            stream->buffer_len = 0;
            data_021e58e0      = 0x28;
            return -1;
        }
        stream->eof        = 0;
        stream->position   = pos;
        stream->buffer_len = 0;
    }
    return 0;
}
