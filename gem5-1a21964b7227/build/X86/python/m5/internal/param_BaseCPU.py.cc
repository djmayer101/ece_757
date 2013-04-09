#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BaseCPU[] = {
    120,156,205,90,123,115,219,198,17,95,128,15,137,122,191,109,
    217,178,77,63,100,51,126,49,118,98,203,73,93,199,143,60,
    234,214,177,21,202,137,29,180,51,24,8,56,73,176,72,128,
    5,142,114,152,145,255,169,50,109,103,218,63,250,69,250,21,
    250,213,218,221,61,28,8,154,164,173,38,153,17,37,97,231,
    176,183,184,187,221,251,237,222,222,157,92,72,126,206,226,115,
    191,12,16,223,49,1,60,252,51,96,23,160,110,128,101,128,
    33,12,240,230,225,85,1,194,101,48,188,2,252,4,96,153,
    32,76,56,192,66,14,254,104,66,48,137,21,248,85,17,118,
    115,204,50,160,61,6,34,15,86,1,94,4,243,144,23,69,
    120,53,6,225,8,24,248,19,152,96,188,244,70,192,27,133,
    159,176,7,44,148,184,205,81,240,198,184,80,2,111,156,11,
    99,208,158,1,49,14,214,4,160,188,53,137,141,93,197,198,
    166,184,177,50,55,230,97,213,2,120,147,36,143,227,249,158,
    68,243,36,170,122,153,226,118,166,33,25,221,12,88,51,186,
    60,11,214,172,46,207,129,53,167,203,243,96,205,235,242,2,
    88,11,186,188,8,214,162,46,47,129,181,164,203,199,192,58,
    166,203,199,193,58,174,203,203,96,45,235,242,9,176,78,232,
    242,73,176,78,234,242,10,88,43,186,124,10,172,83,186,124,
    26,172,211,186,124,6,172,51,186,92,6,171,172,203,103,193,
    58,171,203,231,192,58,167,203,231,193,58,175,203,23,192,186,
    160,203,171,96,173,130,55,13,98,9,252,139,176,133,147,58,
    147,26,237,18,136,28,248,21,176,42,32,240,239,18,28,224,
    188,123,179,44,251,1,203,206,165,178,151,89,246,10,88,87,
    64,224,223,101,37,91,132,141,202,34,162,200,255,47,254,84,
    12,44,201,9,36,123,34,138,253,48,176,253,96,43,244,77,
    170,47,18,33,204,185,68,70,240,153,196,231,17,129,239,223,
    192,200,243,204,4,124,111,0,27,54,104,252,187,38,188,225,
    194,27,19,218,21,216,55,192,207,131,151,131,125,236,166,64,
    3,216,54,224,192,132,63,229,72,224,13,210,60,66,165,12,
    121,169,112,183,160,160,162,154,26,129,55,5,216,47,192,134,
    241,114,223,36,206,171,18,132,85,48,126,92,225,118,71,185,
    93,19,246,145,230,225,32,15,111,138,240,2,165,144,229,151,
    200,2,248,25,42,75,120,223,168,228,113,196,79,51,42,147,
    58,158,31,5,78,67,200,41,44,219,77,39,114,26,246,67,
    39,22,143,214,191,173,140,105,153,48,190,222,116,228,78,141,
    63,202,145,69,26,77,201,141,133,129,144,227,88,216,242,3,
    207,110,132,94,171,46,228,40,181,100,111,249,117,97,219,92,
    249,184,209,12,35,249,69,20,133,81,141,140,202,204,122,232,
    164,95,20,200,190,245,48,22,21,234,141,187,169,81,243,146,
    164,183,154,220,34,13,128,7,74,31,123,34,118,35,191,41,
    113,174,84,139,36,77,173,85,104,150,152,196,49,146,42,141,
    34,110,58,174,168,54,69,216,172,139,170,91,117,195,122,221,
    15,226,70,85,184,98,237,214,90,181,25,133,175,132,43,233,
    213,166,247,109,209,184,117,237,134,115,243,198,39,183,63,222,
    92,187,121,115,173,186,217,242,235,94,245,229,157,219,213,102,
    91,238,132,65,181,113,171,234,7,82,160,225,234,213,46,147,
    93,71,129,57,234,252,181,191,109,251,172,182,189,35,234,77,
    17,149,136,123,130,6,102,204,24,19,70,209,200,25,21,99,
    138,75,147,88,94,49,199,141,167,62,41,238,146,49,8,117,
    57,141,179,255,0,79,39,226,225,149,9,225,44,24,251,12,
    73,148,198,73,71,48,109,24,84,107,114,237,85,48,164,153,
    240,253,28,97,131,184,115,248,13,163,15,97,136,178,119,9,
    12,70,128,126,64,8,42,16,200,21,180,16,147,10,108,225,
    20,214,21,232,11,106,202,164,46,242,48,209,156,193,214,71,
    153,107,18,151,199,146,109,55,64,134,44,81,68,67,222,18,
    14,225,47,140,225,141,10,233,244,148,161,36,119,252,56,124,
    29,240,132,81,153,221,110,3,205,181,222,126,182,73,243,16,
    159,65,198,247,97,171,236,58,65,16,202,178,227,121,101,71,
    202,200,223,108,73,17,151,101,88,94,141,25,153,181,89,141,
    198,180,189,118,83,163,143,144,130,232,83,47,158,239,74,124,
    153,231,23,158,154,88,72,68,210,78,232,197,200,167,38,182,
    133,172,21,52,220,119,156,152,122,100,151,120,160,187,102,248,
    86,138,26,108,177,168,111,201,49,198,173,19,199,54,119,77,
    124,134,40,181,180,231,212,91,66,146,124,44,29,137,35,160,
    162,234,116,8,64,122,156,108,161,77,65,202,218,65,24,120,
    109,28,189,239,210,234,26,31,103,168,78,194,44,194,115,9,
    159,146,177,104,140,192,148,113,220,152,53,93,82,52,159,192,
    148,33,186,68,102,1,70,134,145,68,35,132,235,1,70,173,
    138,201,49,135,53,102,191,166,214,57,16,213,78,18,89,33,
    114,138,200,105,109,148,163,181,204,228,219,150,185,78,163,49,
    217,28,110,46,81,60,245,205,90,151,111,78,101,124,243,128,
    124,140,252,203,36,71,236,248,87,142,140,19,142,107,207,97,
    255,69,192,144,71,117,252,133,141,86,155,33,99,20,53,212,
    107,132,223,44,136,183,51,32,174,209,124,49,130,107,39,6,
    25,184,60,108,6,222,86,6,190,65,163,153,72,240,54,197,
    56,27,55,92,2,11,153,97,68,155,250,115,44,180,143,145,
    169,179,54,62,134,11,237,11,74,232,112,193,228,85,23,195,
    218,75,181,212,38,150,87,133,60,33,115,43,7,75,201,42,
    24,83,64,70,213,126,104,151,195,173,178,4,61,134,187,171,
    241,245,213,248,55,24,100,202,247,56,108,169,48,163,2,73,
    36,154,17,6,140,18,191,40,199,183,57,8,216,201,74,134,
    19,65,89,5,207,31,155,159,227,73,140,177,4,67,221,16,
    216,126,44,181,61,169,178,70,67,25,99,195,231,224,24,62,
    99,6,143,215,14,57,18,115,198,195,181,248,60,164,41,32,
    43,8,160,44,187,182,161,180,97,69,73,229,90,165,11,93,
    71,170,102,237,10,246,123,95,187,109,17,82,44,209,147,35,
    69,200,139,254,6,156,41,26,240,87,32,220,32,60,18,191,
    99,47,215,158,62,79,226,100,137,125,163,239,10,108,38,30,
    108,38,193,15,93,188,57,201,11,107,178,34,99,50,247,247,
    76,100,60,200,129,193,203,100,46,73,8,179,203,100,62,117,
    123,70,221,161,150,194,124,87,124,168,45,167,33,32,151,134,
    128,78,120,77,19,56,140,109,71,139,196,81,53,8,155,244,
    249,162,131,67,90,112,78,25,11,102,6,93,87,137,92,75,
    129,101,104,222,145,13,253,12,12,94,59,109,21,145,41,86,
    197,121,214,104,186,200,62,149,124,159,250,84,65,251,212,119,
    169,79,9,94,35,126,226,77,5,81,147,16,114,96,26,184,
    67,197,140,138,54,134,121,16,5,176,138,144,236,106,71,104,
    163,148,108,69,71,244,86,116,52,217,138,162,135,82,156,98,
    236,235,135,227,40,197,223,174,85,42,99,235,20,71,10,41,
    68,126,56,122,127,102,176,220,173,59,141,77,207,185,39,104,
    32,52,26,87,123,180,169,53,155,201,106,70,190,104,12,80,
    142,95,63,212,26,238,29,189,134,181,27,10,5,74,51,246,
    80,47,116,57,76,61,223,17,229,134,104,108,226,206,116,199,
    111,150,183,234,206,54,207,105,46,209,252,153,214,92,50,112,
    222,78,34,226,203,68,195,178,27,6,184,12,181,92,25,70,
    101,79,224,118,77,120,229,107,101,94,195,202,126,92,118,54,
    177,214,113,165,114,175,238,248,193,121,173,19,109,199,156,194,
    238,190,166,226,209,155,44,89,146,253,192,199,220,126,43,5,
    133,134,122,10,138,73,101,26,223,208,217,22,171,248,84,97,
    128,247,142,179,29,247,36,183,150,238,206,179,86,98,136,147,
    48,12,235,25,39,28,233,200,118,186,116,53,19,40,124,149,
    129,129,210,21,29,224,159,253,212,93,200,168,43,157,93,241,
    108,79,68,95,70,97,163,147,180,212,62,30,14,181,41,31,
    203,142,208,255,37,179,60,223,51,203,194,27,182,121,30,79,
    231,153,199,246,234,215,66,245,86,189,21,239,60,127,242,48,
    30,42,109,9,213,233,200,118,181,174,21,50,66,39,165,84,
    231,82,188,218,98,255,77,17,201,182,74,144,110,19,161,224,
    86,187,72,228,14,145,79,137,220,37,114,15,134,39,27,173,
    2,31,82,67,76,170,20,141,147,184,151,46,226,67,191,188,
    25,74,68,215,233,187,184,55,65,248,198,60,68,130,160,14,
    175,81,64,20,193,31,97,58,74,185,40,102,4,9,115,140,
    233,56,51,39,52,115,146,233,20,51,167,53,115,134,233,44,
    51,231,52,115,158,233,2,51,23,53,115,137,233,49,102,30,
    215,204,101,166,39,152,121,82,51,87,152,158,98,230,105,205,
    60,195,180,204,204,179,154,121,142,233,121,102,94,208,204,85,
    166,23,153,121,73,51,43,76,63,96,230,101,205,188,194,244,
    42,51,175,105,230,117,166,85,102,126,168,153,55,152,222,100,
    230,71,154,249,49,211,91,204,188,173,153,107,76,239,48,243,
    19,205,252,148,233,111,152,121,87,51,127,203,244,30,51,63,
    211,204,251,76,31,48,243,161,102,62,98,250,57,51,191,208,
    204,47,153,126,197,204,223,105,230,99,166,191,103,230,31,52,
    243,9,211,175,153,249,84,51,159,49,93,103,230,55,58,103,
    172,49,115,3,172,231,58,109,252,150,114,195,34,252,178,220,
    144,211,167,33,112,46,74,156,154,240,43,166,132,181,155,67,
    168,88,237,35,72,118,173,131,210,65,51,9,25,172,245,90,
    186,58,28,240,222,182,189,144,57,15,97,35,24,47,130,25,
    58,51,217,231,5,196,54,213,177,9,164,235,72,190,107,29,
    9,196,107,187,43,74,169,67,17,194,144,211,108,138,192,203,
    228,14,179,195,97,62,90,30,254,1,233,190,114,194,200,193,
    2,62,189,144,207,171,232,172,21,103,108,23,82,148,15,199,
    82,201,96,248,87,186,66,126,215,181,66,214,62,35,50,211,
    189,28,242,212,173,190,189,184,216,94,104,243,105,116,44,125,
    55,198,220,57,150,49,157,194,29,82,18,183,187,156,70,245,
    169,147,43,61,45,4,173,198,243,157,72,56,158,234,226,157,
    2,212,50,77,84,135,37,23,123,228,125,185,201,45,245,175,
    161,38,248,106,74,110,202,114,143,196,86,43,112,233,182,200,
    166,93,142,224,102,222,43,68,45,210,146,221,205,238,111,43,
    204,216,220,221,102,136,51,248,62,171,246,72,102,172,250,118,
    157,188,212,211,66,195,249,193,166,171,179,216,118,234,117,91,
    102,12,124,88,217,56,49,97,223,90,190,24,232,110,37,110,
    199,82,52,184,139,129,149,212,38,95,117,240,171,188,248,94,
    211,74,39,146,220,228,33,69,169,131,133,158,185,80,149,125,
    134,229,54,91,182,239,13,24,115,82,169,199,172,94,229,114,
    175,28,205,134,136,184,149,193,181,212,12,29,240,36,239,125,
    112,142,19,251,231,150,47,226,4,119,239,20,208,142,208,97,
    245,233,26,163,11,223,174,246,31,152,174,213,3,75,222,251,
    244,203,241,38,106,53,229,32,15,205,8,232,129,117,88,3,
    0,167,64,125,56,112,246,202,102,193,217,83,219,7,44,25,
    16,7,237,68,110,0,174,250,138,106,92,245,171,148,167,123,
    225,158,108,206,236,176,165,224,251,30,17,106,158,118,177,89,
    166,60,209,243,205,235,48,218,229,251,112,106,242,29,213,212,
    28,29,123,104,70,159,80,232,13,12,146,94,38,72,98,121,
    128,133,18,163,31,198,152,61,162,89,99,190,93,41,207,247,
    3,234,118,36,226,4,102,123,78,157,251,58,140,28,117,52,
    171,160,221,93,211,7,195,155,145,19,184,59,235,145,240,6,
    128,60,35,160,65,222,97,245,91,108,98,103,208,50,132,53,
    233,50,20,59,125,66,15,71,173,104,64,92,74,42,117,92,
    82,175,242,163,94,123,208,127,21,248,174,131,128,82,101,55,
    12,2,161,194,162,27,182,2,133,204,159,243,29,117,77,247,
    179,239,149,28,212,186,247,51,71,245,206,239,186,70,245,46,
    73,78,250,24,129,158,192,128,39,186,115,86,73,41,82,114,
    117,234,137,88,70,97,219,182,213,125,23,190,215,109,123,88,
    206,11,238,99,191,33,13,128,78,50,232,188,160,104,44,254,
    223,191,165,124,201,224,35,220,183,254,141,73,233,71,247,39,
    234,30,168,205,87,216,80,155,78,179,198,81,229,88,234,168,
    133,114,75,62,168,121,234,52,212,191,64,240,5,126,237,28,
    145,11,58,231,100,188,170,75,67,190,123,83,55,164,184,107,
    224,243,101,62,78,174,209,53,58,199,66,165,47,26,227,249,
    147,135,236,5,41,99,221,161,27,225,205,186,120,225,212,105,
    41,237,72,111,168,188,130,6,41,48,71,180,191,22,141,48,
    106,127,29,122,130,221,240,65,114,122,173,216,246,158,160,99,
    110,6,130,250,188,187,158,155,81,21,200,80,255,117,194,25,
    152,226,61,170,135,184,144,123,9,191,35,187,225,107,89,218,
    30,120,145,131,51,200,7,179,34,242,157,186,255,163,96,128,
    61,240,188,168,230,4,219,66,143,98,50,109,128,166,152,116,
    158,203,234,252,36,116,157,250,131,166,239,102,134,139,130,190,
    187,238,135,159,139,61,31,19,128,206,16,58,60,202,75,215,
    163,208,165,224,215,211,81,82,193,166,73,90,76,3,154,159,
    202,98,231,143,55,30,232,175,187,102,6,249,172,140,98,60,
    198,80,254,92,5,35,210,55,181,25,31,108,117,29,39,147,
    111,69,98,27,55,6,40,59,157,149,77,182,141,4,237,62,
    11,92,246,187,33,241,66,117,231,164,110,245,239,241,37,254,
    38,146,25,250,79,152,233,146,49,98,226,134,18,127,199,140,
    41,163,96,76,76,150,114,165,98,169,144,67,79,37,206,188,
    49,158,43,141,77,24,135,255,93,30,45,25,99,230,242,185,
    146,241,63,74,0,154,191,
};

EmbeddedPython embedded_m5_internal_param_BaseCPU(
    "m5/internal/param_BaseCPU.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/build/X86/python/m5/internal/param_BaseCPU.py",
    "m5.internal.param_BaseCPU",
    data_m5_internal_param_BaseCPU,
    3143,
    10980);

} // anonymous namespace