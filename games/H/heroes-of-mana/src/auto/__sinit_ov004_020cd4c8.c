void func_ov004_020b8df8(void *o);
extern char data_ov004_020cf484[];
extern void *data_ov004_020cfaa8[3];
extern void *data_ov004_020cfab4;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd4c8(void) {
    func_ov004_020b8df8(&data_ov004_020cfaa8[3]);
    data_ov004_020cfab4 = data_ov004_020cf484;
}
