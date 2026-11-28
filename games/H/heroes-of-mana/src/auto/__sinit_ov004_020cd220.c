void func_ov004_020b8df8(void *o);
extern char data_ov004_020ced8c[];
extern void *data_ov004_020cf9dc[3];
extern void *data_ov004_020cf9e8;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd220(void) {
    func_ov004_020b8df8(&data_ov004_020cf9dc[3]);
    data_ov004_020cf9e8 = data_ov004_020ced8c;
}
