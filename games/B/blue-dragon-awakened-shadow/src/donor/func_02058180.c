/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_HandleNNResult from https://github.com/Project-Holon/aletheia src/game/ov009/dwc_match.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
enum E {
    E_OK,
    E_A,
    E_B,
    E_C,
    E_D,
    E_E,
    E_NET
};
extern void func_02052cec(int error, int errorCode);
extern int func_02058180(int result);
void func_02052cec(int error, int errorCode);
int func_02058180(int result) {
    enum E dwcError;

    if (result == 0) {
        return 0;
    }
    switch (result) {
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 3;
        default:
            dwcError = E_NET;
            break;
    }
    if (dwcError != E_OK) {
        func_02052cec(dwcError, -86009);
    }
    return result;
}
