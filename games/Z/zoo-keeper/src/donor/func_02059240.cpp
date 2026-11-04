/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_020644c4 from projets/need-for-speed-underground-2/src/donor/func_020644c4.cpp (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef unsigned long long u64;
typedef signed long long s64;
typedef unsigned long size_t;
typedef s32 Fix12i;
typedef struct Vector3 {
    Fix12i x, y, z;
    ~Vector3() {}

    Vector3() {}
    Vector3(Fix12i x_, Fix12i y_, Fix12i z_) :
        x(x_),
        y(y_),
        z(z_) {}

} Vector3;
typedef char Vector3_size_must_be_0xc[sizeof(Vector3) == 0xc ? 1 : -1];
typedef struct Vector3s {
    s16 x, y, z;

    ~Vector3s() {}

    inline Vector3s();

} Vector3s;
typedef char Vector3s_size_must_be_0x6[sizeof(Vector3s) == 6 ? 1 : -1];
typedef float f32;
typedef double f64;
typedef volatile unsigned char vu8;
typedef volatile signed char vs8;
typedef volatile unsigned short vu16;
typedef volatile signed short vs16;
typedef volatile unsigned int vu32;
typedef volatile signed int vs32;
typedef int OnYoshiEatReturnVal;
extern "C" {
extern void func_0206dab4(void);
}
namespace cstd {
    extern void __builtin_trap(void);
}
extern "C" {
extern int func_02049264(void *p);
extern void func_02049398(void *p);
extern void func_02049324(void *p);
typedef struct S6e06c S6e06c;
extern int func_02059544(S6e06c *p);
extern void func_02059ffc(void);
extern int data_0206f218;
extern int data_0206b9dc[];
extern int data_0206f1d0;
extern int data_0206f1f4;
extern volatile int data_0206f0c8;
extern void (*volatile data_0206f0d0[])(void);
extern void (*data_0206f0c0)(void);
int func_02059240(int a) {
    if (func_02049264(&data_0206f218) == 0) {
        data_0206f1d0 = *(int *) ((char *) data_0206b9dc[2] + 0x6c);
        data_0206f1f4 = 1;
    } else if (data_0206f1d0 == *(int *) ((char *) data_0206b9dc[2] + 0x6c)) {
        data_0206f1f4++;
    } else {
        func_02049398(&data_0206f218);
        data_0206f1d0 = *(int *) ((char *) data_0206b9dc[2] + 0x6c);
        data_0206f1f4 = 1;
    }

    while (data_0206f0c8 > 0) {
        int n         = data_0206f0c8 - 1;
        data_0206f0c8 = n;
        data_0206f0d0[n]();
    }

    data_0206f1f4--;
    if (data_0206f1f4 == 0) {
        func_02049324(&data_0206f218);
    }
    if (data_0206f0c0 != 0) {
        data_0206f0c0();
        data_0206f0c0 = 0;
    }
    func_02059544(0);
    func_02059ffc();
}
typedef void (*FP0206dbf8)(void);
extern int data_020a9ed4;
extern FP0206dbf8 data_020a9ecc;
extern void func_02072f3c(void);
extern int func_0206dbf8(int a);
extern void func_0207037c(int a);
extern int data_020a9ed4;
extern void func_0206dc4c(void);
typedef struct Pair {
    int x, y;
} Pair;
extern void func_0206de14(int a0, Pair p1, Pair p2, unsigned int flags);
extern float func_0206dc7c(double a, double b, int op);
extern double func_0206dcd4(double a, double b, int op);
extern float func_0206dd30(float a, float b, int op);
extern double func_0206dd7c(double a, int op);
extern float func_0206ddcc(float a, int op);
extern int func_02073238(void);
extern int func_01ffb008(int a, int b);
extern void func_0207037c(int idx);
typedef void (*DispatchFn)(int a0, Pair p1, Pair p2, unsigned int flags);
extern void func_0206de14(int a0, Pair p1, Pair p2, unsigned int flags);
extern char data_0209a330[];
typedef struct S6e06c S6e06c;
extern int func_02059544(S6e06c *p);
extern int func_0206df14(void);
}
namespace cstd {
    extern int abs(int x);
}
extern "C" {
extern void func_0206e068(int a, int *b);
extern void func_0206e030(char *self);
typedef int (*Fn)(int, int, int *, int);
extern int func_0206df90(char *thiz, int *out);
extern void func_0206e030(char *self);
extern void func_0206e068(int a, int *b);
typedef struct S6e06c {
    int unk0;
    unsigned int b4a : 2;
    unsigned int b4b : 3;
    unsigned int b4gap : 2;
    unsigned int b4c : 3;
    unsigned int b4rest : 22;
    unsigned int b8 : 3;
    unsigned int b8rest : 29;
    unsigned char fc;
    unsigned char fd;
} S6e06c;
extern int func_02059544(S6e06c *p);
extern int func_0206e218(int a, int b);
extern void _ZN4cstd7strncpyEPcPKcj(char *d, const char *s, u32 n);
extern u32 func_0206e184(char *dst, u16 *src, u32 max);
extern void *data_0209a438[];
extern int func_0206e218(int a, int b);
extern int func_0206e240(unsigned char *p, unsigned char v);
extern int func_0206e254(unsigned short *dst, unsigned char *src, int flag);
extern int func_0206e28c(const u8 *a, const u8 *b, u32 n);
extern u8 *func_0206e2cc(u8 *p, int c, unsigned int n);
extern void func_0206e330(void *dst, int val, unsigned int n);
extern void *func_0206e2f8(void *dst, int val, unsigned int n);
extern void *func_0206e310(void *dst, const void *src, unsigned int n);
typedef struct {
    unsigned char justification_options;
    unsigned char sign_options;
    unsigned char precision_specified;
    unsigned char alternate_form;
    unsigned char argument_options;
    unsigned char conversion_char;
    char fill_char;
    char pad7;
    int field_width;
    int precision;
} print_format;
enum {
    only_minus   = 0,
    sign_always  = 1,
    space_holder = 2
};
enum {
    left_justification  = 0,
    right_justification = 1,
    zero_fill           = 2
};
enum {
    normal_argument = 0,
    char_argument,
    short_argument,
    long_argument,
    intmax_argument,
    size_t_argument,
    ptrdiff_argument,
    long_long_argument,
    long_double_argument,
    wchar_argument
};
extern unsigned char *func_0206fd6c(unsigned char *format_string, char **arg, print_format *format);
extern char *_ZN4cstd6strchrEPKcc(const char *s, char c);
extern unsigned int _ZN4cstd6strlenEPKc(const char *s);
extern int func_0206e450(char *obj, const void *src, unsigned int n);
extern int func_0206e4a4(int (*WriteProc)(void *, const char *, size_t), void *WriteProcArg, const unsigned char *format_str,
                         char *arg);
extern char *func_0206ece0(double x, char *buff_end, print_format format);
extern char *func_0206f46c(double x, char *buff_end, print_format format);
extern char *func_0206f820(long long num, char *buff_end, print_format format);
extern char *func_0206fb08(long num, char *buff_end, print_format format);
extern unsigned short data_0209a5e4[];
extern char data_0209a5e8[];
extern void func_0206e330(void *dst, int val, u32 n);
struct Ctx {
    char *buf;
    unsigned int len;
    int z;
};
extern unsigned int func_0206e3dc(char *buf, unsigned int len, unsigned int fmtAddr, unsigned int val);
extern int func_0206e450(char *obj, const void *src, unsigned int n);
extern int func_0206e4a4(int (*WriteProc)(void *, const char *, size_t), void *WriteProcArg, const unsigned char *format_str,
                         char *arg);
}
