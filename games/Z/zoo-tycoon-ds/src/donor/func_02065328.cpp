/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_02097c58 from projets/pokemon-dash/src/donor/func_02097c58.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
namespace Sound {
    struct InfoInstrumentBankEntry {
        u32 fileId;
        u16 waveArchiveIds[4];

        static InfoInstrumentBankEntry *GetWithID(u32 id);
    };
} // namespace Sound
struct S_204f720;
typedef void (*Fn)(void *a, int b, int c, int d);
struct Bank {
    int f0;
    u16 ids[4];
};
struct A4 {
    int f0;
    u16 pad4;
    u8 b6;
    u8 b7;
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
struct S_204f720 {
    char pad34[0x34];
    short a;
    short pad36;
    short b;
};
typedef struct Node Node;
extern "C" {
extern void func_0206c52c(struct Node *base, int index, struct Node *arg);
extern int func_02063d4c(void *thiz, int seqData, int seqOffset, int bank);
extern void func_02063d7c(void);
extern void *func_02063d88(void **p, int idx, int r7);
extern void func_02064030(struct S_204f720 **pp, short v);
extern void func_0206404c(char **c, int b);
extern void func_020640c4(void **p, unsigned char v);
extern int func_02064914(unsigned int i);
extern int func_02064b3c(unsigned int id);
extern void *func_02065218(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, void *owner);
extern void *func_020652b8(int index, void *unk);
extern void func_020652d8(unsigned char *c, int off);
extern void func_020652f8(unsigned char *c, int off);
extern int func_02065318(int a, int b);
extern int func_02065328(void **p, int a1, unsigned int a2, int a3, struct A4 *a4, int a5);
}
extern "C" int func_02065328(void **p, int a1, unsigned int a2, int a3, struct A4 *a4, int a5) {
    struct Bank *bank;
    void *node;
    int r7;
    void *r6 = 0;
    int r5;
    int i;
    void *np;

    bank = (struct Bank *) Sound::InfoInstrumentBankEntry::GetWithID(a2);
    if (bank == 0) {
        return 0;
    }

    r7 = ((int (*)(void **p, int idx, int r7)) func_02063d88)(p, a1, a3);
    if (r7 == 0) {
        return 0;
    }

    r5 = func_02064914(bank->f0);
    if (r5 == 0) {
        r6 = func_020652b8(a1, (void *) r7);
        if (r6 == 0) {
            ((void (*)(int r7)) func_02063d7c)(r7);
            return 0;
        }
        r5 = (int) ((void *(*) (unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3,
                                void *owner)) func_02065218)(bank->f0, (unsigned int) &func_020652f8, 0, 0, r6);
        if (r5 == 0) {
            ((void (*)(int r7)) func_02063d7c)(r7);
            return 0;
        }
    }

    for (i = 0; i < 4; i++) {
        u16 v = bank->ids[i];
        if (v != 0xffff) {
            int q;
            node = ((void *(*) (unsigned int id)) func_02064b3c)(v);
            if (node == 0) {
                ((void (*)(int r7)) func_02063d7c)(r7);
                return 0;
            }
            q = func_02064914(*(unsigned int *) node);
            if (q == 0) {
                if (r6 == 0) {
                    r6 = func_020652b8(a1, (void *) r7);
                    if (r6 == 0) {
                        ((void (*)(int r7)) func_02063d7c)(r7);
                        return 0;
                    }
                }
                q = (int) ((void *(*) (unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3,
                                       void *owner)) func_02065218)(*(unsigned int *) node, (unsigned int) &func_020652d8, 0,
                                                                    0, r6);
                if (q == 0) {
                    ((void (*)(int r7)) func_02063d7c)(r7);
                    return 0;
                }
            }
            ((void (*)(int base, int index, int arg)) func_0206c52c)(r5, i, q);
        }
    }

    np = (void *) func_02064914((unsigned int) a4->f0);
    if (np == 0) {
        if (r6 == 0) {
            r6 = func_020652b8(a1, (void *) r7);
            if (r6 == 0) {
                ((void (*)(int r7)) func_02063d7c)(r7);
                return 0;
            }
        }
        np = ((void *(*) (unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, void *owner)) func_02065218)(
            (unsigned int) a4->f0, (unsigned int) &func_02065318, 0, 0, r6);
        if (np == 0) {
            ((void (*)(int r7)) func_02063d7c)(r7);
            return 0;
        }
    }

    ((int (*)(int thiz, int p1, int p2, int p3)) func_02063d4c)(r7, (int) ((char *) np + *(int *) ((char *) np + 0x18)), 0,
                                                                r5);
    func_020640c4(p, a4->b6);
    ((void (*)(void **c, unsigned char v)) func_0206404c)(p, a4->b7);
    ((void (*)(void *pp, int v)) func_02064030)(p, a5);
    return 1;
}
extern "C" int func_02065318(int a, int b);
extern "C" void func_020652f8(unsigned char *c, int off);
extern "C" void func_020652d8(unsigned char *c, int off);
extern "C" void *func_020652b8(int index, void *unk);
extern "C" void *func_02065218(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, void *owner);
extern "C" int func_02064b3c(unsigned int id);
extern "C" int func_02064914(unsigned int i);
extern "C" void func_020640c4(void **p, unsigned char v);
extern "C" void func_0206404c(char **c, int b);
extern "C" void func_02064030(struct S_204f720 **pp, short v);
extern "C" void *func_02063d88(void **p, int idx, int r7);
extern "C" void func_02063d7c(void);
extern "C" int func_02063d4c(void *thiz, int seqData, int seqOffset, int bank);
