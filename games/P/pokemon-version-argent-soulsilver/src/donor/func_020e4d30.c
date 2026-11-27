/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* __fread from https://github.com/Project-Holon/aletheia src/game/arm9/msl_stdio.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
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
typedef unsigned short wchar_t;
typedef struct {
    u32 open_mode : 2;
    u32 io_mode : 3;
    u32 buffer_mode : 2;
    u32 file_kind : 3;
    u32 file_orientation : 2;
    u32 binary_io : 1;
} file_modes;
typedef struct {
    u32 io_state : 3;
    u32 free_buffer : 1;
} file_state;
typedef struct FILE {
    u32 handle;
    file_modes mode;
    file_state state;
    u8 eof;
    u8 error;
    u8 char_buffer;
    u8 char_buffer_overflow;
    u8 pad10[2];
    u8 ungetc_buffer[2];
    wchar_t ungetwc_buffer[2];
    u32 position;
    u8 *buffer;
    u32 buffer_size;
    u8 *buffer_ptr;
    u32 buffer_len;
    u32 buffer_alignment;
    u32 saved_buffer_len;
} FILE;
extern int func_020e499c(void);
extern void func_020e4ae0(struct MslStream *stream);
extern int func_020e4b10(struct MslStream *stream, size_t *bytes_loaded, int mode);
extern size_t func_020e4d30(void *ptr, size_t memb_size, size_t num_memb, FILE *file);
extern void *func_020e5ad8(void *dest, const void *src, size_t n);
extern int func_020eb840(u8 *stream, int orientation);
void func_020e4ae0(struct MslStream *stream);
int func_020e4b10(struct MslStream *stream, size_t *bytes_loaded, int mode);
enum {
    __neutral,
    __writing,
    __reading,
    __rereading
};
enum {
    __no_io_error,
    __io_error,
    __io_EOF
};
size_t func_020e4d30(void *ptr, size_t memb_size, size_t num_memb, FILE *file) {
    u8 *read_ptr;
    size_t num_bytes, bytes_requested, bytes_read;
    int ioresult, always_buffer;

    if (func_020eb840((u8 *) file, 0) == 0) {
        func_020eb840((u8 *) file, -1);
    }

    bytes_requested = memb_size * num_memb;

    if (!bytes_requested || file->error || file->mode.file_kind == 0) {
        return 0;
    }

    always_buffer = !file->mode.binary_io || file->mode.buffer_mode == 2;

    if (file->state.io_state == __neutral) {
        if (file->mode.io_mode & 1) {
            file->state.io_state = __reading;
            file->buffer_len     = 0;
        }
    }

    if (file->state.io_state < __reading) {
        file->error      = 1;
        file->buffer_len = 0;
        return 0;
    }

    if (file->mode.buffer_mode & 1) {
        if (func_020e499c()) {
            file->error      = 1;
            file->buffer_len = 0;
            return 0;
        }
    }

    read_ptr   = (u8 *) ptr;
    bytes_read = 0;

    if (bytes_requested && file->state.io_state >= __rereading) {
        do {
            if (func_020eb840((u8 *) file, 0) == 1) {
                *(u16 *) read_ptr = file->ungetwc_buffer[file->state.io_state - __rereading];
                read_ptr += sizeof(wchar_t);
                bytes_read += sizeof(wchar_t);
                bytes_requested -= sizeof(wchar_t);
            } else {
                *read_ptr++ = file->ungetc_buffer[file->state.io_state - __rereading];
                bytes_read++;
                bytes_requested--;
            }
            file->state.io_state--;
        } while (bytes_requested && file->state.io_state >= __rereading);

        if (file->state.io_state == __reading) {
            file->buffer_len = file->saved_buffer_len;
        }
    }

    if (bytes_requested && (file->buffer_len || always_buffer)) {
        do {
            if (!file->buffer_len) {
                ioresult = func_020e4b10((struct MslStream *) file, 0, 0);
                if (ioresult) {
                    if (ioresult == __io_error) {
                        file->error      = 1;
                        file->buffer_len = 0;
                    } else {
                        file->state.io_state = __neutral;
                        file->eof            = 1;
                        file->buffer_len     = 0;
                    }
                    bytes_requested = 0;
                    break;
                }
            }

            num_bytes = file->buffer_len;
            if (num_bytes > bytes_requested) {
                num_bytes = bytes_requested;
            }

            func_020e5ad8(read_ptr, file->buffer_ptr, num_bytes);

            read_ptr += num_bytes;
            bytes_read += num_bytes;
            bytes_requested -= num_bytes;

            file->buffer_ptr += num_bytes;
            file->buffer_len -= num_bytes;
        } while (bytes_requested && always_buffer);
    }

    if (bytes_requested && !always_buffer) {
        u8 *save_buffer  = file->buffer;
        size_t save_size = file->buffer_size;

        file->buffer      = read_ptr;
        file->buffer_size = bytes_requested;

        ioresult = func_020e4b10((struct MslStream *) file, &num_bytes, 1);
        if (ioresult) {
            if (ioresult == __io_error) {
                file->error      = 1;
                file->buffer_len = 0;
            } else {
                file->state.io_state = __neutral;
                file->eof            = 1;
                file->buffer_len     = 0;
            }
        }

        bytes_read += num_bytes;

        file->buffer      = save_buffer;
        file->buffer_size = save_size;

        func_020e4ae0((struct MslStream *) file);

        file->buffer_len = 0;
    }

    return bytes_read / memb_size;
}
