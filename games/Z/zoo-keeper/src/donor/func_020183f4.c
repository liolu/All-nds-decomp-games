/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* TouchRegionManager_Destroy from https://github.com/SHOEGAZEssb/Rosy-Rupeeland-Decomp src/system/touch_region.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct RectS16 {
    s16 left;
    s16 top;
    s16 right;
    s16 bottom;
} RectS16;
typedef struct TouchRegion TouchRegion;
typedef struct TouchRegionVTable {
    TouchRegion *(*destroy)(TouchRegion *region);
    TouchRegion *(*destroyAndFree)(TouchRegion *region);
    void (*tick)(TouchRegion *region);
    void (*beginPress)(TouchRegion *region);
    void (*endPress)(TouchRegion *region);
    void (*notify)(TouchRegion *region, s32 value);
} TouchRegionVTable;
struct TouchRegion {
    const TouchRegionVTable *vtable;
    s32 value;
    s32 pressState;
    u32 flags;
    s32 countdown;
    RectS16 bounds;
};
typedef struct TouchRegionArray {
    TouchRegion **items;
    s32 capacity;
} TouchRegionArray;
typedef struct TouchRegionManager {
    const void *vtable;
    TouchRegionArray regions;
    s32 count;
    u32 flags;
} TouchRegionManager;
extern TouchRegionArray *func_0200a794(TouchRegionArray *array);
extern TouchRegionManager *func_020183f4(TouchRegionManager *manager);
extern void func_02018240(TouchRegionManager *manager);
extern const void *data_02061c74[];
TouchRegionArray *func_0200a794(TouchRegionArray *array);
TouchRegionManager *func_020183f4(TouchRegionManager *manager) {
    manager->vtable = data_02061c74;
    func_02018240(manager);
    func_0200a794(&manager->regions);
    return manager;
}
void func_02018240(TouchRegionManager *manager);
