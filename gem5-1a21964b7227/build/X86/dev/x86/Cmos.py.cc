#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Cmos[] = {
    120,156,189,82,219,110,211,64,16,157,205,173,73,84,65,127,
    0,201,170,132,106,42,145,109,34,146,148,10,85,148,242,194,
    75,84,37,121,160,126,177,150,245,164,49,177,189,150,119,83,
    146,231,242,223,48,179,78,196,31,224,203,232,156,227,241,206,
    153,217,213,112,184,78,232,253,28,0,216,25,129,132,30,1,
    27,128,229,1,137,26,53,96,211,128,172,9,81,19,4,243,
    38,108,90,144,181,33,106,19,111,1,54,97,37,32,105,195,
    111,128,23,128,199,168,3,73,7,22,33,175,157,254,161,43,
    20,132,28,135,203,26,190,162,240,69,217,84,63,164,230,43,
    62,167,26,107,253,53,133,239,215,147,111,133,91,152,109,165,
    241,33,45,92,139,180,251,220,88,125,180,220,228,159,217,242,
    29,1,4,136,4,27,143,26,236,152,28,146,219,136,60,181,
    33,237,176,83,242,247,66,202,137,87,186,128,93,182,72,94,
    89,236,193,124,17,118,104,149,57,175,105,79,15,213,23,119,
    55,55,92,209,178,157,4,159,229,238,122,34,53,9,131,245,
    218,246,73,187,26,74,122,70,87,195,145,189,36,186,216,91,
    135,121,224,210,28,3,103,130,173,197,32,188,152,153,95,23,
    193,202,84,129,210,110,171,50,255,245,157,125,75,233,212,20,
    167,217,244,169,32,125,190,188,15,84,166,170,60,160,94,177,
    170,182,165,179,244,57,228,58,174,75,33,142,11,149,99,28,
    187,190,39,185,73,182,25,83,158,139,219,151,232,122,4,244,
    110,23,235,76,89,235,179,152,173,81,37,88,185,54,23,84,
    149,202,125,254,146,76,212,63,18,152,55,24,248,77,42,92,
    92,166,69,200,211,253,23,236,35,5,185,74,51,180,165,210,
    40,75,52,101,134,82,75,109,178,44,45,108,46,81,227,116,
    60,149,101,101,126,162,118,76,99,230,79,152,143,223,15,213,
    104,248,113,242,225,199,116,52,154,74,91,105,121,28,36,79,
    118,80,238,253,200,207,185,12,31,134,142,168,239,30,221,167,
    98,230,143,142,111,44,31,15,74,182,111,253,44,152,85,102,
    183,119,188,105,245,193,153,139,99,106,125,112,104,186,190,49,
    191,254,127,237,200,59,252,84,239,207,237,27,46,199,66,95,
    244,197,153,56,107,252,5,119,231,197,109,
};

EmbeddedPython embedded_m5_objects_Cmos(
    "m5/objects/Cmos.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/src/dev/x86/Cmos.py",
    "m5.objects.Cmos",
    data_m5_objects_Cmos,
    507,
    882);

} // anonymous namespace
