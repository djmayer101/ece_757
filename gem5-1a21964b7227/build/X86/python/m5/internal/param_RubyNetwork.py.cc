#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RubyNetwork[] = {
    120,156,205,89,253,110,220,198,17,159,37,239,78,186,147,238,
    116,250,176,62,44,127,208,78,28,28,90,219,23,187,181,149,
    162,134,145,198,245,31,1,10,37,160,2,216,97,211,18,20,
    185,146,40,241,200,3,185,146,124,129,244,79,101,180,125,132,
    190,68,95,161,207,209,183,105,103,102,185,212,201,178,26,23,
    45,224,147,196,197,114,118,56,187,51,251,155,143,93,133,80,
    254,172,225,243,165,3,80,252,83,0,68,248,39,224,0,32,
    17,224,9,16,82,64,180,8,251,117,200,214,64,68,117,120,
    11,224,89,32,45,56,195,142,13,191,183,32,109,227,0,126,
    213,128,3,155,73,2,70,45,144,53,240,234,240,42,93,132,
    154,108,192,126,11,178,41,16,248,147,90,32,94,71,83,16,
    77,195,91,156,1,59,77,150,57,13,81,139,59,77,136,102,
    184,211,130,81,23,228,12,120,179,128,252,94,27,133,221,71,
    97,29,22,230,176,176,8,135,150,32,106,19,63,174,231,123,
    98,173,17,171,158,165,195,114,230,160,92,93,23,188,174,233,
    207,131,55,111,250,11,224,45,152,254,34,120,139,166,191,4,
    222,146,233,95,3,239,154,233,47,131,183,108,250,43,224,173,
    152,254,42,120,171,166,191,6,222,154,233,95,7,239,186,233,
    175,131,183,110,250,55,192,187,97,250,55,193,187,9,209,28,
    200,121,136,111,193,14,26,189,91,41,117,27,164,13,177,3,
    158,3,18,255,110,195,25,238,75,52,207,188,119,152,119,161,
    226,189,203,188,159,128,247,9,72,252,187,171,121,27,176,213,
    187,134,187,28,255,11,127,122,184,203,160,102,177,57,146,121,
    17,103,169,31,167,59,89,108,209,120,131,26,194,68,72,205,
    20,62,109,124,94,16,56,254,14,140,140,200,42,193,113,10,
    40,88,208,250,15,44,56,229,206,169,5,163,30,156,8,136,
    107,16,217,112,130,211,212,105,1,187,2,206,44,248,193,38,
    134,83,108,107,184,149,14,212,148,198,197,146,222,74,45,106,
    10,78,235,112,82,135,45,241,250,196,34,202,126,19,178,62,
    136,31,111,176,220,105,150,107,193,9,182,53,56,171,193,105,
    3,94,33,23,146,226,38,89,0,63,67,101,9,143,91,189,
    26,174,120,115,76,101,82,39,138,243,52,24,72,181,128,125,
    127,24,228,193,192,119,15,183,71,155,82,29,103,249,65,175,
    101,248,178,226,225,48,80,123,46,127,104,147,85,6,67,197,
    2,179,84,170,25,236,236,196,105,228,15,178,232,48,145,106,
    154,164,249,59,113,34,125,159,7,191,30,12,179,92,189,204,
    243,44,119,201,176,76,76,178,160,250,162,78,54,78,178,66,
    246,104,54,158,198,37,241,138,184,119,134,44,145,22,192,139,
    165,143,35,89,132,121,60,84,184,95,90,34,113,147,180,30,
    237,20,55,197,49,54,125,90,69,49,12,66,217,31,202,108,
    152,200,126,216,15,179,36,137,211,98,208,151,161,220,120,178,
    209,31,230,217,190,12,21,189,250,244,190,43,7,79,30,60,
    10,30,63,250,213,211,95,110,111,60,126,188,209,223,62,140,
    147,168,255,250,139,167,253,225,72,237,101,105,127,240,164,31,
    167,74,162,241,146,254,37,179,61,68,166,5,94,64,188,235,
    199,172,186,191,39,147,161,204,155,68,189,78,139,19,93,49,
    43,26,194,22,61,209,225,94,27,251,55,172,25,177,25,147,
    242,33,25,132,208,103,27,188,253,3,120,91,17,23,251,22,
    100,243,32,78,24,154,200,141,155,143,160,218,18,52,106,241,
    232,125,16,202,42,233,177,77,24,33,234,2,126,195,40,68,
    56,34,239,51,2,133,72,209,31,8,73,117,2,187,134,24,
    98,83,131,46,235,224,88,157,190,32,81,22,77,81,131,217,
    97,23,165,79,51,213,34,42,175,101,92,110,138,4,213,164,
    200,131,180,101,92,194,159,24,203,91,61,210,105,147,225,164,
    246,226,34,59,78,121,211,168,207,238,183,133,230,250,118,244,
    205,54,237,69,113,27,9,223,103,135,78,24,164,105,166,156,
    32,138,156,64,169,60,222,62,84,178,112,84,230,220,43,24,
    157,238,188,65,100,37,111,52,52,8,36,180,32,2,245,75,
    20,135,10,95,22,249,133,183,166,144,10,209,180,151,69,5,
    210,73,196,174,84,110,221,64,126,47,40,104,70,213,193,254,
    111,204,212,12,225,94,195,0,174,144,201,142,106,49,118,131,
    162,240,121,106,162,51,76,73,210,81,144,28,74,69,252,133,
    10,20,174,128,186,122,210,9,1,234,42,217,195,152,131,20,
    246,211,44,141,70,168,65,28,222,161,197,173,50,92,219,48,
    143,16,93,198,167,41,174,137,41,232,136,85,49,111,133,164,
    108,173,132,42,195,116,153,76,3,140,14,81,70,38,132,236,
    25,70,176,158,197,241,135,181,102,255,38,233,28,148,220,117,
    106,110,80,115,147,154,91,198,48,31,223,58,237,119,173,243,
    144,86,100,177,73,66,187,84,190,242,81,247,130,143,118,198,
    124,244,140,124,141,252,204,34,135,60,247,51,155,12,148,205,
    24,15,98,63,70,224,144,103,157,251,13,27,206,237,146,65,
    26,6,242,46,225,120,28,204,187,99,96,118,105,207,24,201,
    238,245,171,140,236,76,162,145,119,181,145,31,209,138,102,75,
    220,117,24,111,51,34,36,208,144,41,166,140,185,127,139,157,
    209,10,153,123,220,206,43,152,124,95,81,17,134,73,148,51,
    49,134,184,215,58,253,150,214,215,157,26,33,116,199,134,229,
    50,51,22,20,156,81,189,55,35,39,219,113,20,152,53,60,
    187,87,60,188,87,252,26,3,142,243,156,67,152,14,57,58,
    168,228,114,152,99,240,104,242,139,14,2,62,7,4,191,204,
    108,184,25,84,105,240,30,242,22,112,108,41,48,174,96,216,
    155,16,251,183,42,251,147,58,27,180,156,22,27,223,134,21,
    124,90,130,215,236,103,28,153,185,18,226,81,124,190,162,109,
    32,75,72,160,234,216,221,210,26,177,178,164,182,219,187,128,
    178,143,174,170,251,115,156,251,75,227,194,13,168,48,69,143,
    77,202,144,71,253,5,184,138,20,240,103,32,252,32,76,74,
    31,100,143,55,94,191,72,236,100,141,19,241,222,172,108,149,
    222,108,149,193,16,221,125,216,230,100,91,102,105,44,244,254,
    58,22,41,207,108,16,156,58,237,178,88,28,79,157,181,42,
    4,48,250,62,40,61,214,46,196,10,119,173,10,7,118,21,
    14,206,195,109,85,216,97,156,251,232,219,196,206,133,11,241,
    73,167,151,231,120,164,36,116,83,44,89,99,40,187,79,205,
    131,10,96,194,208,62,234,242,111,195,213,57,213,215,81,154,
    98,87,81,99,173,230,26,236,95,229,247,149,127,213,141,127,
    61,174,252,75,114,222,120,203,7,15,106,45,66,202,153,37,
    240,148,137,213,22,29,238,106,32,235,224,53,200,19,185,164,
    22,165,163,10,19,51,41,214,94,200,74,99,182,172,176,162,
    209,64,205,155,201,240,91,6,196,179,36,24,108,71,193,243,
    63,208,98,104,69,161,241,92,203,104,215,29,215,142,124,78,
    92,161,32,191,126,110,180,60,154,12,45,93,202,123,149,118,
    236,141,81,22,114,72,250,110,79,58,3,57,216,198,19,234,
    94,60,116,118,146,96,151,247,214,46,181,255,198,104,175,24,
    28,239,22,15,197,207,168,205,156,48,75,49,245,28,134,42,
    203,157,72,226,145,77,70,206,3,135,243,150,19,23,78,176,
    141,163,65,168,180,27,93,140,21,92,215,6,249,110,193,37,
    236,193,49,117,39,195,108,101,42,142,211,24,235,251,63,26,
    243,233,131,100,149,132,184,140,215,62,137,75,192,163,152,26,
    233,112,250,148,26,50,143,251,25,76,86,174,234,227,220,63,
    208,34,200,224,13,177,142,149,183,98,4,159,179,125,75,223,
    21,151,67,198,223,62,36,100,232,43,41,100,144,13,136,167,
    184,157,166,44,229,53,13,177,197,237,12,19,103,13,177,205,
    109,135,137,115,134,216,229,118,158,137,11,38,24,45,50,113,
    137,175,138,244,77,217,50,5,166,198,255,24,152,216,111,39,
    100,143,200,99,163,255,103,60,114,31,79,168,114,238,47,160,
    44,143,174,138,69,86,137,64,214,124,67,199,34,189,151,88,
    68,141,150,198,10,112,54,132,120,149,118,169,72,63,225,242,
    221,183,116,157,78,27,79,194,54,117,249,194,87,59,228,196,
    169,60,246,47,1,95,87,226,132,167,96,56,148,105,116,94,
    101,243,200,132,152,145,34,204,62,84,69,204,44,150,212,75,
    248,92,118,129,154,182,183,49,0,99,189,94,161,126,125,114,
    52,34,96,100,85,160,93,185,16,104,93,218,121,29,90,171,
    168,170,183,241,179,247,197,46,31,83,146,202,179,196,31,20,
    88,45,197,63,74,58,3,126,40,43,86,87,138,102,122,119,
    64,125,254,222,239,211,67,2,173,159,237,248,71,113,174,14,
    131,196,79,245,120,193,147,254,215,31,209,244,148,36,175,102,
    81,119,222,43,51,71,138,95,140,10,37,7,60,243,79,115,
    209,84,116,237,57,70,83,183,222,251,149,202,134,89,146,237,
    142,88,240,79,176,144,84,74,158,134,192,80,229,27,161,72,
    38,82,201,203,30,199,230,46,111,28,34,137,213,66,54,194,
    3,47,31,15,241,61,241,253,73,74,160,95,128,190,184,47,
    232,50,150,18,104,67,92,43,127,155,181,166,224,218,230,157,
    123,126,189,242,79,193,28,134,70,124,167,3,238,92,133,98,
    190,137,54,21,4,71,57,58,252,111,6,3,125,55,200,183,
    90,238,93,106,62,53,62,192,17,74,159,158,249,0,170,175,
    11,48,162,113,225,197,117,150,75,247,74,108,220,115,77,182,
    244,54,47,86,196,23,73,22,30,200,72,223,144,170,185,138,
    190,21,15,74,26,69,139,40,15,208,44,124,211,44,243,56,
    72,200,31,58,21,239,119,229,86,179,216,175,130,34,14,191,
    78,213,239,226,244,192,63,146,84,22,242,197,181,102,29,31,
    229,194,99,140,236,102,120,208,204,199,214,192,84,230,92,48,
    130,53,143,145,91,205,247,242,205,127,154,175,28,85,75,23,
    76,241,66,59,120,130,83,242,63,96,198,13,193,117,18,243,
    151,91,207,232,204,229,110,92,208,18,23,223,229,47,83,7,
    129,227,10,255,24,255,126,130,240,172,15,65,250,90,233,57,
    223,34,17,54,187,116,37,59,215,20,83,22,38,22,252,109,
    137,142,168,139,217,118,211,110,54,154,117,27,49,79,148,69,
    49,99,55,91,179,226,234,223,53,244,136,150,181,214,110,138,
    127,3,116,80,203,59,
};

EmbeddedPython embedded_m5_internal_param_RubyNetwork(
    "m5/internal/param_RubyNetwork.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/build/X86/python/m5/internal/param_RubyNetwork.py",
    "m5.internal.param_RubyNetwork",
    data_m5_internal_param_RubyNetwork,
    2342,
    7433);

} // anonymous namespace
