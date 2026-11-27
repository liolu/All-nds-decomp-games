/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0206c43c from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/jpn/main/func_0206c43c.legacy.c (license: MIT),
 * reused by tools/donor_match.py */
struct S0206c4b0_obj {
    unsigned char pad_00[0xf8];
    int field_f8;
};
struct S0206c4b0_ctx {
    unsigned char pad_00[0x64];
    struct S0206c4b0_obj *field_64;
    unsigned char pad_68[0x70 - 0x68];
    short field_70;
};
struct S0206c4b0 {
    unsigned char pad_00[0x4];
    struct S0206c4b0_ctx *field_4;
    unsigned char pad_08[0x10 - 0x08];
    unsigned short field_10;
    unsigned char pad_12[0x14 - 0x12];
    unsigned short *field_14;
    int *field_18;
};
extern void func_020d2618(void *mutex);
extern void func_020a68d0(int a0, int a1, int a2);
extern void func_020a69f8(void);
extern int func_020a6b24(unsigned short *out1, int *out2);
extern void func_020d269c(void *mutex);
int func_020a1318(struct S0206c4b0 *a) {
    struct S0206c4b0_ctx *ctx = a->field_4;
    struct S0206c4b0_obj *obj = ctx->field_64;
    unsigned short local1;
    int local2;
    int result;

    func_020d2618((char *) obj + 0xe0);
    func_020a68d0(a->field_10, 0, 0);
    func_020a69f8();
    obj->field_f8 = 0;
    result        = func_020a6b24(&local1, &local2);
    *a->field_14  = local1;
    *a->field_18  = result;
    ctx->field_70 |= 4;
    func_020d269c((char *) obj + 0xe0);
    return 0;
}
