

typedef unsigned long size_t;

typedef int ptrdiff_t;

void *malloc(size_t);

void *calloc(size_t, size_t);

void *realloc(void *, size_t);

void func_0205675c(void *);

int abs(int);

long labs(long);

void qsort(void *, size_t, size_t, int (*)(const void *, const void *));

int atoi(const char *);

void exit(int);

typedef struct _FILE FILE;

extern FILE *stderr;

int fprintf(FILE *, const char *, ...);

int printf(const char *, ...);

size_t fread(void *, size_t, size_t, FILE *);

int fseek(FILE *, long, int);

long ftell(FILE *);

int fclose(FILE *);

void *func_020f54f8(void *, int, size_t);

void *memcpy(void *, const void *, size_t);

void *memmove(void *, const void *, size_t);

int memcmp(const void *, const void *, size_t);

size_t strlen(const char *);

int strcmp(const char *, const char *);

int strncmp(const char *, const char *, size_t);

char *strcpy(char *, const char *);

char *strcat(char *, const char *);

double floor(double);

double ceil(double);

double exp(double);

double log(double);

double pow(double, double);

double sqrt(double);

double cos(double);

double sin(double);

double atan(double);

double fabs(double);

double ldexp(double, int);

double frexp(double, int *);

typedef long long ogg_int64_t;

typedef int ogg_int32_t;

typedef unsigned int ogg_uint32_t;

typedef short ogg_int16_t;

typedef struct ogg_buffer_state {
    struct ogg_buffer *unused_buffers;
    struct ogg_reference *unused_references;
    int outstanding;
    int shutdown;
} ogg_buffer_state;

typedef struct ogg_buffer {
    unsigned char *data;
    long size;
    int refcount;

    union {
        ogg_buffer_state *owner;
        struct ogg_buffer *next;
    } ptr;
} ogg_buffer;

typedef struct ogg_reference {
    ogg_buffer *buffer;
    long begin;
    long length;

    struct ogg_reference *next;
} ogg_reference;

typedef struct oggpack_buffer {
    int headbit;
    unsigned char *headptr;
    long headend;

    ogg_reference *head;
    ogg_reference *tail;

    long count;
} oggpack_buffer;

typedef struct oggbyte_buffer {
    ogg_reference *baseref;

    ogg_reference *ref;
    unsigned char *ptr;
    long pos;
    long end;
} oggbyte_buffer;

typedef struct ogg_sync_state {

    ogg_buffer_state *bufferpool;

    ogg_reference *fifo_head;
    ogg_reference *fifo_tail;
    long fifo_fill;

    int unsynced;
    int headerbytes;
    int bodybytes;

} ogg_sync_state;

typedef struct ogg_stream_state {
    ogg_reference *header_head;
    ogg_reference *header_tail;
    ogg_reference *body_head;
    ogg_reference *body_tail;

    int e_o_s;

    int b_o_s;

    long serialno;
    long pageno;
    ogg_int64_t packetno;

    ogg_int64_t granulepos;

    int lacing_fill;
    ogg_uint32_t body_fill;

    int holeflag;
    int spanflag;
    int clearflag;
    int laceptr;
    ogg_uint32_t body_fill_next;

} ogg_stream_state;

typedef struct {
    ogg_reference *packet;
    long bytes;
    long b_o_s;
    long e_o_s;
    ogg_int64_t granulepos;
    ogg_int64_t packetno;

} ogg_packet;

typedef struct {
    ogg_reference *header;
    int header_len;
    ogg_reference *body;
    long body_len;
} ogg_page;

extern void oggpack_readinit(oggpack_buffer *b, ogg_reference *r);

extern long oggpack_look(oggpack_buffer *b, int bits);

extern void oggpack_adv(oggpack_buffer *b, int bits);

extern long oggpack_read(oggpack_buffer *b, int bits);

extern long oggpack_bytes(oggpack_buffer *b);

extern long oggpack_bits(oggpack_buffer *b);

extern int oggpack_eop(oggpack_buffer *b);

extern ogg_sync_state *ogg_sync_create(void);

extern int ogg_sync_destroy(ogg_sync_state *oy);

extern int ogg_sync_reset(ogg_sync_state *oy);

extern unsigned char *ogg_sync_bufferin(ogg_sync_state *oy, long size);

extern int ogg_sync_wrote(ogg_sync_state *oy, long bytes);

extern long ogg_sync_pageseek(ogg_sync_state *oy, ogg_page *og);

extern int ogg_sync_pageout(ogg_sync_state *oy, ogg_page *og);

extern int ogg_stream_pagein(ogg_stream_state *os, ogg_page *og);

extern int ogg_stream_packetout(ogg_stream_state *os, ogg_packet *op);

extern int ogg_stream_packetpeek(ogg_stream_state *os, ogg_packet *op);

extern ogg_stream_state *ogg_stream_create(int serialno);

extern int ogg_stream_destroy(ogg_stream_state *os);

extern int ogg_stream_reset(ogg_stream_state *os);

extern int ogg_stream_reset_serialno(ogg_stream_state *os, int serialno);

extern int ogg_stream_eos(ogg_stream_state *os);

extern int ogg_page_checksum_set(ogg_page *og);

extern int ogg_page_version(ogg_page *og);

extern int ogg_page_continued(ogg_page *og);

extern int ogg_page_bos(ogg_page *og);

extern int ogg_page_eos(ogg_page *og);

extern ogg_int64_t ogg_page_granulepos(ogg_page *og);

extern ogg_uint32_t ogg_page_serialno(ogg_page *og);

extern ogg_uint32_t ogg_page_pageno(ogg_page *og);

extern int ogg_page_packets(ogg_page *og);

extern int ogg_page_getbuffer(ogg_page *og, unsigned char **buffer);

extern int ogg_packet_release(ogg_packet *op);

extern int ogg_page_release(ogg_page *og);

extern void ogg_page_dup(ogg_page *d, ogg_page *s);

typedef struct vorbis_info {
    int version;
    int channels;
    long rate;
    long bitrate_upper;
    long bitrate_nominal;
    long bitrate_lower;
    long bitrate_window;

    void *codec_setup;
} vorbis_info;

typedef struct vorbis_dsp_state {
    int analysisp;
    vorbis_info *vi;

    ogg_int32_t **pcm;
    ogg_int32_t **pcmret;
    int pcm_storage;
    int pcm_current;
    int pcm_returned;

    int preextrapolate;
    int eofflag;

    long lW;
    long W;
    long nW;
    long centerW;

    ogg_int64_t granulepos;
    ogg_int64_t sequence;

    void *backend_state;
} vorbis_dsp_state;

typedef struct vorbis_block {

    ogg_int32_t **pcm;
    oggpack_buffer opb;

    long lW;
    long W;
    long nW;
    int pcmend;
    int mode;

    int eofflag;
    ogg_int64_t granulepos;
    ogg_int64_t sequence;
    vorbis_dsp_state *vd;

    void *localstore;
    long localtop;
    long localalloc;
    long totaluse;
    struct alloc_chain *reap;

} vorbis_block;

struct alloc_chain {
    void *ptr;
    struct alloc_chain *next;
};

typedef struct vorbis_comment {

    char **user_comments;
    int *comment_lengths;
    int comments;
    char *vendor;

} vorbis_comment;

extern void vorbis_info_init(vorbis_info *vi);

extern void vorbis_info_clear(vorbis_info *vi);

extern int vorbis_info_blocksize(vorbis_info *vi, int zo);

extern void vorbis_comment_init(vorbis_comment *vc);

extern void vorbis_comment_add(vorbis_comment *vc, char *comment);

extern void vorbis_comment_add_tag(vorbis_comment *vc, char *tag, char *contents);

extern char *vorbis_comment_query(vorbis_comment *vc, char *tag, int count);

extern int vorbis_comment_query_count(vorbis_comment *vc, char *tag);

extern void vorbis_comment_clear(vorbis_comment *vc);

extern int vorbis_block_init(vorbis_dsp_state *v, vorbis_block *vb);

extern int vorbis_block_clear(vorbis_block *vb);

extern void vorbis_dsp_clear(vorbis_dsp_state *v);

extern int vorbis_synthesis_headerin(vorbis_info *vi, vorbis_comment *vc, ogg_packet *op);

extern int vorbis_synthesis_init(vorbis_dsp_state *v, vorbis_info *vi);

extern int vorbis_synthesis_restart(vorbis_dsp_state *v);

extern int vorbis_synthesis(vorbis_block *vb, ogg_packet *op, int decodep);

extern int vorbis_synthesis_blockin(vorbis_dsp_state *v, vorbis_block *vb);

extern int vorbis_synthesis_pcmout(vorbis_dsp_state *v, ogg_int32_t ***pcm);

extern int vorbis_synthesis_read(vorbis_dsp_state *v, int samples);

extern long vorbis_packet_blocksize(vorbis_info *vi, ogg_packet *op);

union magic {
    struct {
        ogg_int32_t lo;
        ogg_int32_t hi;
    } halves;
    ogg_int64_t whole;
};

static inline ogg_int32_t MULT32(ogg_int32_t x, ogg_int32_t y) {
    union magic magic;
    magic.whole = (ogg_int64_t) x * y;
    return magic.halves.hi;
}

static inline ogg_int32_t MULT31(ogg_int32_t x, ogg_int32_t y) {
    return MULT32(x, y) << 1;
}

static inline ogg_int32_t MULT31_SHIFT15(ogg_int32_t x, ogg_int32_t y) {
    union magic magic;
    magic.whole = (ogg_int64_t) x * y;
    return ((ogg_uint32_t) (magic.halves.lo) >> 15) | ((magic.halves.hi) << 17);
}

static inline void XPROD32(ogg_int32_t a, ogg_int32_t b, ogg_int32_t t, ogg_int32_t v, ogg_int32_t *x, ogg_int32_t *y) {
    *x = MULT32(a, t) + MULT32(b, v);
    *y = MULT32(b, t) - MULT32(a, v);
}

static inline void XPROD31(ogg_int32_t a, ogg_int32_t b, ogg_int32_t t, ogg_int32_t v, ogg_int32_t *x, ogg_int32_t *y) {
    *x = MULT31(a, t) + MULT31(b, v);
    *y = MULT31(b, t) - MULT31(a, v);
}

static inline void XNPROD31(ogg_int32_t a, ogg_int32_t b, ogg_int32_t t, ogg_int32_t v, ogg_int32_t *x, ogg_int32_t *y) {
    *x = MULT31(a, t) - MULT31(b, v);
    *y = MULT31(b, t) + MULT31(a, v);
}

static inline ogg_int32_t CLIP_TO_15(ogg_int32_t x) {
    int ret = x;
    ret -= ((x <= 32767) - 1) & (x - 32767);
    ret -= ((x >= -32768) - 1) & (x + 32768);
    return (ret);
}

static inline ogg_int32_t VFLOAT_MULT(ogg_int32_t a, ogg_int32_t ap, ogg_int32_t b, ogg_int32_t bp, ogg_int32_t *p) {
    if (a && b) {

        *p = ap + bp + 32;
        return MULT32(a, b);

    } else {
        return 0;
    }
}

int _ilog(unsigned int);

static inline ogg_int32_t VFLOAT_MULTI(ogg_int32_t a, ogg_int32_t ap, ogg_int32_t i, ogg_int32_t *p) {

    int ip = _ilog(abs(i)) - 31;
    return VFLOAT_MULT(a, ap, i << -ip, ip, p);
}

static inline ogg_int32_t VFLOAT_ADD(ogg_int32_t a, ogg_int32_t ap, ogg_int32_t b, ogg_int32_t bp, ogg_int32_t *p) {

    if (!a) {
        *p = bp;
        return b;
    } else if (!b) {
        *p = ap;
        return a;
    }

    if (ap > bp) {
        int shift = ap - bp + 1;
        *p        = ap + 1;
        a >>= 1;
        if (shift < 32) {
            b = (b + (1 << (shift - 1))) >> shift;
        } else {
            b = 0;
        }
    } else {
        int shift = bp - ap + 1;
        *p        = bp + 1;
        b >>= 1;
        if (shift < 32) {
            a = (a + (1 << (shift - 1))) >> shift;
        } else {
            a = 0;
        }
    }

    a += b;
    if ((a & 0xc0000000) == 0xc0000000 || (a & 0xc0000000) == 0) {
        a <<= 1;
        (*p)--;
    }
    return (a);
}

extern void mdct_forward(int n, ogg_int32_t *in, ogg_int32_t *out);

extern void mdct_backward(int n, ogg_int32_t *in, ogg_int32_t *out);

typedef struct static_codebook {
    long dim;
    long entries;
    long *lengthlist;

    int maptype;

    long q_min;
    long q_delta;
    int q_quant;
    int q_sequencep;

    long *quantlist;

} static_codebook;

typedef struct codebook {
    long dim;
    long entries;
    long used_entries;

    int binarypoint;
    ogg_int32_t *valuelist;
    ogg_uint32_t *codelist;

    int *dec_index;
    char *dec_codelengths;
    ogg_uint32_t *dec_firsttable;
    int dec_firsttablen;
    int dec_maxlength;

    long q_min;
    long q_delta;

} codebook;

extern void vorbis_staticbook_clear(static_codebook *b);

extern void vorbis_staticbook_destroy(static_codebook *b);

extern int vorbis_book_init_decode(codebook *dest, const static_codebook *source);

extern void vorbis_book_clear(codebook *b);

extern long _book_maptype1_quantvals(const static_codebook *b);

extern int vorbis_staticbook_unpack(oggpack_buffer *b, static_codebook *c);

extern long vorbis_book_decode(codebook *book, oggpack_buffer *b);

extern long vorbis_book_decodevs_add(codebook *book, ogg_int32_t *a, oggpack_buffer *b, int n, int point);

extern long vorbis_book_decodev_set(codebook *book, ogg_int32_t *a, oggpack_buffer *b, int n, int point);

extern long vorbis_book_decodev_add(codebook *book, ogg_int32_t *a, oggpack_buffer *b, int n, int point);

extern long vorbis_book_decodevv_add(codebook *book, ogg_int32_t **a, long off, int ch, oggpack_buffer *b, int n, int point);

extern int _ilog(unsigned int v);

typedef void vorbis_look_mapping;

typedef void vorbis_look_floor;

typedef void vorbis_look_residue;

typedef void vorbis_look_transform;

typedef struct {
    int blockflag;
    int windowtype;
    int transformtype;
    int mapping;
} vorbis_info_mode;

typedef void vorbis_info_floor;

typedef void vorbis_info_residue;

typedef void vorbis_info_mapping;

typedef struct private_state {

    const void *window[2];

    int modebits;
    vorbis_look_mapping **mode;

    ogg_int64_t sample_count;

} private_state;

typedef struct codec_setup_info {

    long blocksizes[2];

    int modes;
    int maps;
    int times;
    int floors;
    int residues;
    int books;

    vorbis_info_mode *mode_param[64];
    int map_type[64];
    vorbis_info_mapping *map_param[64];
    int time_type[64];
    int floor_type[64];
    vorbis_info_floor *floor_param[64];
    int residue_type[64];
    vorbis_info_residue *residue_param[64];
    static_codebook *book_param[256];
    codebook *fullbooks;

    int passlimit[32];
    int coupling_passes;
} codec_setup_info;

extern const void *_vorbis_window(int type, int left);

extern void _vorbis_apply_window(ogg_int32_t *d, const void *window[2], long *blocksizes, int lW, int W, int nW);

typedef struct {
    vorbis_info_floor *(*unpack)(vorbis_info *, oggpack_buffer *);
    vorbis_look_floor *(*look)(vorbis_dsp_state *, vorbis_info_mode *, vorbis_info_floor *);
    void (*free_info)(vorbis_info_floor *);
    void (*free_look)(vorbis_look_floor *);
    void *(*inverse1)(struct vorbis_block *, vorbis_look_floor *);
    int (*inverse2)(struct vorbis_block *, vorbis_look_floor *, void *buffer, ogg_int32_t *);
} vorbis_func_floor;

typedef struct {
    int order;
    long rate;
    long barkmap;

    int ampbits;
    int ampdB;

    int numbooks;
    int books[16];

} vorbis_info_floor0;

typedef struct {
    int partitions;
    int partitionclass[31];

    int class_dim[16];
    int class_subs[16];
    int class_book[16];
    int class_subbook[16][8];

    int mult;
    int postlist[63 + 2];

} vorbis_info_floor1;

typedef struct {
    vorbis_info_residue *(*unpack)(vorbis_info *, oggpack_buffer *);
    vorbis_look_residue *(*look)(vorbis_dsp_state *, vorbis_info_mode *, vorbis_info_residue *);
    void (*free_info)(vorbis_info_residue *);
    void (*free_look)(vorbis_look_residue *);
    int (*inverse)(struct vorbis_block *, vorbis_look_residue *, ogg_int32_t **, int *, int);
} vorbis_func_residue;

typedef struct vorbis_info_residue0 {

    long begin;
    long end;

    int grouping;
    int partitions;
    int groupbook;
    int secondstages[64];
    int booklist[256];
} vorbis_info_residue0;

typedef struct {
    vorbis_info_mapping *(*unpack)(vorbis_info *, oggpack_buffer *);
    vorbis_look_mapping *(*look)(vorbis_dsp_state *, vorbis_info_mode *, vorbis_info_mapping *);
    void (*free_info)(vorbis_info_mapping *);
    void (*free_look)(vorbis_look_mapping *);
    int (*inverse)(struct vorbis_block *vb, vorbis_look_mapping *);
} vorbis_func_mapping;

typedef struct vorbis_info_mapping0 {
    int submaps;
    int chmuxlist[256];

    int floorsubmap[16];
    int residuesubmap[16];

    int psy[2];

    int coupling_steps;
    int coupling_mag[256];
    int coupling_ang[256];
} vorbis_info_mapping0;

extern vorbis_func_floor *_floor_P[];

extern vorbis_func_residue *_residue_P[];

extern vorbis_func_mapping *_mapping_P[];

typedef struct {
    vorbis_info_mode *mode;
    vorbis_info_mapping0 *map;

    vorbis_look_floor **floor_look;

    vorbis_look_residue **residue_look;

    vorbis_func_floor **floor_func;
    vorbis_func_residue **residue_func;

    int ch;
    long lastframe;

} vorbis_look_mapping0;

void func_0205c52c(vorbis_info_mapping *i) {
    vorbis_info_mapping0 *info = (vorbis_info_mapping0 *) i;
    if (info) {
        func_020f54f8(info, 0, sizeof(*info));
        func_0205675c(info);
    }
}

void mapping0_free_look(vorbis_look_mapping *look);

vorbis_look_mapping *mapping0_look(vorbis_dsp_state *vd, vorbis_info_mode *vm, vorbis_info_mapping *m);

int ilog(unsigned int v);

vorbis_info_mapping *mapping0_unpack(vorbis_info *vi, oggpack_buffer *opb);
extern int seq;

int mapping0_inverse(vorbis_block *vb, vorbis_look_mapping *l);
extern vorbis_func_mapping mapping0_exportbundle;