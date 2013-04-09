#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_CheckerCPU[] = {
    120,156,205,88,123,111,219,200,17,159,37,37,217,146,95,242,
    35,118,156,39,147,75,82,221,229,161,38,109,226,43,26,4,
    151,199,253,17,32,151,24,116,138,228,216,2,4,77,174,101,
    38,20,41,144,107,39,58,216,255,212,65,219,47,211,175,208,
    175,214,206,204,114,105,41,78,112,41,90,32,178,204,197,112,
    118,184,187,51,251,155,199,110,8,229,223,101,124,126,112,0,
    138,39,22,64,132,255,2,222,2,36,2,60,1,66,10,136,
    150,225,77,29,178,117,16,81,29,62,0,120,22,72,11,142,
    144,176,225,207,22,164,115,216,129,95,53,224,173,205,44,1,
    195,22,200,26,120,117,120,149,46,67,77,54,224,77,11,178,
    41,16,248,151,90,32,94,71,83,16,77,195,7,156,1,137,
    38,143,57,13,81,139,137,38,68,51,76,180,96,216,6,57,
    3,222,44,160,188,55,135,131,221,192,193,230,121,48,135,7,
    139,176,107,5,162,57,146,199,245,252,76,162,53,18,213,179,
    204,243,56,11,80,174,174,13,94,219,208,139,224,45,26,122,
    9,188,37,67,47,131,183,108,232,21,240,86,12,125,10,188,
    83,134,94,5,111,213,208,107,224,173,25,250,52,120,167,13,
    189,14,222,186,161,207,128,119,198,208,103,193,59,107,232,115,
    224,157,51,244,121,240,206,27,250,2,120,23,12,125,17,188,
    139,134,118,192,115,12,125,9,188,75,134,190,12,222,101,67,
    127,3,222,55,134,190,2,222,21,67,95,5,239,170,161,175,
    129,119,13,162,5,144,109,136,127,3,59,184,193,237,202,128,
    29,144,54,196,223,130,247,45,72,252,239,192,17,98,32,90,
    100,217,239,88,118,169,146,189,206,178,55,192,187,1,18,255,
    175,107,217,6,108,117,78,33,162,226,127,227,95,71,32,165,
    102,177,217,151,121,17,103,169,31,167,59,89,108,81,127,131,
    26,194,95,72,205,20,62,115,248,60,38,32,254,19,24,133,
    145,85,2,241,16,112,96,65,235,127,107,193,33,19,135,22,
    12,59,112,32,32,174,65,100,195,1,78,83,167,5,244,4,
    28,89,240,23,155,4,14,177,173,33,108,28,168,41,141,193,
    21,13,27,61,212,20,28,214,225,160,14,91,226,245,129,69,
    156,55,77,200,186,32,126,57,199,227,78,243,184,22,28,96,
    91,131,163,26,28,54,224,21,74,33,43,110,146,5,240,51,
    84,150,176,191,213,169,225,138,159,143,168,76,234,68,113,158,
    6,125,169,22,145,246,7,65,30,244,253,199,187,50,124,43,
    243,199,155,127,234,180,140,88,86,220,26,4,106,215,229,239,
    108,50,74,127,160,120,188,44,149,106,6,137,157,56,141,252,
    126,22,237,37,82,77,211,96,254,78,156,72,223,231,206,167,
    253,65,150,171,31,243,60,203,93,178,43,51,147,44,168,190,
    168,147,137,147,172,144,29,154,141,167,113,105,120,69,210,59,
    3,30,145,22,192,107,165,143,35,89,132,121,60,80,184,93,
    122,68,146,166,209,58,180,81,220,20,251,216,116,105,21,197,
    32,8,101,119,32,179,65,34,187,97,55,204,146,36,78,139,
    126,87,134,114,227,238,70,119,144,103,111,100,168,232,213,167,
    247,158,236,223,189,121,59,184,115,251,15,247,126,191,189,113,
    231,206,70,119,123,47,78,162,238,235,239,239,117,7,67,181,
    155,165,221,254,221,110,156,42,137,182,75,186,31,91,237,22,
    202,44,209,252,239,226,158,31,179,230,254,174,76,6,50,111,
    18,247,12,173,77,180,197,172,104,8,91,116,196,60,83,115,
    72,159,179,102,196,243,152,116,15,201,30,132,61,219,160,237,
    95,192,155,138,168,120,99,65,182,8,226,128,129,137,210,184,
    245,8,169,45,65,189,22,247,222,0,161,172,146,31,219,132,
    16,226,46,225,55,140,65,4,35,202,222,39,72,136,20,189,
    129,112,84,39,168,107,128,33,50,53,228,178,121,236,171,211,
    23,52,148,69,83,212,96,118,208,198,209,167,153,107,17,151,
    215,50,58,110,138,12,213,164,24,135,188,85,92,194,95,25,
    201,91,29,210,233,57,163,73,237,198,69,246,46,229,61,35,
    154,157,111,11,205,181,57,124,177,77,91,81,92,68,198,207,
    217,158,19,6,105,154,41,39,136,34,39,80,42,143,183,247,
    148,44,28,149,57,87,11,6,167,187,104,0,89,141,55,28,
    24,0,18,88,16,128,250,37,138,67,133,47,203,252,194,91,
    83,72,133,96,218,205,162,2,249,52,68,79,42,183,110,16,
    191,27,20,52,163,154,71,250,161,153,154,17,220,105,24,188,
    21,50,217,81,45,134,110,80,20,62,79,77,124,70,41,141,
    180,31,36,123,82,145,124,161,2,133,43,32,82,79,58,25,
    56,61,77,230,48,214,32,125,253,52,75,163,33,42,16,135,
    151,104,109,167,25,173,115,176,136,8,93,197,167,41,78,137,
    41,152,23,167,197,162,21,146,174,181,18,169,140,210,85,178,
    12,48,56,68,25,150,16,177,71,24,190,58,22,7,31,86,
    154,189,155,70,231,136,228,158,165,230,28,53,231,169,185,96,
    236,242,213,141,51,247,177,113,110,209,130,44,182,72,104,151,
    186,87,30,234,142,121,232,252,136,135,30,145,167,145,151,89,
    228,142,199,94,102,147,125,178,25,227,63,236,197,8,27,242,
    171,99,175,97,187,185,109,178,71,195,0,222,37,20,143,66,
    185,55,2,101,151,182,140,113,236,158,249,156,141,157,9,180,
    113,79,219,248,54,45,104,182,68,221,60,163,109,70,132,4,
    25,178,196,148,177,246,19,36,134,107,100,237,81,51,175,97,
    222,125,69,181,30,230,79,78,194,24,223,94,235,204,91,26,
    95,19,53,194,231,142,13,171,101,82,44,40,50,163,118,239,
    135,78,182,227,40,48,107,184,127,181,184,117,181,248,35,70,
    27,231,1,199,47,29,111,116,68,201,229,32,199,200,209,228,
    23,29,1,124,142,6,126,153,213,112,47,168,200,224,45,228,
    29,224,192,82,96,80,193,152,55,25,230,111,85,230,39,109,
    54,104,53,45,182,189,13,107,248,180,4,47,217,207,56,42,
    115,13,196,189,248,60,162,93,32,67,72,160,26,220,221,210,
    10,177,174,164,181,219,25,195,216,215,214,212,189,142,83,255,
    96,252,183,1,21,162,232,177,73,23,114,167,191,3,151,143,
    2,254,6,132,30,4,73,233,128,236,238,198,229,151,73,156,
    140,113,32,62,153,144,173,210,149,173,50,16,162,175,15,230,
    56,207,150,9,26,43,188,127,140,68,201,35,27,4,103,77,
    187,172,18,71,179,102,173,242,127,198,222,23,101,198,218,88,
    160,112,215,171,88,96,87,177,224,56,212,86,37,29,6,185,
    175,189,75,236,89,184,14,159,84,250,241,24,141,148,127,206,
    139,21,107,4,99,55,168,185,89,193,75,24,222,215,92,253,
    69,248,124,54,245,117,128,166,184,85,212,88,169,133,6,187,
    223,241,16,149,127,213,141,127,221,169,252,75,114,214,248,192,
    71,14,106,45,130,202,145,37,240,44,139,149,22,29,33,107,
    32,235,224,53,200,19,185,154,22,165,163,10,19,50,41,212,
    142,229,164,17,107,86,96,209,112,160,230,253,68,248,45,35,
    226,126,18,244,183,163,224,193,14,173,133,22,20,26,207,181,
    140,114,237,81,229,200,231,196,103,244,227,215,223,26,37,247,
    39,66,73,151,146,94,165,28,59,99,148,133,28,145,94,238,
    74,167,47,251,219,120,50,221,141,7,206,78,18,244,120,103,
    237,82,249,23,70,121,197,208,248,184,112,40,190,163,54,115,
    194,44,197,188,179,23,170,44,119,34,137,103,53,25,57,55,
    29,78,90,78,92,56,193,54,246,6,161,210,110,52,30,42,
    184,162,13,242,94,193,197,235,219,119,68,78,132,213,202,52,
    28,167,49,22,246,61,99,61,125,128,172,50,16,215,239,218,
    39,113,5,120,6,83,67,29,76,239,81,67,214,113,175,193,
    68,37,170,174,246,121,40,200,220,13,113,22,75,110,213,30,
    139,19,155,244,85,113,50,90,28,125,73,180,208,119,94,40,
    32,27,16,79,113,59,77,25,202,107,26,102,139,219,25,102,
    206,26,230,28,183,243,204,92,48,33,167,205,204,69,190,154,
    210,183,110,203,20,126,26,255,99,248,97,247,156,140,205,32,
    199,236,255,63,163,142,123,103,50,117,115,127,7,101,13,244,
    185,136,99,149,80,99,197,55,116,196,209,59,137,149,210,112,
    101,164,198,102,59,136,87,105,155,234,240,3,174,208,125,75,
    151,226,180,237,52,216,115,93,163,240,205,205,10,54,169,124,
    231,127,12,112,93,107,19,152,130,193,64,166,209,113,29,205,
    61,147,97,68,10,35,57,84,133,202,44,22,205,43,248,156,
    132,63,233,59,162,62,227,188,94,33,254,236,196,40,68,168,
    120,87,5,211,149,177,96,234,210,182,235,240,89,69,78,189,
    135,151,63,17,160,252,189,65,20,40,249,34,229,91,19,58,
    223,125,137,24,86,78,124,40,28,227,42,231,83,31,202,247,
    177,26,29,253,87,133,104,108,186,60,28,225,113,201,123,226,
    35,76,114,233,139,52,25,190,72,159,101,65,116,60,195,23,
    11,211,76,228,76,159,232,99,200,168,53,130,131,76,164,146,
    39,112,207,209,190,60,216,71,18,19,115,54,196,131,37,159,
    195,240,61,241,253,9,74,86,223,227,212,9,148,145,144,146,
    85,3,79,236,244,107,214,154,130,107,136,143,238,209,245,178,
    169,110,215,103,142,33,223,155,128,187,80,65,137,175,122,77,
    170,230,56,67,39,236,231,65,95,223,190,241,197,145,75,64,
    114,175,24,32,114,144,208,103,84,62,231,233,51,57,198,20,
    46,112,184,158,113,233,238,134,129,165,213,120,20,20,18,117,
    224,155,71,205,65,173,95,62,123,196,55,98,21,99,51,160,
    91,137,237,68,190,10,18,84,122,68,122,107,88,40,217,87,
    180,108,153,238,245,253,159,100,63,203,135,63,101,145,84,228,
    46,15,203,130,74,179,253,125,73,149,23,71,58,253,249,120,
    63,15,163,59,144,161,175,64,25,62,165,201,147,12,77,30,
    149,252,99,217,173,216,200,82,32,137,242,0,183,138,175,152,
    101,30,7,73,252,139,100,36,61,140,162,220,13,210,158,52,
    171,24,55,2,233,188,52,170,243,179,44,12,146,135,131,56,
    28,89,46,10,198,225,102,156,61,145,251,113,40,71,150,112,
    204,163,58,107,51,207,66,89,20,39,39,42,59,216,52,229,
    136,121,144,134,187,155,185,164,123,217,82,22,39,127,186,245,
    208,124,61,182,51,200,103,101,52,227,41,22,179,47,209,124,
    184,35,228,22,229,94,114,229,196,142,117,140,81,246,162,92,
    246,98,220,45,61,73,41,92,166,24,194,175,58,255,41,175,
    30,253,112,114,28,78,31,135,244,245,210,3,190,77,194,156,
    2,109,186,152,93,104,138,41,11,243,15,254,90,98,94,212,
    197,236,92,211,110,54,154,117,27,157,146,56,203,98,198,110,
    182,102,197,127,243,91,71,55,110,89,235,179,77,241,31,104,
    109,193,34,
};

EmbeddedPython embedded_m5_internal_param_CheckerCPU(
    "m5/internal/param_CheckerCPU.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/build/X86/python/m5/internal/param_CheckerCPU.py",
    "m5.internal.param_CheckerCPU",
    data_m5_internal_param_CheckerCPU,
    2435,
    7562);

} // anonymous namespace
