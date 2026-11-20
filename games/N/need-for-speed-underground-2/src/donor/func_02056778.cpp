/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_02050f34 from https://github.com/tangosdev/sm64ds-decomp src/engine/sound/SoundEngine.cpp (license: MIT), reused by
 * tools/donor_match.py */
typedef void (*Fn)(void *a, int b, int c, int d);
struct Node {
    char pad8[8];
    int f8;
    Fn fc;
    int f10;
    int f14;
    char pad[8];
    char body;
};
struct TwoInt {
    int a, b;
};
typedef struct Node Node;
extern "C" {
extern void func_0205e5c0(void *s);
extern int func_0205e1b8(int a, int b, int c);
extern char *data_0217a79c;
extern int func_0205e310(Node *node, int b, ...);
extern int func_0205e390(void *out_file_id, const char *path);
extern int func_02056598(char *obj, void *owner, int flag);
extern void func_02056778(char *self, int a1, int a2, int a3);
}
extern "C" void func_02056778(char *self, int a1, int a2, int a3) {
    *(int *) (self + 0x84) = 0;
    *(int *) (self + 0x7c) = 0;
    *(int *) (self + 0x80) = 0;
    ((int (*)(void *p, int b)) func_0205e390)(self + 0x74, a1);
    func_0205e5c0(self + 0x30);
    ((void (*)(void *p, struct TwoInt v)) func_0205e310)(self + 0x30, *(struct TwoInt *) (self + 0x74));
    ((void (*)(void *dst, void *src, int n)) func_0205e1b8)(self + 0x30, self, 0x30);
    if (a2 != 0) {
        ((void (*)(void *self, int a, int b)) func_02056598)(self, a2, a3);
    }
    data_0217a79c = self;
}
extern "C" int func_02056598(char *obj, void *owner, int flag);
