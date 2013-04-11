#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_GHBPrefetcher[] = {
    120,156,205,88,235,111,219,200,17,159,37,41,217,146,45,91,
    126,196,175,56,23,94,209,20,66,155,68,141,219,196,215,54,
    8,46,185,30,218,2,23,95,64,23,72,142,87,128,165,201,
    149,76,91,34,5,114,157,156,14,246,151,58,104,251,207,244,
    91,63,247,95,107,103,102,185,180,148,216,192,1,45,80,201,
    230,98,185,187,156,157,199,111,30,187,17,148,191,13,124,62,
    119,1,138,127,10,128,24,255,5,156,2,12,4,248,2,132,
    20,16,175,193,73,13,178,109,16,113,13,222,3,248,22,72,
    11,46,177,99,195,183,22,164,45,156,192,175,234,112,106,243,
    144,128,113,19,164,3,126,13,94,167,107,224,200,58,156,52,
    33,155,3,129,191,212,2,241,38,158,131,120,30,222,227,14,
    216,105,48,205,121,136,155,220,105,64,188,192,157,38,140,219,
    32,23,192,95,4,92,239,183,144,216,125,36,182,196,196,92,
    38,22,227,212,58,196,45,90,143,252,124,67,75,29,90,170,
    119,89,98,58,203,80,114,215,6,191,109,250,43,224,175,152,
    254,42,248,171,166,191,6,254,154,233,175,131,191,110,250,183,
    192,191,101,250,27,224,111,152,254,38,248,155,166,191,5,254,
    150,233,111,131,191,109,250,59,224,239,64,188,12,178,13,201,
    109,232,161,66,219,21,195,187,32,109,72,238,128,127,7,36,
    254,239,194,37,234,60,94,225,181,159,240,218,213,106,237,93,
    94,235,130,239,130,196,255,187,122,109,29,14,59,183,208,130,
    201,191,241,215,65,11,130,90,196,230,173,204,139,36,75,131,
    36,237,101,137,69,243,117,106,200,222,17,53,115,248,180,240,
    249,130,12,255,15,96,171,199,86,105,248,11,64,194,130,248,
    63,181,224,130,59,23,22,140,59,112,46,32,113,32,182,225,
    28,183,169,17,3,125,1,151,22,252,201,166,5,23,216,58,
    104,38,23,28,165,109,190,174,205,164,73,205,193,69,13,206,
    107,112,40,222,156,91,52,114,210,128,172,11,226,251,93,166,
    59,207,116,45,56,199,214,129,75,7,46,234,240,26,87,225,
    80,210,32,13,224,103,40,44,97,237,176,227,32,199,7,19,
    34,147,56,113,146,167,225,80,170,117,236,7,163,48,15,135,
    193,239,126,255,226,85,46,123,82,69,199,50,239,52,205,202,
    172,120,56,10,213,177,199,159,218,164,151,225,72,49,201,44,
    149,106,1,59,189,36,141,131,97,22,159,13,164,154,39,122,
    65,47,25,200,32,224,201,63,12,71,89,174,190,204,243,44,
    247,72,181,60,56,200,194,234,139,26,105,121,144,21,178,67,
    187,241,54,30,145,87,180,186,55,98,138,196,0,179,75,31,
    199,178,136,242,100,164,208,98,154,34,173,38,106,29,178,21,
    55,197,24,155,46,113,81,140,194,72,118,71,50,27,13,100,
    55,234,70,217,96,144,164,197,176,43,35,185,255,120,191,59,
    202,179,19,25,41,122,13,232,189,47,135,143,31,60,10,247,
    30,253,234,201,47,143,246,247,246,246,187,71,103,201,32,238,
    190,249,236,73,119,52,86,199,89,218,29,62,238,38,169,146,
    168,190,65,247,26,197,61,196,101,171,196,194,187,164,31,36,
    44,124,112,44,7,35,153,55,104,116,135,216,19,109,177,40,
    234,194,22,29,177,196,189,22,246,119,173,5,113,144,144,248,
    17,169,132,16,104,27,204,253,11,216,180,136,141,19,11,178,
    21,16,231,12,79,92,141,0,64,96,29,10,154,181,120,246,
    62,8,101,149,227,137,77,56,161,209,85,252,134,145,136,144,
    196,181,79,9,24,34,69,159,32,52,213,8,240,26,102,136,
    79,13,188,108,9,231,106,244,5,145,178,104,11,7,22,71,
    109,164,62,207,163,22,141,50,47,147,116,83,28,80,13,138,
    44,56,182,129,44,252,133,241,124,216,33,153,14,24,80,234,
    56,41,178,119,41,155,141,250,236,130,135,168,174,87,227,175,
    143,200,26,197,93,28,248,38,59,115,163,48,77,51,229,134,
    113,236,134,74,229,201,209,153,146,133,171,50,247,94,193,248,
    244,86,12,38,43,122,227,145,193,32,225,5,49,168,95,226,
    36,82,248,178,198,47,108,154,66,42,196,211,113,22,23,56,
    78,36,250,82,121,53,3,250,227,176,160,29,213,18,246,159,
    155,173,25,196,157,186,129,92,33,7,61,213,100,244,134,69,
    17,240,214,52,206,64,37,74,111,195,193,153,84,180,190,80,
    161,66,14,168,171,55,157,25,168,110,145,70,140,66,72,228,
    32,205,210,120,140,50,36,209,167,196,222,22,3,182,5,43,
    8,210,13,124,26,226,150,152,131,37,177,37,86,172,136,196,
    117,74,176,50,80,41,61,42,96,124,136,50,62,33,104,47,
    49,142,117,44,142,66,44,55,251,56,81,231,208,228,221,166,
    102,151,154,59,212,124,98,84,51,11,250,105,125,168,159,135,
    196,147,197,74,137,236,82,252,202,79,189,41,63,93,154,240,
    211,75,242,55,242,53,139,156,242,202,215,108,82,81,182,96,
    188,136,125,25,193,67,222,117,229,59,172,58,175,77,42,169,
    27,216,123,132,229,73,64,247,39,0,237,145,213,24,205,222,
    206,77,106,118,103,83,205,125,173,230,71,196,211,98,137,189,
    37,198,220,130,136,8,56,164,140,57,163,240,223,98,103,188,
    73,10,159,212,244,38,166,225,215,84,106,97,58,229,156,140,
    129,238,141,78,196,165,254,117,199,33,148,246,108,216,40,115,
    100,65,33,26,5,252,110,236,102,61,87,129,225,225,233,189,
    226,225,189,226,55,24,118,220,103,28,200,116,224,209,161,37,
    151,163,28,67,72,131,95,116,40,8,56,44,4,101,134,67,
    115,80,205,193,86,100,35,112,132,41,48,186,96,240,155,25,
    11,52,43,11,144,64,251,196,80,147,213,111,195,38,62,77,
    193,92,7,25,71,104,174,138,120,22,159,23,100,8,210,133,
    4,170,130,189,67,45,19,139,75,130,123,157,41,164,205,128,
    176,222,207,112,247,207,141,35,215,161,194,21,61,54,137,67,
    126,245,55,224,154,82,192,95,129,48,132,80,41,61,145,253,
    222,248,254,26,45,39,125,156,139,107,243,179,85,250,180,85,
    6,69,116,250,81,139,211,110,153,175,177,236,251,251,68,196,
    188,180,65,112,18,181,203,210,113,50,137,58,85,32,96,4,
    254,160,68,233,76,69,12,111,187,10,10,118,21,20,174,194,
    110,85,228,97,180,155,1,67,177,139,33,43,1,73,245,229,
    21,38,41,29,221,17,235,214,4,210,238,83,243,160,2,153,
    48,99,255,103,1,238,194,205,249,53,208,241,154,98,88,225,
    176,92,203,117,142,132,83,84,42,95,171,25,95,219,171,124,
    77,114,30,121,207,7,18,106,45,194,204,165,37,240,100,137,
    21,24,29,232,28,144,53,240,235,228,149,92,104,139,210,105,
    133,137,160,180,223,84,150,154,208,105,133,26,141,11,106,190,
    155,21,31,102,104,60,29,132,195,163,56,124,230,19,59,196,
    83,100,188,216,50,242,181,39,229,35,255,19,55,136,200,175,
    63,55,114,190,157,21,57,61,202,132,149,124,236,155,113,22,
    113,128,250,227,177,116,135,114,120,132,167,215,227,100,228,246,
    6,97,159,237,107,151,242,127,109,228,87,12,144,15,11,138,
    226,167,212,102,110,148,165,152,140,206,34,149,229,110,44,241,
    48,39,99,247,129,203,153,204,77,10,55,60,194,217,48,82,
    218,165,166,35,7,215,187,97,222,47,184,180,61,125,71,221,
    89,81,92,153,158,147,52,193,202,255,91,163,64,125,200,172,
    210,18,23,248,218,63,145,9,60,164,169,177,14,175,79,168,
    33,5,121,63,129,89,203,94,93,138,250,196,6,41,189,46,
    110,99,77,206,133,224,212,194,87,244,109,241,113,240,120,249,
    67,130,135,190,144,42,67,72,29,202,171,172,57,144,243,116,
    189,224,55,233,170,134,70,22,40,174,204,253,151,113,133,157,
    110,102,148,75,238,22,254,47,195,137,183,55,179,226,121,191,
    128,178,214,185,41,148,136,73,217,91,58,148,36,194,156,84,
    216,124,7,90,84,190,137,217,185,30,133,65,148,203,80,73,
    109,237,219,51,164,14,14,91,154,185,168,178,185,145,185,102,
    228,222,175,228,190,228,74,112,188,62,113,146,96,8,136,215,
    105,155,78,27,231,172,154,192,210,7,14,168,52,228,84,26,
    218,196,38,149,239,130,107,180,164,15,21,196,81,56,26,201,
    52,190,58,48,240,204,172,232,140,67,99,12,85,45,182,136,
    167,131,117,124,62,14,1,142,94,104,148,192,214,175,85,94,
    63,75,56,96,183,72,12,2,58,116,230,187,202,17,30,217,
    95,103,133,42,33,120,191,6,147,36,42,224,199,114,32,149,
    188,206,178,138,62,46,143,233,177,196,116,154,141,241,140,200,
    231,41,124,31,4,193,108,229,151,207,112,247,63,67,121,246,
    165,252,82,199,12,211,112,26,130,19,255,7,23,228,154,107,
    186,204,209,231,134,49,95,130,128,183,92,233,134,47,112,77,
    114,101,95,162,179,242,65,56,212,23,106,124,17,228,253,136,
    154,31,27,29,179,23,232,163,38,159,213,244,233,26,253,134,
    171,18,46,66,60,186,136,225,235,107,45,197,139,176,144,87,
    98,240,157,162,158,56,28,23,74,14,21,241,35,211,179,97,
    240,82,14,179,124,252,50,139,165,34,19,63,47,203,27,61,
    28,188,149,84,7,77,208,157,158,103,50,122,2,7,244,117,
    37,231,94,61,246,197,32,139,78,101,92,142,95,173,61,76,
    204,90,194,127,156,135,104,2,190,14,150,121,18,14,146,239,
    37,35,228,121,28,231,94,152,246,165,225,130,138,147,105,185,
    56,247,127,28,102,25,90,185,236,39,40,170,102,126,250,179,
    50,192,144,97,149,123,67,140,158,36,49,83,120,212,149,190,
    190,75,121,198,87,39,95,97,211,166,187,200,229,134,152,179,
    48,0,225,95,83,44,137,154,88,108,53,236,70,189,81,179,
    17,179,52,178,38,22,236,70,115,81,92,247,183,141,136,110,
    90,219,205,134,248,15,4,248,80,72,
};

EmbeddedPython embedded_m5_internal_param_GHBPrefetcher(
    "m5/internal/param_GHBPrefetcher.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/build/X86/python/m5/internal/param_GHBPrefetcher.py",
    "m5.internal.param_GHBPrefetcher",
    data_m5_internal_param_GHBPrefetcher,
    2218,
    7134);

} // anonymous namespace
