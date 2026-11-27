/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* fclose from https://github.com/Project-Holon/aletheia src/game/arm9/msl_stdio.c (license: none (MIT = tooling only)), reused
 * by tools/donor_match.py */
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
extern int func_020e5328(FILE *stream);
extern int func_020e539c(struct MslStream *stream);
int func_020e5328(FILE *stream) {
    u32 mode;
    int r;
    int x;

    if (stream == 0) {
        return -1;
    }
    mode = (((struct MslStream *) stream)->mode << 22) >> 29;
    if (mode == 0) {
        return 0;
    }
    r = (int) func_020e539c((struct MslStream *) stream);
    x = ((struct MslStream *) stream)->close_proc(((struct MslStream *) stream)->handle);
    ((struct MslStream *) stream)->mode &= ~0x380u;
    ((struct MslStream *) stream)->handle = 0;
    if ((((struct MslStream *) stream)->state << 28) >> 31) {
        return -1;
    }
    return (r != 0 || x != 0) ? -1 : 0;
}
int func_020e539c(struct MslStream *stream);
