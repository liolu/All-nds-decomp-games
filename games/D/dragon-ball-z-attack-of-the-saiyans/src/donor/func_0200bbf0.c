/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a7380 from https://github.com/banatic/acww-decomp src/main/func_020a7380.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef struct {
    int unk_00;
} Entry;
extern Entry data_020af144[];
extern void func_0208b8dc(Entry *entry, int arg);
void func_0200bbf0(int index, int arg) {
    func_0208b8dc(&data_020af144[index], arg);
}
