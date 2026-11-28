void func_ov004_020b8df8(void *o);
extern char data_ov004_020cde0c[];
extern void *data_ov004_020cf908[3];
extern void *data_ov004_020cf914;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020ccf78(void) {
    func_ov004_020b8df8(&data_ov004_020cf908[3]);
    data_ov004_020cf914 = data_ov004_020cde0c;
}
