#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_NSGigE[] = {
    120,156,205,88,109,111,220,198,17,158,229,189,72,119,210,157,
    78,47,150,45,191,50,78,236,28,90,219,87,187,181,149,182,
    134,17,199,54,138,124,136,98,80,5,236,48,5,88,138,220,
    59,81,226,145,7,114,101,231,2,233,75,101,180,253,208,191,
    210,191,208,95,86,160,157,153,229,82,148,28,195,1,90,224,
    164,19,23,195,225,238,236,206,204,51,51,187,27,64,241,119,
    21,159,47,109,128,252,223,2,32,196,127,1,251,0,177,0,
    87,128,144,2,194,85,216,107,64,186,1,34,108,192,59,0,
    215,2,105,193,49,18,53,248,222,130,164,131,31,112,84,19,
    246,107,204,18,48,109,131,172,131,219,128,87,201,42,212,101,
    19,246,218,144,206,129,192,191,196,2,241,58,156,131,112,30,
    222,225,12,72,180,88,230,60,132,109,38,90,16,46,48,209,
    134,105,15,228,2,184,139,128,253,221,14,10,187,131,194,186,
    44,204,102,97,33,126,90,131,176,67,253,113,61,223,81,215,
    58,117,213,179,116,89,206,18,20,171,235,129,219,51,244,50,
    184,203,134,94,1,119,197,208,171,224,174,26,122,13,220,53,
    67,95,0,247,130,161,215,193,93,55,244,69,112,47,26,250,
    18,184,151,12,189,1,238,134,161,47,131,123,217,208,87,192,
    189,98,232,171,224,94,53,244,53,112,175,25,250,58,184,215,
    13,125,3,220,27,134,182,193,181,33,92,2,217,131,232,19,
    24,162,99,122,165,226,55,65,214,32,250,20,220,79,65,226,
    255,77,56,70,223,133,203,220,247,51,238,187,82,246,189,197,
    125,111,131,123,27,36,254,223,210,125,155,176,221,191,128,72,
    136,254,131,127,125,68,2,168,69,108,222,200,44,143,210,196,
    139,146,97,26,89,244,189,73,13,225,38,160,102,14,159,14,
    62,207,8,64,255,4,70,79,104,21,0,58,2,20,44,104,
    253,251,22,28,49,113,100,193,180,15,135,2,162,58,132,53,
    56,196,105,26,180,128,145,128,99,11,254,84,163,14,71,216,
    214,209,221,54,212,149,198,206,154,118,183,22,53,7,71,13,
    56,108,192,182,120,125,104,17,103,175,5,233,0,196,143,87,
    89,238,60,203,181,224,16,219,58,28,215,225,168,9,175,176,
    23,178,162,22,89,0,135,161,178,132,217,237,126,29,87,188,
    85,81,153,212,9,163,44,241,199,82,145,90,222,196,207,252,
    177,183,181,253,135,104,244,162,223,54,93,210,252,222,196,87,
    187,14,143,169,145,65,198,19,197,178,210,68,170,5,36,134,
    81,18,122,227,52,60,136,165,154,39,65,222,48,138,165,231,
    241,199,175,199,147,52,83,47,178,44,205,28,178,41,51,227,
    212,47,71,52,200,188,113,154,203,62,205,198,211,56,36,94,
    81,239,225,132,37,210,2,120,157,52,56,148,121,144,69,19,
    133,174,210,18,169,55,73,235,147,147,184,201,51,108,6,180,
    138,124,226,7,114,48,145,233,36,150,131,96,16,164,113,28,
    37,249,120,32,3,185,249,112,115,48,201,210,61,25,40,122,
    245,232,125,36,199,15,239,222,247,31,220,255,237,163,223,236,
    108,62,120,176,57,216,57,136,226,112,240,250,139,71,131,201,
    84,237,166,201,96,252,112,16,37,74,162,221,226,65,213,98,
    247,240,251,10,205,253,54,26,121,17,107,237,237,202,120,34,
    179,22,113,47,211,186,68,79,44,138,166,168,137,190,232,50,
    213,65,250,170,181,32,182,34,210,59,32,91,16,230,106,6,
    101,255,2,118,38,162,97,207,130,116,25,196,33,3,18,123,
    163,203,17,74,219,130,190,90,252,245,14,8,101,21,252,168,
    70,200,32,238,10,142,97,236,33,8,177,239,99,130,130,72,
    48,10,8,63,13,130,184,6,22,34,82,67,45,237,226,183,
    6,141,32,81,22,77,81,135,197,73,15,165,207,51,215,34,
    46,175,165,42,55,65,134,106,81,78,66,222,58,46,225,47,
    140,224,237,62,233,180,197,72,82,187,81,158,190,77,216,95,
    68,115,208,109,163,185,94,78,191,221,33,55,228,55,144,241,
    93,122,96,7,126,146,164,202,246,195,208,246,149,202,162,157,
    3,37,115,91,165,246,173,156,129,233,44,27,48,150,242,166,
    19,3,62,2,10,130,79,191,132,81,160,240,101,149,95,216,
    53,185,84,8,164,221,52,204,145,79,34,70,82,57,13,131,
    246,93,63,167,25,85,23,233,167,102,106,70,111,191,105,176,
    150,203,120,168,218,12,91,63,207,61,158,154,248,140,80,146,
    244,198,143,15,164,162,254,185,242,21,174,128,72,61,233,236,
    49,122,137,76,97,44,65,186,122,73,154,132,83,92,124,20,
    124,66,235,186,196,72,237,192,50,162,115,29,159,150,184,32,
    230,160,43,46,137,101,43,32,61,235,5,74,25,161,235,100,
    21,96,96,136,34,21,33,90,143,49,101,245,45,78,56,172,
    48,71,53,73,231,44,228,92,161,134,106,177,115,141,154,235,
    198,38,51,53,76,231,172,97,238,209,98,44,182,70,80,43,
    244,46,35,211,57,21,153,221,74,100,30,83,132,81,116,89,
    20,134,39,209,85,35,219,164,11,38,110,56,122,17,46,20,
    79,39,209,194,54,115,122,100,139,166,1,186,67,232,173,66,
    120,84,129,176,67,238,98,252,58,151,63,100,95,251,156,217,
    119,164,237,123,159,22,179,88,160,173,203,40,91,16,1,65,
    133,172,48,103,44,253,28,137,233,69,178,116,213,196,23,177,
    198,190,162,253,24,214,74,46,184,152,211,94,235,42,91,24,
    94,19,117,194,229,176,6,235,69,1,204,41,27,163,102,63,
    76,237,116,104,43,48,107,120,124,43,191,119,43,255,61,102,
    24,251,9,231,44,157,99,116,22,201,228,36,195,108,209,226,
    23,29,245,30,103,0,175,168,98,232,7,218,80,176,251,216,
    250,156,76,114,76,36,152,231,102,111,250,118,105,122,210,100,
    147,86,210,102,187,215,224,34,62,109,193,203,245,82,206,194,
    188,215,225,175,248,124,69,30,32,35,72,160,61,178,179,173,
    149,97,61,73,99,167,127,10,91,179,212,210,249,37,78,251,
    165,137,217,38,148,72,162,167,70,122,80,8,253,13,120,139,
    40,224,175,64,168,65,112,20,65,199,33,110,194,124,149,186,
    147,33,14,197,79,22,95,171,8,95,171,72,124,24,223,147,
    14,215,212,162,24,227,46,238,239,149,172,120,92,3,193,21,
    178,86,236,4,171,21,178,94,198,60,99,238,103,85,193,250,
    169,228,224,108,148,241,95,43,227,255,36,181,150,91,55,76,
    108,51,197,225,188,94,131,71,234,188,56,65,33,213,154,107,
    98,205,170,96,235,14,53,119,75,88,9,195,155,213,202,111,
    192,135,171,166,167,147,49,229,169,188,206,10,45,53,185,228,
    235,225,101,60,53,76,60,61,40,227,73,114,117,120,199,71,
    9,106,45,130,199,177,37,240,108,137,59,41,58,210,213,65,
    54,192,109,82,228,241,78,89,20,129,41,76,122,164,180,122,
    170,246,84,172,88,2,68,67,128,154,31,102,30,167,140,130,
    199,177,63,222,9,253,39,127,166,117,208,98,2,19,169,150,
    81,172,87,85,140,98,76,124,64,55,126,253,149,81,240,205,
    204,21,116,168,176,149,138,113,224,133,105,192,217,231,143,187,
    210,30,203,241,14,158,52,119,163,137,61,140,253,17,123,180,
    86,40,254,173,81,92,49,36,206,110,12,242,95,80,155,218,
    65,154,96,109,57,8,84,154,217,161,196,243,151,12,237,187,
    54,23,38,59,202,109,127,7,191,250,129,210,97,115,58,45,
    240,78,213,207,70,57,35,116,255,45,145,51,183,88,81,102,
    163,36,194,205,186,111,44,167,15,132,101,149,225,61,185,142,
    65,156,29,207,85,106,170,147,230,35,106,200,50,206,109,56,
    55,197,104,64,139,165,249,201,204,77,113,5,183,209,124,222,
    209,61,94,82,239,252,253,204,240,143,159,147,25,244,125,83,
    145,31,154,212,83,206,209,93,0,181,45,42,69,110,219,48,
    23,184,93,100,102,199,48,187,220,46,49,179,7,197,69,215,
    50,51,87,248,78,168,201,156,53,202,57,115,255,99,206,225,
    184,156,189,55,40,34,71,255,207,84,227,60,56,127,122,57,
    191,134,98,147,243,161,52,35,170,74,119,116,154,137,132,57,
    141,176,195,182,180,142,124,177,178,122,6,175,94,144,73,95,
    73,237,216,43,231,193,0,156,196,244,170,162,210,189,70,203,
    134,209,116,179,212,244,152,55,125,211,181,202,49,129,189,45,
    94,37,61,58,74,28,178,49,60,75,159,38,160,180,73,189,
    180,9,65,37,145,111,189,170,93,244,81,129,150,226,79,38,
    50,9,79,142,1,252,101,230,86,226,12,57,134,114,191,181,
    136,123,254,53,124,222,15,108,210,179,162,54,59,186,81,198,
    242,185,112,57,99,62,51,206,230,123,220,147,26,225,144,171,
    117,85,40,11,130,243,187,210,121,246,89,64,135,99,31,55,
    114,158,31,199,105,128,24,162,147,233,199,59,225,14,80,45,
    145,161,78,243,213,245,159,26,24,250,202,247,134,153,212,178,
    63,210,133,36,119,10,201,37,247,3,131,100,30,124,76,110,
    217,229,148,92,195,101,84,112,140,135,50,150,168,87,85,0,
    227,188,184,110,192,17,42,75,167,120,228,229,83,34,190,199,
    158,119,78,202,236,23,56,237,144,230,167,171,87,42,179,77,
    190,175,162,95,171,222,18,188,239,57,115,151,175,23,253,57,
    152,51,209,148,239,114,192,89,42,97,194,87,206,102,139,193,
    201,131,78,254,91,254,88,223,4,242,69,150,115,147,154,207,
    12,210,56,250,245,249,153,207,161,250,174,0,19,5,111,202,
    120,15,230,208,125,18,95,17,107,37,94,168,93,153,61,151,
    111,190,242,209,61,203,239,177,163,64,50,202,52,247,101,16,
    21,188,238,9,47,246,213,48,205,198,149,193,95,39,42,123,
    150,98,147,198,188,219,208,220,237,105,174,228,152,165,201,228,
    96,236,125,35,199,105,54,253,38,13,165,162,200,121,90,108,
    23,53,219,123,35,105,95,169,214,202,225,167,191,87,22,133,
    12,125,113,203,40,210,188,103,24,12,251,50,44,248,39,125,
    183,35,211,151,242,73,152,249,232,82,190,24,151,89,228,199,
    209,143,146,17,247,52,12,51,199,79,70,210,172,226,68,192,
    243,177,255,190,85,162,180,224,145,178,85,131,242,254,171,82,
    192,24,201,153,28,69,104,137,140,157,80,237,93,164,113,2,
    147,218,56,27,74,213,145,231,3,245,250,4,165,111,158,158,
    240,69,211,107,108,122,116,87,187,212,18,115,22,230,119,252,
    181,69,87,52,196,98,167,85,107,53,91,141,26,70,6,113,
    86,197,66,173,213,94,20,31,251,109,96,244,180,173,141,78,
    75,252,23,151,40,154,35,
};

EmbeddedPython embedded_m5_internal_param_NSGigE(
    "m5/internal/param_NSGigE.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/build/X86/python/m5/internal/param_NSGigE.py",
    "m5.internal.param_NSGigE",
    data_m5_internal_param_NSGigE,
    2375,
    7485);

} // anonymous namespace
