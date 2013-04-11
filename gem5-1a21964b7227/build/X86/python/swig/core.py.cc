#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_core[] = {
    120,156,205,89,123,115,219,198,17,223,3,72,74,164,94,212,
    251,109,211,142,229,112,90,199,172,221,198,74,91,215,181,44,
    57,26,207,52,178,11,185,181,195,182,131,129,112,39,9,18,
    8,32,0,40,155,25,233,143,86,238,107,166,95,165,95,161,
    95,173,221,221,3,32,42,137,103,218,106,198,140,36,220,236,
    45,14,119,183,187,191,125,220,201,133,236,103,4,159,199,13,
    128,228,199,6,128,196,63,1,199,0,190,128,182,0,161,4,
    200,85,56,42,67,184,8,66,150,225,29,64,219,0,101,192,
    57,18,38,252,206,128,96,12,95,224,87,21,56,54,153,37,
    160,87,3,85,130,118,25,94,5,211,80,82,21,56,170,65,
    56,4,2,127,2,3,196,107,57,4,114,24,222,225,10,72,
    84,121,206,97,144,53,38,170,32,71,152,168,65,175,14,106,
    4,218,163,128,227,219,99,56,217,29,156,108,156,39,107,240,
    100,18,95,93,3,57,70,227,113,63,95,210,208,18,13,213,
    171,140,243,60,19,32,39,104,158,125,148,164,94,140,196,169,
    77,240,38,161,61,9,10,255,234,112,78,194,34,107,10,218,
    83,160,166,192,155,134,246,52,200,73,158,99,134,71,207,16,
    33,167,152,51,203,156,89,34,228,52,115,230,152,51,71,132,
    156,97,206,60,115,230,137,144,179,204,89,96,206,2,17,114,
    142,57,139,204,89,36,66,206,51,103,137,57,75,68,200,5,
    230,44,51,103,153,8,185,200,156,21,230,172,16,33,151,152,
    179,202,156,85,34,228,50,115,174,49,231,26,17,114,133,57,
    215,153,115,157,9,20,176,1,237,6,19,55,160,125,131,137,
    155,208,190,201,196,71,208,254,136,137,91,208,190,197,196,26,
    180,215,152,184,13,237,219,76,124,12,237,143,201,234,187,205,
    235,8,32,239,223,248,211,20,72,165,163,216,156,168,56,241,
    194,192,246,130,253,208,51,232,125,133,26,130,155,75,205,16,
    62,99,248,108,18,238,254,9,12,58,105,100,184,59,3,68,
    148,32,40,30,27,112,198,196,153,1,189,38,156,10,240,74,
    32,77,56,197,101,202,100,178,3,1,231,6,252,222,164,1,
    103,216,150,16,37,13,40,165,26,114,51,26,37,122,170,33,
    56,43,195,105,25,118,197,235,83,131,56,71,85,8,91,32,
    190,94,225,121,135,121,94,3,78,177,45,193,121,9,206,42,
    240,10,71,33,203,171,18,102,240,51,20,150,160,190,219,44,
    225,142,119,250,68,38,113,164,23,7,78,71,225,190,0,108,
    55,140,85,179,150,191,10,147,187,145,147,30,90,60,214,36,
    69,116,162,148,231,8,3,149,146,255,237,123,129,180,59,161,
    236,250,42,29,166,9,236,125,207,87,182,205,47,159,117,162,
    48,78,159,198,113,24,91,164,75,102,250,161,83,124,65,75,
    186,126,152,168,38,173,198,203,88,52,125,74,163,247,35,158,
    145,54,192,251,163,143,165,74,220,216,139,82,52,145,158,145,
    70,211,108,77,50,14,55,9,217,169,69,187,72,34,199,85,
    173,72,133,145,175,90,110,203,13,125,223,11,146,78,75,185,
    106,253,211,245,86,20,135,71,202,77,169,107,83,255,64,117,
    62,253,228,158,115,255,222,79,31,252,100,111,253,254,253,245,
    214,94,215,243,101,235,245,103,15,90,81,47,61,12,131,86,
    242,198,59,104,145,138,238,34,99,138,22,67,134,237,177,152,
    246,161,242,35,21,87,137,187,68,27,17,117,49,42,42,194,
    20,77,49,206,212,24,210,43,198,136,216,241,72,80,151,132,
    39,112,153,57,156,254,5,108,53,52,251,145,1,225,36,136,
    83,70,30,142,70,219,34,102,118,5,189,53,248,237,29,16,
    169,145,241,61,147,32,64,220,41,252,134,65,134,104,195,177,
    15,201,230,34,192,0,65,64,41,19,150,53,130,16,122,26,
    83,225,56,190,43,211,23,52,149,65,75,148,96,52,170,227,
    236,195,204,53,136,203,123,233,159,55,64,70,90,165,152,133,
    188,57,220,194,159,24,170,187,77,146,105,135,161,147,30,122,
    73,248,38,96,3,17,205,222,181,139,234,122,209,123,190,71,
    122,79,200,251,190,12,187,13,215,9,130,48,109,56,82,54,
    156,52,141,189,189,110,170,146,70,26,54,214,18,70,162,53,
    153,163,175,152,175,23,229,104,35,100,32,218,116,71,122,110,
    138,157,105,238,176,105,18,149,34,114,14,67,153,32,159,166,
    56,80,169,85,206,225,125,232,36,180,98,58,142,244,70,190,
    52,195,181,89,201,193,149,40,127,63,173,49,78,157,36,177,
    121,105,226,23,46,115,226,248,93,149,210,248,36,117,82,220,
    1,145,122,209,1,128,114,129,100,207,69,39,225,236,32,12,
    100,15,119,235,185,55,104,35,11,12,205,49,152,68,56,206,
    225,83,21,179,98,8,198,197,130,152,52,92,18,172,148,193,
    146,33,57,71,106,0,70,130,200,130,12,194,243,28,131,81,
    211,224,80,194,18,178,223,210,236,28,95,172,101,106,86,168,
    89,165,230,90,174,132,15,171,137,177,111,106,226,46,173,110,
    176,248,174,153,9,90,248,158,117,201,247,198,251,124,239,156,
    124,136,252,199,32,71,187,240,31,147,148,17,142,228,158,193,
    254,137,128,32,143,185,240,7,86,146,85,39,225,43,57,148,
    45,194,103,63,72,15,250,64,106,145,125,24,161,214,210,251,
    20,218,24,180,66,15,180,66,239,209,234,163,25,158,198,25,
    71,35,194,37,48,144,216,67,185,106,183,144,232,205,147,106,
    251,117,58,143,249,241,21,149,96,152,231,56,89,98,152,122,
    173,51,100,166,105,77,148,8,121,251,38,204,101,201,43,161,
    0,139,162,188,237,53,194,253,70,10,249,30,30,174,37,119,
    215,146,159,99,208,104,60,226,48,164,195,134,14,12,177,138,
    98,12,0,85,238,104,71,182,217,169,237,44,19,161,226,103,
    73,161,70,174,110,142,15,9,198,6,12,93,3,208,117,173,
    208,53,109,125,157,150,174,177,162,77,152,199,167,38,120,127,
    118,200,145,148,11,19,126,139,207,19,82,57,73,173,128,234,
    96,107,87,239,158,5,35,17,173,230,37,244,124,80,177,172,
    31,226,58,143,115,55,172,64,129,21,122,76,218,56,121,197,
    95,129,75,94,1,127,1,194,5,154,63,243,35,246,218,220,
    115,167,27,217,190,79,197,119,102,76,35,243,72,35,11,94,
    232,178,209,24,39,194,44,131,98,141,245,183,190,200,118,110,
    130,224,180,102,102,117,90,127,90,43,21,110,204,168,250,175,
    82,87,233,146,191,91,139,133,75,155,133,75,95,132,199,162,
    192,194,88,245,97,145,54,172,23,181,105,255,79,47,112,70,
    9,98,85,204,24,125,232,185,67,205,39,5,112,68,206,251,
    96,91,189,14,239,207,109,182,142,160,20,107,146,18,75,48,
    81,225,76,188,217,115,113,99,133,139,148,115,23,217,42,92,
    68,113,72,127,199,165,60,181,6,1,224,220,16,120,36,212,
    135,65,44,115,232,20,82,1,53,68,229,54,157,244,202,217,
    73,15,221,139,22,97,32,231,15,7,61,10,150,151,82,72,
    159,34,11,80,104,179,83,243,118,0,49,134,44,255,208,119,
    58,123,210,121,244,156,22,166,213,221,220,29,141,92,146,122,
    191,36,228,72,226,61,194,112,247,71,185,68,39,3,8,47,
    148,144,10,73,216,157,100,232,114,76,121,121,168,26,29,213,
    217,195,211,221,161,23,53,246,125,231,128,109,102,102,144,216,
    38,73,127,6,92,236,104,49,255,161,207,110,51,125,9,137,
    67,138,120,21,212,41,105,157,114,96,177,13,157,183,200,192,
    52,223,142,118,123,62,154,144,35,5,234,141,173,17,168,211,
    17,129,197,137,34,21,200,139,48,192,229,164,19,31,232,33,
    3,2,130,141,39,94,15,139,231,95,95,132,128,9,76,52,
    51,248,124,27,220,180,225,62,145,57,18,148,139,152,176,60,
    16,41,216,248,191,205,141,223,164,195,226,69,190,227,10,95,
    135,14,92,6,79,105,105,79,71,243,31,80,115,155,154,245,
    194,110,228,186,82,225,233,84,101,166,75,235,80,212,106,120,
    0,77,227,176,135,229,3,39,96,236,251,182,61,168,116,218,
    34,245,231,6,171,136,101,60,99,86,75,85,193,193,46,79,
    173,219,121,52,202,144,13,132,236,220,114,198,37,176,198,97,
    231,11,207,141,195,23,155,218,144,15,6,35,213,67,92,231,
    15,112,81,171,255,31,210,208,136,32,140,59,142,255,125,16,
    232,23,228,223,87,19,136,42,92,47,177,190,31,6,122,4,
    156,58,175,42,15,38,241,231,221,52,234,166,91,94,60,80,
    121,126,9,250,134,175,95,158,92,38,142,119,181,66,158,243,
    247,161,77,134,79,223,122,233,166,175,156,160,27,13,42,30,
    60,198,117,58,87,16,132,50,165,244,18,103,207,87,27,190,
    255,43,47,73,85,128,25,115,80,226,108,224,58,95,93,13,
    103,53,198,153,146,150,19,200,176,51,80,148,61,193,117,186,
    87,147,102,82,123,205,166,31,186,199,159,199,234,171,174,10,
    220,222,64,133,218,196,117,122,87,64,28,37,81,183,27,191,
    244,220,227,65,161,140,14,2,103,87,179,139,142,102,177,231,
    248,222,215,228,57,3,53,9,29,226,254,120,53,121,104,196,
    1,226,236,80,185,199,81,232,5,233,64,5,250,28,215,249,
    243,213,4,162,171,250,110,80,152,104,219,15,247,28,63,25,
    168,84,219,184,206,223,47,164,226,227,192,55,254,225,164,119,
    197,245,43,95,13,244,248,150,18,172,137,66,46,254,255,72,
    94,208,126,70,28,186,226,218,113,58,250,22,155,239,100,173,
    155,212,220,130,172,218,229,35,136,190,55,226,235,24,125,41,
    134,231,20,190,22,227,27,10,139,110,74,185,184,228,140,160,
    139,96,46,127,99,117,64,73,33,230,35,139,123,226,196,236,
    192,95,56,111,201,129,185,112,227,98,135,43,4,78,171,156,
    146,56,144,115,252,227,120,193,30,199,48,101,211,178,38,24,
    114,89,109,131,85,206,19,47,205,103,222,144,50,78,73,226,
    103,193,9,26,79,190,60,140,149,35,159,109,241,23,25,239,
    69,24,167,200,161,154,223,13,59,17,26,111,203,73,21,7,
    127,58,233,217,91,79,159,252,102,91,255,187,138,186,59,186,
    63,145,247,95,90,27,155,207,118,182,237,231,59,3,138,65,
    250,40,174,111,34,31,233,139,71,108,234,116,59,63,81,21,
    67,198,168,48,241,183,38,198,69,89,140,142,85,205,106,165,
    90,54,177,216,39,206,180,24,49,171,181,185,106,21,123,85,
    129,239,140,255,241,87,244,255,254,7,128,47,173,207,
};

EmbeddedPython embedded_m5_internal_core(
    "m5/internal/core.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/build/X86/python/swig/core.py",
    "m5.internal.core",
    data_m5_internal_core,
    2350,
    8028);

} // anonymous namespace
