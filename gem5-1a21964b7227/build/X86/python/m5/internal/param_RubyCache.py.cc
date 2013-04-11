#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RubyCache[] = {
    120,156,205,89,109,111,219,200,17,158,37,37,217,146,45,91,
    126,183,243,114,97,238,226,84,189,75,162,38,189,196,215,54,
    8,238,165,247,161,64,155,187,210,7,196,209,21,32,104,114,
    45,211,166,72,129,92,39,209,193,254,82,7,109,255,76,255,
    66,255,90,59,51,203,165,101,91,190,26,104,129,200,150,22,
    203,217,225,236,206,204,51,51,187,171,0,138,191,57,252,126,
    233,0,228,63,8,128,16,63,2,14,1,98,1,93,1,66,
    10,8,151,224,160,10,233,6,136,176,10,239,1,186,22,72,
    11,78,177,99,195,143,22,36,77,28,192,183,106,112,104,51,
    73,192,176,1,178,2,221,42,188,74,150,160,34,107,112,208,
    128,116,10,4,254,37,22,136,157,112,10,194,105,120,143,51,
    96,167,206,50,167,33,108,112,167,14,225,12,119,26,48,108,
    129,156,129,238,44,32,127,183,137,194,30,160,176,57,22,230,
    176,176,16,135,150,33,108,18,63,174,231,53,177,86,136,85,
    207,50,199,114,230,161,88,93,11,186,45,211,95,128,238,130,
    233,47,66,119,17,194,121,144,45,136,150,96,15,21,110,149,
    2,151,65,218,16,173,64,119,5,36,126,150,225,20,109,18,
    46,48,239,42,243,46,150,188,107,204,187,14,221,117,144,248,
    89,211,188,53,216,110,175,160,133,163,127,227,95,27,45,12,
    106,22,155,55,50,203,163,52,241,162,100,47,141,44,26,175,
    81,67,254,8,168,153,194,111,19,191,223,144,99,254,9,236,
    149,208,42,28,115,2,40,88,208,250,15,45,56,225,206,137,
    5,195,54,28,11,136,42,16,218,112,140,211,84,105,1,61,
    1,167,22,252,197,38,134,19,108,43,104,70,7,42,74,251,
    100,89,155,81,139,154,130,147,42,28,87,97,91,236,28,91,
    68,57,168,67,218,1,241,211,45,150,59,205,114,45,56,198,
    182,2,167,21,56,169,193,43,228,66,82,84,39,11,224,107,
    168,44,97,97,187,93,193,21,191,28,81,153,212,9,163,44,
    241,251,82,181,176,239,13,252,204,239,123,238,209,238,240,27,
    63,216,151,237,134,225,74,243,71,3,95,237,187,252,154,77,
    54,233,15,20,139,75,19,169,102,176,179,23,37,161,215,79,
    195,163,88,170,105,146,229,237,69,177,244,60,30,252,67,127,
    144,102,234,219,44,75,51,151,204,202,196,56,245,203,55,170,
    100,225,56,205,101,155,102,227,105,92,18,175,136,123,111,192,
    18,105,1,188,84,122,57,148,121,144,69,3,133,222,210,18,
    137,155,164,181,201,79,220,228,71,216,116,104,21,249,192,15,
    100,103,32,211,65,44,59,65,39,72,227,56,74,242,126,71,
    6,114,235,233,86,103,144,165,7,50,80,244,232,209,115,79,
    246,159,62,124,236,63,121,252,155,103,159,239,110,61,121,178,
    213,217,61,138,226,176,179,243,197,179,206,96,168,246,211,164,
    211,127,218,137,18,37,209,116,113,231,130,209,30,33,203,34,
    77,255,54,234,121,17,43,238,237,203,120,32,179,58,81,111,
    208,210,68,75,204,138,154,176,69,91,204,113,175,137,253,91,
    214,140,120,25,145,234,1,153,131,144,103,27,172,253,11,216,
    165,136,137,3,11,210,5,16,199,12,75,228,70,199,35,160,
    182,5,141,90,60,250,0,132,178,10,122,100,19,62,136,186,
    136,239,48,2,17,138,200,251,156,0,33,18,140,5,66,81,
    149,128,174,225,133,184,212,128,75,231,112,172,74,111,144,40,
    139,166,168,192,236,160,133,210,167,153,106,17,149,215,50,42,
    55,65,130,170,83,196,35,109,21,151,240,87,198,241,118,155,
    116,122,201,96,82,251,81,158,190,77,216,101,212,231,208,219,
    70,115,125,63,252,110,151,60,145,223,65,194,235,244,200,9,
    252,36,73,149,227,135,161,227,43,149,69,187,71,74,230,142,
    74,157,205,156,177,233,46,24,60,150,242,134,3,131,63,194,
    10,226,79,63,132,81,160,240,97,137,31,216,53,185,84,136,
    165,253,52,204,145,78,34,122,82,185,85,3,248,125,63,167,
    25,21,165,225,175,204,212,12,224,118,205,192,45,151,241,158,
    106,48,114,253,60,247,120,106,162,51,72,73,210,27,63,62,
    146,138,248,115,229,43,92,1,117,245,164,19,1,211,117,178,
    134,49,6,169,235,37,105,18,14,113,253,81,112,151,150,182,
    206,96,109,194,2,2,116,21,191,117,177,34,166,96,78,172,
    139,5,43,32,85,43,5,80,25,164,171,100,24,96,108,136,
    34,39,33,96,79,49,119,181,45,206,60,172,51,199,54,73,
    231,116,228,222,164,230,22,53,183,169,249,200,152,229,67,219,
    166,121,209,54,143,104,61,22,27,36,176,11,213,203,248,116,
    207,197,231,220,72,124,158,82,156,81,140,89,20,140,103,49,
    102,147,121,210,25,19,61,28,195,8,26,138,170,179,152,97,
    179,185,148,154,25,117,12,119,151,48,60,10,228,222,8,144,
    93,242,24,163,216,189,113,149,137,157,201,51,113,79,155,248,
    49,173,103,182,192,220,28,99,109,70,4,4,24,50,196,148,
    49,246,239,177,51,92,35,99,143,90,121,13,75,238,43,218,
    246,96,233,228,250,139,201,109,71,23,221,194,246,186,83,33,
    116,238,217,176,90,212,195,156,210,50,42,247,110,232,164,123,
    142,2,179,134,231,155,249,163,205,252,119,152,106,156,23,156,
    188,116,178,209,233,36,147,131,12,211,70,157,31,116,248,123,
    156,10,188,162,162,161,43,104,127,193,30,100,7,112,86,201,
    49,163,96,194,155,8,235,55,74,235,147,50,91,180,152,6,
    155,222,134,53,252,54,4,175,216,75,57,35,243,238,135,71,
    241,251,53,57,129,236,32,129,118,163,238,182,214,135,85,37,
    165,221,246,57,132,125,96,69,221,207,112,230,47,77,240,214,
    160,196,19,125,109,82,133,98,233,239,192,251,70,1,127,3,
    194,14,66,164,136,62,142,117,19,239,75,196,78,182,56,22,
    99,107,177,85,196,177,85,36,65,12,244,65,147,75,108,81,
    155,113,107,247,143,145,12,121,106,131,224,130,105,23,219,195,
    209,130,89,41,131,159,145,119,173,162,88,57,151,37,220,141,
    50,17,216,101,34,56,75,179,229,102,14,51,220,135,70,227,
    180,94,134,71,26,125,123,134,69,42,61,183,197,178,53,130,
    176,7,212,60,44,193,37,12,237,3,46,254,14,92,93,71,
    61,157,155,41,103,229,21,214,105,190,198,59,88,126,251,79,
    178,159,102,195,50,186,170,38,186,158,148,209,37,185,98,188,
    231,163,6,181,22,33,229,212,18,120,166,195,61,22,29,165,
    42,32,171,208,173,81,28,242,54,90,20,97,42,76,190,164,
    60,123,174,30,141,88,179,196,138,70,3,53,239,38,33,106,
    25,16,207,99,191,191,27,250,47,168,186,230,180,158,192,196,
    173,101,116,107,141,234,70,17,39,174,80,143,31,127,101,116,
    124,51,9,58,186,84,239,74,221,56,18,195,52,224,116,244,
    195,190,116,250,178,191,139,231,209,253,104,224,236,197,126,143,
    253,106,23,186,127,103,116,87,12,140,139,91,134,252,83,106,
    83,39,72,19,44,57,71,129,74,51,39,148,120,68,147,161,
    243,208,225,122,229,68,185,227,239,226,168,31,40,29,68,231,
    243,4,239,100,253,172,151,243,166,245,240,45,117,39,193,104,
    69,1,142,146,8,247,243,219,198,120,250,216,88,22,31,222,
    182,235,136,196,5,224,209,75,13,117,34,125,70,13,25,199,
    189,15,147,84,163,58,56,243,159,105,9,100,236,154,184,137,
    59,109,53,79,203,52,76,223,211,59,249,229,68,241,185,184,
    70,162,208,215,62,69,186,168,17,167,156,162,171,3,106,235,
    84,164,186,13,67,156,225,118,150,137,77,67,156,227,118,158,
    137,45,67,92,224,118,145,137,75,134,184,204,237,10,19,87,
    13,113,141,219,117,38,110,24,226,13,110,111,50,241,150,33,
    222,230,246,35,38,222,49,68,135,219,187,76,252,216,16,63,
    225,246,30,19,55,13,241,62,183,191,96,98,27,138,123,177,
    95,50,241,83,232,126,70,247,74,68,121,64,169,114,234,127,
    76,149,156,75,38,2,59,148,69,94,255,63,51,164,251,100,
    34,85,115,127,13,197,102,237,170,236,40,70,245,110,234,236,
    24,9,115,188,98,183,189,212,106,242,149,209,234,229,0,243,
    130,76,250,74,106,15,223,156,16,51,112,6,214,11,251,177,
    244,179,209,181,106,244,221,42,245,61,229,45,236,112,121,228,
    232,195,110,23,175,146,22,29,143,142,217,36,158,165,79,72,
    80,90,166,82,90,134,140,156,200,183,222,5,235,232,19,16,
    173,198,31,12,100,18,158,157,110,120,100,18,108,197,25,190,
    7,229,6,114,22,143,50,203,248,189,28,234,164,237,136,242,
    236,241,106,25,221,147,226,123,14,129,216,120,189,77,251,222,
    179,50,231,146,207,117,97,43,107,154,251,219,210,139,55,199,
    224,59,70,16,37,193,144,78,220,63,59,142,27,89,62,255,
    21,207,234,254,24,94,60,55,198,104,141,190,76,148,55,72,
    227,168,16,123,77,86,154,129,238,73,47,15,169,187,99,36,
    40,191,247,85,150,249,195,175,253,228,48,231,121,254,59,23,
    77,193,105,96,148,170,62,30,243,94,232,43,255,130,248,107,
    176,145,124,218,105,156,39,171,123,87,44,44,8,100,158,255,
    113,196,1,215,98,164,73,90,133,18,163,3,234,246,152,183,
    35,252,4,244,204,242,127,158,131,4,211,5,70,73,81,27,
    99,248,113,171,152,6,44,237,234,81,146,68,161,195,79,234,
    147,49,124,185,242,51,133,155,182,80,190,243,118,113,231,70,
    242,174,195,71,146,105,31,116,129,174,54,175,114,206,37,27,
    95,143,147,230,89,48,158,60,103,229,113,48,200,100,158,30,
    101,129,220,86,126,28,95,141,150,11,108,6,45,231,201,124,
    9,123,201,12,209,79,218,131,87,14,146,48,190,131,198,7,
    206,121,92,205,66,25,75,37,47,166,109,253,219,142,222,14,
    135,18,183,252,233,208,243,244,237,14,62,199,158,55,57,251,
    224,47,112,230,29,90,2,217,147,246,193,53,190,115,30,247,
    95,175,212,5,31,87,46,252,80,167,245,32,176,234,187,141,
    33,95,206,130,59,95,230,69,254,49,201,28,11,184,108,82,
    24,188,244,251,250,130,159,47,167,93,118,232,61,147,90,185,
    232,233,171,48,190,79,210,55,127,88,34,249,44,197,71,39,
    151,46,136,25,172,90,175,237,168,175,127,205,224,208,8,51,
    31,245,230,95,128,100,22,249,49,186,141,159,74,46,62,2,
    176,191,71,46,6,216,103,153,236,69,57,154,140,101,151,252,
    69,69,38,131,169,91,227,80,50,242,230,196,248,87,159,234,
    245,13,233,11,190,16,125,142,77,139,126,89,152,175,139,41,
    11,171,53,254,55,196,156,168,138,217,102,221,174,215,234,85,
    27,49,64,148,37,49,99,215,27,179,130,254,55,208,247,13,
    107,99,165,46,254,3,27,236,98,161,
};

EmbeddedPython embedded_m5_internal_param_RubyCache(
    "m5/internal/param_RubyCache.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/build/X86/python/m5/internal/param_RubyCache.py",
    "m5.internal.param_RubyCache",
    data_m5_internal_param_RubyCache,
    2426,
    7984);

} // anonymous namespace
