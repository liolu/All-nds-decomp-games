/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* _Z16unkfunc_02085fe4fff from https://github.com/GoldieLeGenie/DQIV-DECOMP src/main/dss/UnkPaletteEffect.cpp (license: none),
 * reused by tools/donor_match.py */
namespace dss {
    template <typename T> T max(T a, T b);
    template <typename T> T min(T a, T b);
} // namespace dss
extern float unkfunc_02085fe4(float value, float min, float max);
extern float unkfunc_02085ffc(float a, float b);
extern float unkfunc_02086018(float a, float b);
#pragma thumb off
float unkfunc_02085fe4(float value, float min, float max) {
    return unkfunc_02086018(unkfunc_02085ffc(value, min), max);
}
float unkfunc_02085ffc(float a, float b);
float unkfunc_02086018(float a, float b);
