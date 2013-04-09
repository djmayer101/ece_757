#include "sim/init.hh"

namespace {

const uint8_t data_m5_trace[] = {
    120,156,197,82,77,75,195,64,16,157,77,210,104,161,120,17,
    188,9,34,8,185,216,165,193,26,4,17,65,241,216,67,234,
    41,8,37,221,140,117,237,230,131,100,35,120,247,127,235,204,
    162,173,94,61,232,178,25,222,12,111,230,205,75,162,224,243,
    12,232,185,62,2,232,110,9,20,116,5,172,1,178,13,22,
    144,9,135,61,88,123,96,124,200,124,48,1,100,1,136,194,
    135,55,162,14,160,8,28,8,185,97,30,241,68,253,78,103,
    22,121,4,109,72,161,238,109,211,91,7,245,170,170,91,84,
    95,250,76,185,97,253,125,230,210,21,160,61,208,62,44,2,
    150,157,71,130,234,51,55,212,114,184,203,77,135,118,151,7,
    85,22,219,42,55,174,108,219,92,161,13,8,169,151,188,181,
    59,4,176,202,151,6,139,136,85,182,161,123,160,32,31,181,
    193,174,161,22,217,96,221,24,148,74,170,218,24,93,117,165,
    68,133,201,52,145,77,91,63,163,178,156,46,56,95,97,57,
    61,157,228,241,228,226,252,108,153,196,113,34,187,86,201,230,
    213,62,213,149,44,167,210,109,48,166,156,181,11,221,177,248,
    49,11,178,67,16,191,50,204,126,238,219,30,83,159,64,202,
    89,202,245,52,252,97,233,143,124,133,155,119,122,178,181,21,
    177,91,183,158,91,182,183,218,216,189,111,31,103,236,218,83,
    230,166,108,44,117,252,225,127,236,207,255,204,101,89,23,189,
    193,171,67,86,228,194,72,140,188,3,111,232,127,0,94,207,
    168,140,
};

EmbeddedPython embedded_m5_trace(
    "m5/trace.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/src/python/m5/trace.py",
    "m5.trace",
    data_m5_trace,
    338,
    784);

} // anonymous namespace