#ifndef PRINT_FEATURE
#define PRINT_FEATURE

namespace cura
{

enum class PrintFeatureType: int8_t
{
    NoneType, // unused, but libArcus depends on it
    OuterWall,
    InnerWall,
    Skin,
    Support,
    Skirt,
    Infill,
    SupportInfill,
    MoveCombing,
    MoveRetraction
};




} // namespace cura

#endif // PRINT_FEATURE
