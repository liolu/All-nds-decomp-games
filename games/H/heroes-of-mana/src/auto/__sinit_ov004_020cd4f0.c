void func_ov004_020b8df8(void *o);
extern char data_ov004_020cf4b8[];
extern void *data_ov004_020cfab4[3];
extern void *data_ov004_020cfac0;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd4f0(void) {
    func_ov004_020b8df8(&data_ov004_020cfab4[3]);
    data_ov004_020cfac0 = data_ov004_020cf4b8;
}
