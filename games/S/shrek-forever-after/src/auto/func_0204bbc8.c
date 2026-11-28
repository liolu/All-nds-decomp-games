

typedef unsigned long size_t;

typedef int ptrdiff_t;

void *memset(void *, int, size_t);

void *memcpy(void *, const void *, size_t);

void *memmove(void *, const void *, size_t);

int memcmp(const void *, const void *, size_t);

size_t strlen(const char *);

int strcmp(const char *, const char *);

int strncmp(const char *, const char *, size_t);

char *strcpy(char *, const char *);

char *strcat(char *, const char *);

void *malloc(size_t);

void *calloc(size_t, size_t);

void *realloc(void *, size_t);

void free(void *);

int abs(int);

long labs(long);

void qsort(void *, size_t, size_t, int (*)(const void *, const void *));

int atoi(const char *);

void exit(int);

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
extern unsigned long mask[];

void func_0204b7dc(oggpack_buffer *b);

void _span(oggpack_buffer *b);

void oggpack_readinit(oggpack_buffer *b, ogg_reference *r);

long oggpack_look(oggpack_buffer *b, int bits);

void oggpack_adv(oggpack_buffer *b, int bits);

void _span_one(oggpack_buffer *b);

int func_0204bbc8(oggpack_buffer *b) {
    if (b->headend < 1) {
        func_0204b7dc(b);
        return -1;
    }
    return 0;
}

int oggpack_eop(oggpack_buffer *b);

long oggpack_read(oggpack_buffer *b, int bits);

long oggpack_bytes(oggpack_buffer *b);

long oggpack_bits(oggpack_buffer *b);