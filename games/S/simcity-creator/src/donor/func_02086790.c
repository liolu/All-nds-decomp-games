/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a8f74 from https://github.com/banatic/acww-decomp src/main/func_020a8f74.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
struct UnkStruct_020a8f74;
struct VTable {
    void *unk_00;
    void *p1;
    void *p2;
    int (*func)(struct UnkStruct_020a8f74 *);
};
struct UnkStruct_020a8f74 {
    struct VTable *vtable;
};
extern void func_0208680c(int value);
void func_02086790(struct UnkStruct_020a8f74 *obj) {
    func_0208680c(obj->vtable->func(obj));
}
