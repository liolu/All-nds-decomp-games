void func_ov004_020b8df8(void *o);
extern char data_ov004_020cf51c[];
extern void *data_ov004_020cfac0[3];
extern void *data_ov004_020cfacc;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd518(void) {
    func_ov004_020b8df8(&data_ov004_020cfac0[3]);
    data_ov004_020cfacc = data_ov004_020cf51c;
}
