#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Prefetcher[] = {
    120,156,205,89,109,111,219,200,17,158,37,245,98,201,150,44,
    249,221,121,185,240,218,75,33,180,73,212,248,46,241,181,13,
    130,107,239,238,195,125,241,165,244,1,113,116,5,8,154,92,
    73,116,36,146,32,215,201,233,96,127,169,131,182,127,166,127,
    161,191,165,255,164,157,153,37,105,218,177,17,3,45,16,217,
    230,98,57,220,157,221,153,121,230,101,215,30,100,63,109,124,
    190,178,0,210,31,4,128,143,127,2,94,3,76,4,12,4,
    8,41,192,95,133,163,42,68,219,32,252,42,188,3,24,24,
    32,13,56,195,142,9,63,26,16,182,240,3,206,170,193,107,
    147,73,2,102,77,144,21,24,84,225,101,184,10,21,89,131,
    163,38,68,117,16,248,19,26,32,14,252,58,248,11,240,14,
    87,192,78,131,121,46,128,223,228,78,3,252,69,238,52,97,
    214,1,185,8,131,37,192,241,131,22,50,123,128,204,218,204,
    204,98,102,62,126,90,3,191,69,227,113,63,175,104,104,133,
    134,234,85,218,204,103,25,178,221,117,96,208,201,251,93,24,
    116,243,254,10,12,86,192,95,6,217,129,96,21,134,40,112,
    167,96,184,6,210,132,96,29,6,235,32,241,111,13,206,80,
    39,126,151,199,110,240,216,149,98,236,38,143,221,130,193,22,
    72,252,219,212,99,107,176,223,91,71,13,7,255,193,159,30,
    106,24,212,18,54,111,100,146,6,81,232,4,225,48,10,12,
    250,94,163,134,236,225,81,83,199,167,133,207,215,100,152,127,
    2,91,197,55,50,195,156,2,50,22,180,255,215,6,156,114,
    231,212,128,89,15,78,4,4,21,240,77,56,193,101,170,180,
    129,145,128,51,3,254,98,210,128,83,108,43,168,70,11,42,
    74,219,100,77,171,81,179,170,195,105,21,78,170,176,47,14,
    78,12,162,28,53,32,234,131,248,249,14,243,93,96,190,6,
    156,96,91,129,179,10,156,214,224,37,142,66,82,208,32,13,
    224,52,20,150,176,176,223,171,224,142,247,74,34,147,56,126,
    144,132,238,84,170,46,246,157,216,77,220,169,243,34,145,67,
    169,188,177,76,122,205,124,88,148,62,138,93,53,182,121,158,
    73,74,153,198,138,249,69,161,84,139,216,25,6,161,239,76,
    35,255,120,34,213,2,49,115,134,193,68,58,14,127,252,110,
    26,71,137,250,54,73,162,196,38,189,50,113,18,185,197,140,
    42,169,120,18,165,178,71,171,241,50,54,177,87,52,122,24,
    51,71,218,0,239,149,38,251,50,245,146,32,86,104,46,205,
    145,70,19,183,30,25,138,155,244,13,54,125,218,69,26,187,
    158,236,199,50,138,39,178,239,245,189,104,50,9,194,116,218,
    151,158,220,125,178,219,143,147,232,72,122,138,94,29,122,31,
    201,233,147,135,143,221,157,199,191,123,250,197,225,238,206,206,
    110,255,240,56,152,248,253,131,47,159,246,227,153,26,71,97,
    127,250,164,31,132,74,162,238,38,253,203,90,123,132,99,86,
    104,253,183,193,200,9,88,114,103,44,39,177,76,26,68,189,
    69,123,19,29,177,36,106,194,20,61,209,230,94,11,251,119,
    140,69,177,23,144,236,30,233,131,176,103,230,104,251,23,176,
    81,17,21,71,6,68,93,16,39,12,76,28,141,166,71,72,
    237,11,250,106,240,215,7,32,148,145,209,3,147,16,66,212,
    21,156,195,24,68,48,226,216,103,4,9,17,162,55,16,142,
    170,4,117,13,48,68,166,134,92,212,198,111,85,154,65,172,
    12,90,162,2,75,113,7,185,47,48,213,32,42,239,165,204,
    55,68,130,106,144,207,35,109,3,183,240,87,70,242,126,143,
    100,218,99,52,169,113,144,70,111,67,182,25,245,217,249,246,
    81,93,47,102,223,31,146,41,210,123,72,120,21,29,91,158,
    27,134,145,178,92,223,183,92,165,146,224,240,88,201,212,82,
    145,117,63,101,112,218,221,28,144,5,191,89,156,3,144,192,
    130,0,212,47,126,224,41,124,89,229,23,54,77,42,21,130,
    105,28,249,41,210,137,197,72,42,187,154,35,126,236,166,180,
    162,162,64,252,199,124,105,70,112,175,150,227,45,149,147,161,
    106,50,116,221,52,117,120,105,162,51,74,137,211,27,119,114,
    44,21,141,79,149,171,112,7,212,213,139,206,7,78,183,72,
    29,185,54,72,94,39,140,66,127,134,2,4,222,167,180,183,
    45,70,107,11,186,136,208,13,124,26,98,93,212,161,45,182,
    68,215,240,72,214,74,134,84,70,233,6,105,6,24,28,34,
    11,75,136,216,51,12,95,61,131,131,15,11,205,222,77,220,
    57,34,217,183,169,185,67,205,93,106,62,201,245,242,209,149,
    211,186,172,156,71,180,33,131,53,226,153,153,236,133,135,218,
    23,60,180,93,242,208,51,242,52,242,50,131,220,241,220,203,
    76,210,79,180,152,251,15,123,49,194,134,252,234,220,107,88,
    111,118,135,244,81,203,1,111,19,138,203,80,30,149,160,108,
    147,201,24,199,246,173,235,116,108,205,161,142,71,90,199,143,
    105,67,75,25,234,218,140,182,69,225,17,100,72,19,245,92,
    219,223,96,103,182,73,218,46,171,121,19,243,238,75,170,125,
    48,127,114,18,198,248,118,160,51,111,166,124,221,169,16,62,
    135,38,108,100,73,49,165,200,140,210,253,52,179,162,161,165,
    32,223,195,179,251,233,163,251,233,31,48,218,88,207,57,126,
    233,120,163,35,74,34,227,4,35,71,131,95,116,4,112,56,
    26,56,89,86,67,91,80,145,193,38,100,11,112,96,73,49,
    168,96,204,155,15,245,55,11,245,147,52,187,180,155,38,235,
    222,132,77,124,154,130,183,236,68,28,149,185,6,226,175,248,
    252,137,172,64,138,144,64,53,169,189,175,5,98,89,73,106,
    187,119,1,99,31,91,82,251,55,184,244,87,185,255,214,160,
    64,20,61,38,201,66,238,244,119,224,242,81,192,223,128,208,
    131,32,201,28,144,221,61,119,249,85,26,78,202,56,17,87,
    38,100,35,115,101,35,11,132,232,235,113,139,243,108,150,160,
    177,194,251,71,41,74,158,153,32,56,107,154,89,149,88,206,
    154,149,194,255,25,123,55,202,140,149,11,129,194,222,46,98,
    129,89,196,130,243,80,91,148,116,24,228,62,182,149,216,179,
    112,31,14,137,244,237,57,26,41,255,220,21,107,70,9,99,
    15,168,121,88,192,75,228,180,143,185,251,123,112,125,54,117,
    116,128,166,184,149,86,88,168,229,26,187,223,57,139,194,191,
    170,185,127,237,20,254,37,57,107,188,227,35,7,181,6,65,
    229,204,16,120,182,195,74,139,142,84,21,144,85,24,212,200,
    19,185,154,22,153,163,138,60,100,82,168,189,144,147,74,218,
    44,192,162,225,64,205,79,115,225,183,140,136,103,19,119,122,
    232,187,207,41,197,166,180,33,47,247,92,35,23,174,83,22,
    142,124,78,92,35,31,191,254,54,23,242,205,92,8,105,83,
    210,43,132,99,103,244,35,143,35,210,15,99,105,77,229,244,
    16,79,166,227,32,182,134,19,119,196,150,53,51,225,191,207,
    133,87,12,141,203,133,67,250,107,106,35,203,139,66,204,59,
    199,158,138,18,203,151,120,86,147,190,245,208,226,164,101,5,
    169,229,30,226,87,215,83,218,141,46,134,10,174,104,221,100,
    148,114,241,250,250,45,117,231,66,107,89,26,14,194,0,11,
    251,253,92,123,250,0,89,100,32,174,223,181,79,226,14,240,
    12,166,102,58,152,62,165,134,180,99,255,10,230,42,81,245,
    113,233,63,211,30,72,221,53,113,27,75,110,213,185,16,39,
    94,208,172,244,253,104,241,239,155,68,11,125,7,148,197,140,
    26,141,148,117,186,71,160,182,65,169,106,208,204,137,139,220,
    46,49,177,149,19,219,220,46,51,177,147,19,187,220,174,48,
    113,53,39,174,113,187,206,196,141,156,184,201,237,22,19,183,
    115,226,45,110,111,51,241,14,100,23,90,119,153,248,9,12,
    238,209,133,16,81,44,138,109,245,255,49,182,177,239,207,135,
    165,201,235,95,253,63,67,154,189,51,159,178,217,159,67,86,
    96,93,23,206,68,89,240,150,14,103,129,200,79,69,108,184,
    61,45,39,95,246,108,94,225,15,142,151,72,87,73,109,228,
    219,243,162,8,14,154,122,103,63,22,166,206,165,173,230,18,
    239,22,18,159,113,225,57,91,43,29,89,216,242,226,101,216,
    161,99,205,9,43,197,49,244,201,6,10,221,84,10,221,172,
    97,19,202,183,206,101,253,232,163,11,109,199,141,99,25,250,
    231,199,18,254,50,23,218,226,168,76,129,45,171,251,150,240,
    12,178,134,207,251,14,79,242,150,196,103,163,87,11,31,159,
    27,243,179,31,140,115,195,247,232,210,227,60,55,217,100,118,
    157,141,138,68,100,255,190,48,164,117,21,200,143,41,219,161,
    40,184,36,157,152,63,60,8,43,81,190,48,45,209,174,158,
    20,30,79,29,172,2,36,245,175,229,92,30,148,115,46,209,
    184,2,190,194,49,35,60,27,199,238,72,50,227,15,141,33,
    190,124,169,86,144,212,47,174,154,18,15,157,152,4,228,165,
    153,243,13,134,17,115,138,47,23,168,234,211,171,38,98,69,
    20,132,206,52,72,83,169,53,242,225,81,196,157,238,13,202,
    68,245,217,245,138,116,19,117,28,227,14,53,255,27,13,164,
    37,150,11,173,23,116,245,203,43,39,71,225,101,192,220,100,
    28,173,65,117,211,69,50,59,39,135,94,95,78,164,146,239,
    69,24,46,83,178,27,41,31,5,79,162,153,227,232,11,4,
    124,159,56,206,28,85,89,95,226,210,7,144,93,199,83,149,
    85,227,171,205,242,111,163,210,16,92,6,95,250,87,144,22,
    128,14,213,250,216,60,227,171,63,176,151,11,207,229,255,86,
    228,213,38,199,118,186,36,218,115,167,250,2,153,239,62,109,
    2,171,253,89,238,252,28,152,245,53,11,95,85,232,107,37,
    140,227,92,163,115,73,110,211,245,35,219,94,11,180,31,76,
    245,109,57,95,53,251,4,57,158,149,202,36,112,39,193,207,
    146,223,138,81,92,88,94,202,156,108,171,68,142,130,148,194,
    194,114,121,120,150,52,72,79,234,238,85,152,41,79,157,31,
    195,234,243,162,190,127,123,206,215,109,207,176,233,208,205,245,
    114,67,212,13,204,40,248,219,20,109,81,21,75,173,134,217,
    168,53,170,38,26,159,40,171,98,209,108,52,151,4,253,110,
    163,241,155,198,118,183,33,254,11,127,83,241,24,
};

EmbeddedPython embedded_m5_internal_param_Prefetcher(
    "m5/internal/param_Prefetcher.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/build/X86/python/m5/internal/param_Prefetcher.py",
    "m5.internal.param_Prefetcher",
    data_m5_internal_param_Prefetcher,
    2301,
    7571);

} // anonymous namespace