#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_E820[] = {
    120,156,197,83,75,111,211,64,16,30,59,239,148,67,137,4,
    7,78,62,161,20,137,108,27,53,15,42,132,104,165,30,138,
    84,64,78,65,144,139,229,216,147,100,169,95,218,93,164,132,
    107,248,223,48,179,169,211,22,129,196,173,126,140,102,190,217,
    221,249,118,30,17,220,60,53,250,223,122,0,250,29,41,49,
    125,14,92,3,92,177,230,194,181,3,137,11,83,23,156,184,
    2,232,194,220,129,184,10,63,1,54,0,95,167,21,136,107,
    37,90,223,161,85,136,27,48,233,54,233,56,249,139,158,174,
    67,154,97,241,98,171,182,72,76,100,250,97,246,13,35,99,
    30,145,245,101,60,60,31,247,15,207,51,163,214,81,73,172,
    66,255,25,19,187,36,5,1,166,14,211,35,46,196,144,67,
    19,175,42,96,13,100,29,136,28,209,218,16,210,176,72,147,
    137,17,37,70,90,22,105,51,169,13,109,220,3,127,203,205,
    119,73,232,199,219,232,23,147,211,147,147,29,5,253,132,208,
    80,69,75,177,26,15,197,76,230,90,32,249,122,203,165,100,
    98,250,57,187,227,88,161,214,94,62,247,204,18,189,25,46,
    100,150,201,108,81,2,138,128,60,51,28,228,240,76,119,120,
    155,252,129,247,189,22,54,235,226,15,184,203,41,49,204,49,
    8,178,48,197,32,48,109,107,164,121,252,61,97,179,122,179,
    207,166,50,90,173,130,40,9,181,182,171,216,90,98,24,163,
    50,92,217,143,161,10,83,187,254,148,8,91,133,153,219,165,
    151,152,230,106,61,33,90,22,103,126,166,78,202,167,139,204,
    12,143,237,18,21,102,11,12,56,84,151,111,126,43,116,64,
    66,204,101,130,186,8,35,20,5,230,69,130,34,18,81,158,
    36,50,211,169,192,8,71,131,145,40,84,206,101,102,51,96,
    123,129,233,224,229,81,216,63,122,53,60,158,141,250,253,145,
    208,42,18,247,147,205,133,232,21,107,91,161,3,14,198,9,
    169,59,246,117,59,78,199,185,219,52,87,225,44,193,93,211,
    184,101,211,28,252,79,211,112,67,52,184,33,248,254,254,254,
    223,26,194,30,255,239,134,208,207,56,14,53,141,68,237,205,
    115,101,203,200,62,207,240,198,109,167,217,211,185,26,62,167,
    215,111,176,96,135,217,35,241,153,178,147,43,91,39,123,97,
    211,184,61,241,33,146,206,89,232,115,176,230,157,164,191,239,
    214,202,201,77,7,189,130,201,106,91,4,178,118,163,236,59,
    229,88,217,67,30,128,188,29,154,215,219,49,121,195,83,170,
    57,225,109,103,223,125,218,250,13,223,178,25,14,
};

EmbeddedPython embedded_m5_objects_E820(
    "m5/objects/E820.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/src/arch/x86/bios/E820.py",
    "m5.objects.E820",
    data_m5_objects_E820,
    573,
    1265);

} // anonymous namespace