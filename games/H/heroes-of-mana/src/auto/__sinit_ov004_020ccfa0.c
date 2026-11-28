void func_ov004_020b8df8(void *o);
extern char data_ov004_020cdf50[];
extern void *data_ov004_020cf914[3];
extern void *data_ov004_020cf920;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020ccfa0(void) {
    func_ov004_020b8df8(&data_ov004_020cf914[3]);
    data_ov004_020cf920 = data_ov004_020cdf50;
}
