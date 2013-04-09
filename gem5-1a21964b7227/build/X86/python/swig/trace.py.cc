#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_trace[] = {
    120,156,197,87,219,110,219,70,16,157,37,41,217,146,44,249,
    150,56,151,38,141,90,52,128,208,38,86,19,36,113,139,6,
    65,122,9,138,190,56,5,245,16,199,45,64,200,228,90,166,
    35,115,9,114,157,84,133,253,82,7,109,31,250,43,253,133,
    254,90,59,103,72,202,74,208,0,69,31,108,217,187,88,206,
    46,103,103,206,158,153,89,134,84,254,154,220,30,119,137,242,
    154,34,138,248,95,209,11,162,177,162,109,69,74,43,138,150,
    105,191,70,230,10,169,168,70,175,137,182,29,210,14,157,240,
    192,165,31,28,74,218,60,193,111,213,233,133,43,34,69,147,
    38,105,143,182,107,244,44,89,37,79,215,105,191,73,102,142,
    20,255,18,135,212,86,52,71,209,60,189,230,29,120,208,16,
    157,243,20,53,101,208,160,168,37,131,38,77,150,72,183,104,
    123,129,120,253,118,155,149,221,98,101,29,81,214,21,101,17,
    79,173,80,212,198,122,182,231,57,150,122,88,90,236,210,17,
    61,139,20,45,202,128,181,185,20,47,97,16,45,137,100,89,
    36,203,213,96,133,182,87,224,199,160,183,202,144,196,127,243,
    175,199,144,144,93,224,238,165,206,242,216,36,65,156,236,154,
    216,193,124,29,29,0,12,209,205,113,107,115,251,26,72,254,
    73,2,99,228,148,72,30,19,99,164,0,238,11,135,142,101,
    112,236,208,164,71,71,138,98,143,34,151,142,120,155,26,157,
    40,26,41,58,113,232,71,23,11,142,185,247,216,239,46,121,
    182,0,241,66,225,119,161,106,142,142,107,116,84,163,129,218,
    58,114,32,217,111,144,233,147,250,249,154,232,157,23,189,14,
    29,113,239,209,137,71,199,117,122,198,171,88,20,55,128,23,
    191,198,206,226,240,6,61,143,45,222,156,113,25,238,68,113,
    150,12,15,180,133,163,129,205,134,161,238,53,171,57,147,175,
    167,67,187,231,203,98,23,72,28,164,86,148,152,68,219,22,
    15,118,227,36,10,14,76,116,56,214,118,30,26,130,221,120,
    172,131,64,38,191,59,72,77,102,159,100,153,201,124,128,41,
    194,177,25,78,223,168,1,215,177,201,117,15,187,201,54,62,
    212,91,172,222,77,69,35,12,16,3,241,114,164,243,48,139,
    83,203,103,84,104,196,106,104,235,225,116,164,203,217,83,234,
    195,138,60,101,103,250,169,54,233,88,247,195,126,104,198,227,
    56,201,15,250,58,212,27,247,55,250,105,102,246,117,104,241,
    24,224,121,164,15,238,223,190,51,188,123,231,243,7,247,118,
    54,238,222,221,232,239,28,198,227,168,191,245,217,131,126,58,
    177,123,38,233,231,175,226,81,95,48,90,103,201,10,118,99,
    73,16,139,159,193,158,30,167,58,107,64,122,21,150,168,37,
    181,160,234,202,85,61,213,145,81,155,199,215,156,150,218,140,
    225,105,8,239,129,186,91,17,234,47,146,115,227,131,223,119,
    200,44,147,58,18,238,241,106,62,93,102,205,64,97,214,145,
    217,91,164,172,83,202,99,23,36,128,116,133,223,17,154,49,
    223,120,237,67,156,186,74,56,194,65,149,26,216,92,112,136,
    201,87,176,202,116,120,174,134,55,160,202,193,22,30,45,164,
    75,172,125,94,164,14,164,98,203,172,222,132,5,182,129,56,
    100,217,26,155,240,139,144,117,208,131,79,155,194,29,187,23,
    231,230,85,34,39,132,177,196,215,128,225,250,126,242,116,7,
    192,231,55,88,240,220,28,118,195,97,146,24,219,29,70,81,
    119,104,109,22,239,28,90,157,119,173,233,222,204,133,138,254,
    114,69,191,169,190,73,90,209,13,212,96,186,21,15,81,28,
    90,126,88,149,7,57,154,92,91,166,206,158,137,114,150,67,
    197,72,91,191,86,241,123,111,152,99,71,219,225,241,151,213,
    214,194,215,94,189,98,87,174,199,187,182,41,68,29,230,121,
    32,91,67,46,156,132,166,151,195,241,97,17,62,185,29,90,
    182,0,195,98,211,243,96,229,101,56,95,249,14,239,130,196,
    36,209,132,205,141,195,15,96,201,101,225,102,155,150,153,143,
    107,220,26,234,162,154,163,142,186,172,150,157,16,158,121,37,
    47,133,147,107,192,129,132,10,170,204,51,204,207,19,206,71,
    61,71,178,137,184,40,145,11,237,146,98,252,247,208,93,67,
    119,29,221,251,21,10,103,12,69,251,109,40,214,177,189,35,
    254,135,110,233,233,52,250,252,55,162,175,51,19,125,39,136,
    34,68,144,131,80,59,141,32,23,104,152,86,21,27,18,161,
    76,9,196,204,105,68,8,74,254,18,188,175,87,100,246,193,
    208,89,154,142,102,104,234,227,128,132,163,254,213,119,33,218,
    61,119,68,71,5,162,119,176,253,66,201,168,142,48,169,165,
    66,208,1,126,207,85,216,126,195,131,201,37,96,59,11,234,
    37,46,146,207,112,179,224,98,39,21,147,51,213,86,81,38,
    75,168,139,129,7,238,237,186,180,86,86,176,28,57,150,125,
    249,105,210,53,187,93,75,149,13,15,111,230,235,55,243,47,
    56,111,116,31,73,38,42,50,71,145,27,50,157,102,156,3,
    26,242,80,196,114,32,113,29,148,213,136,145,191,8,68,157,
    10,111,73,17,57,167,7,206,94,231,1,118,115,10,54,108,
    223,192,222,77,65,218,165,75,220,154,74,12,12,140,100,83,
    185,158,200,44,183,175,128,57,220,214,132,251,157,63,40,204,
    23,207,224,163,223,123,131,63,103,235,151,255,9,111,244,184,
    138,196,58,77,217,130,230,194,114,4,198,111,124,1,80,32,
    204,175,4,102,48,1,202,80,146,192,173,130,119,21,203,225,
    250,145,250,215,178,233,148,65,233,148,9,140,163,54,109,75,
    53,44,203,40,95,181,126,159,201,110,39,46,41,169,109,110,
    121,93,155,173,109,222,52,146,133,87,255,169,126,121,111,132,
    188,127,101,26,213,238,52,170,79,83,228,244,154,197,233,234,
    140,185,54,95,236,26,192,129,39,167,76,67,149,184,174,46,
    56,51,252,185,133,238,246,148,58,170,146,157,157,173,55,232,
    221,21,46,40,210,40,242,77,238,137,11,139,245,176,10,11,
    216,255,45,24,131,52,102,11,134,16,253,129,179,197,244,102,
    225,160,220,43,145,170,205,161,77,15,109,113,42,208,53,204,
    70,231,145,7,252,62,111,244,148,78,43,215,255,116,39,30,
    37,38,211,197,129,125,122,78,161,143,114,49,56,117,69,162,
    224,173,239,172,194,172,213,105,40,76,164,48,147,191,56,117,
    70,190,10,50,195,119,109,59,145,171,91,65,134,169,8,41,
    126,147,111,103,197,135,7,110,37,254,135,232,62,66,247,241,
    244,116,37,109,74,50,42,138,66,162,95,73,89,144,248,244,
    113,85,16,228,197,102,57,255,240,229,48,59,175,164,41,78,
    63,44,10,213,35,169,75,247,184,91,194,245,109,177,161,230,
    156,5,254,180,112,85,147,63,52,106,106,161,221,112,27,245,
    70,205,229,79,14,72,86,85,203,109,180,26,78,241,247,15,
    211,175,98,31,
};

EmbeddedPython embedded_m5_internal_trace(
    "m5/internal/trace.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/build/X86/python/swig/trace.py",
    "m5.internal.trace",
    data_m5_internal_trace,
    1540,
    4114);

} // anonymous namespace
