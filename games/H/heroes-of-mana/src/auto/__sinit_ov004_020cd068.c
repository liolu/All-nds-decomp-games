void func_ov004_020b8df8(void *o);
extern char data_ov004_020ce42c[];
extern void *data_ov004_020cf950[3];
extern void *data_ov004_020cf95c;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd068(void) {
    func_ov004_020b8df8(&data_ov004_020cf950[3]);
    data_ov004_020cf95c = data_ov004_020ce42c;
}
