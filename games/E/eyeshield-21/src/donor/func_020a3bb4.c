/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207ed94 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_0207ed94.legacy_sp3.c (license: MIT),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct {
    int index;
    u16 first, last, previous, start;
    u16 end;
    u16 saved;
    int pad10;
    int active;
} State;
typedef unsigned char Bank[0x540];
extern Bank data_021273b8[];
extern void (*data_020f9234[])(void *, int, u32);
extern void func_020be494(void *ptr, u32 size);
extern void func_020bbca0(void *dst, int src, unsigned int n);
extern void func_020bbc38(void *dst, int off, u32 len);
static inline int valid_range(State *s) {
    int valid = 0;
    if (s->saved <= s->end + 1) {
        if (s->start <= (u32) s->end) {
            valid = 1;
        }
    }
    return valid;
}
void func_020a3bb4(State *s) {
    if (s->active) {
        int index          = s->index;
        unsigned char *ptr = data_021273b8[index] + 0x100 + s->first * 8;
        u16 size           = (s->last - s->first + 1) * 8;
        u16 off            = s->first << 3;
        func_020be494(ptr, size);
        switch (index) {
            case 0:
                func_020bbca0(ptr, off, size);
                break;
            case 1:
                func_020bbc38(ptr, off, size);
                break;
        }
    } else {
        unsigned char *base = data_021273b8[s->index] + 0x100;
        unsigned char *ptr  = (unsigned char *) (base + s->first * 8);
        u16 count           = s->last - s->first + 1;
        u16 off             = s->first << 3;
        u16 i;
        void (*copy)(void *, int, u32) = data_020f9234[s->index];

        for (i = 0; i < count; i++) {
            copy(ptr, off, 6);
            off += 8;
            ptr += 8;
        }
        if (valid_range(s)) {
            u32 base = s->index;
            base *= 0x540;
            base += (u32) data_021273b8;
            base += 0x100;
            unsigned char *ptr = (unsigned char *) (base + s->start * 32);
            u16 count          = ((State *) s)->end - s->start + 1;
            u16 off            = s->start << 5;
            u16 i;
            void (*copy)(void *, int, u32) = data_020f9234[s->index];
            for (i = 0; i < count; i++) {
                copy(ptr + 6, off + 6, 2);
                copy(ptr + 14, off + 14, 2);
                copy(ptr + 22, off + 22, 2);
                copy(ptr + 30, off + 30, 2);
                off += 32;
                ptr += 32;
            }
        }
    }
}
