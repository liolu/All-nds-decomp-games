void func_ov004_020b8df8(void *o);
extern char data_ov004_020cf550[];
extern void *data_ov004_020cfacc[3];
extern void *data_ov004_020cfad8;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd540(void) {
    func_ov004_020b8df8(&data_ov004_020cfacc[3]);
    data_ov004_020cfad8 = data_ov004_020cf550;
}
