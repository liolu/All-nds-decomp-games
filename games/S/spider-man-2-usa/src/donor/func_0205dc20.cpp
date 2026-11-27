/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_02097b20 from projets/pokemon-dash/src/donor/func_02097b20.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
namespace Sound {
    struct InfoInstrumentBankEntry {
        u32 fileId;
        u16 waveArchiveIds[4];

        static InfoInstrumentBankEntry *GetWithID(u32 id);
    };
} // namespace Sound
typedef void (*Fn)(void *a, int b, int c, int d);
struct Entry7 {
    unsigned int f0;
    unsigned short ids[6];
};
struct P4 {
    int f0;
    short pad;
    unsigned char f6;
    unsigned char f7;
};
struct P5 {
    char pad[0x18];
    int off18;
};
struct Node {
    char pad8[8];
    int f8;
    Fn fc;
    int f10;
    int f14;
    char pad[8];
    char body;
};
struct Inner83 {
    char pad[0x34];
    short h34;
    short pad36;
    short h38;
    short h3a;
};
typedef struct Node Node;
extern "C" {
extern void func_0205b9ec(struct Node *base, int index, struct Node *arg);
extern int func_0205c600(void *thiz, int seqData, int seqOffset, int bank);
extern void func_0205c630(void);
extern void *func_0205c63c(void **p, int idx, int r7);
extern void func_0205c6f8(struct Inner83 **o, short a, short b);
extern void func_0205c7cc(char **c, int b);
extern void func_0205c844(void **p, unsigned char v);
extern int func_0205cff4(unsigned int i);
extern int func_0205d12c(unsigned int id);
extern int func_0205dc20(void *p0, void *p1, unsigned int p2, void *p3, struct P4 *p4, struct P5 *p5, int p6, int p7);
}
extern "C" int func_0205dc20(void *p0, void *p1, unsigned int p2, void *p3, struct P4 *p4, struct P5 *p5, int p6, int p7) {
    struct Entry7 *e7;
    void *r6;
    void *r5;
    int i;

    e7 = (struct Entry7 *) Sound::InfoInstrumentBankEntry::GetWithID(p2);
    if (e7 == 0) {
        return 0;
    }
    r6 = ((void *(*) (void *p, void *idx, void *arg)) func_0205c63c)(p0, p1, p3);
    if (r6 == 0) {
        return 0;
    }
    r5 = ((void *(*) (unsigned int i)) func_0205cff4)(e7->f0);
    if (r5 == 0) {
        ((void (*)(void *p)) func_0205c630)(r6);
        return 0;
    }
    for (i = 0; i < 4; i++) {
        unsigned int id = e7->ids[i];
        unsigned int *ent;
        void *node;
        if (id != 0xffff) {
            ent = ((unsigned int *(*) (unsigned int id)) func_0205d12c)(id);
            if (ent == 0) {
                ((void (*)(void *p)) func_0205c630)(r6);
                return 0;
            }
            node = ((void *(*) (unsigned int i)) func_0205cff4)(*ent);
            if (node == 0) {
                ((void (*)(void *p)) func_0205c630)(r6);
                return 0;
            }
            ((void (*)(void *base, int index, void *arg)) func_0205b9ec)(r5, i, node);
        }
    }
    ((void (*)(void *thiz, void *p, int v, void *node)) func_0205c600)(r6, (char *) p5 + p5->off18, p4->f0, r5);
    ((void (*)(void *p, unsigned char v)) func_0205c844)(p0, p4->f6);
    ((void (*)(void *p, unsigned char v)) func_0205c7cc)(p0, p4->f7);
    ((void (*)(void *o, int a, int b)) func_0205c6f8)(p0, p6, p7);
    return 1;
}
extern "C" int func_0205d12c(unsigned int id);
extern "C" int func_0205cff4(unsigned int i);
extern "C" void func_0205c844(void **p, unsigned char v);
extern "C" void func_0205c7cc(char **c, int b);
extern "C" void func_0205c6f8(struct Inner83 **o, short a, short b);
extern "C" void *func_0205c63c(void **p, int idx, int r7);
extern "C" void func_0205c630(void);
extern "C" int func_0205c600(void *thiz, int seqData, int seqOffset, int bank);
