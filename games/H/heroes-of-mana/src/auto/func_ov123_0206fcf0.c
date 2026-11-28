/* compiler: 1.2/sp2p3 */
extern int func_0200fa98(void);
extern void func_0200faac(int);
extern volatile unsigned data_ov123_020df200;
extern unsigned short *data_ov123_020df228;
extern volatile unsigned data_ov123_020df22c;
void func_ov123_0206fcf0(void) {
    int irq             = func_0200fa98();
    data_ov123_020df200 = data_ov123_020df200 + *(unsigned short *) ((char *) data_ov123_020df228 + data_ov123_020df200);
    if (data_ov123_020df200 >= data_ov123_020df22c) {
        data_ov123_020df200 = 0;
    }
    func_0200faac(irq);
}
