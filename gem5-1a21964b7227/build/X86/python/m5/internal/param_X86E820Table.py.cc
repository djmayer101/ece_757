#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86E820Table[] = {
    120,156,205,88,235,110,220,198,21,62,67,238,69,123,213,234,
    98,201,178,157,132,9,226,98,145,216,222,88,173,45,183,53,
    12,167,137,127,4,8,228,128,235,194,206,166,5,193,37,103,
    87,148,185,36,65,142,108,111,32,253,169,140,182,47,211,87,
    232,171,181,231,156,33,169,149,45,33,1,90,192,43,137,163,
    225,204,112,230,92,190,115,27,15,242,159,30,62,143,45,128,
    44,20,0,62,254,9,120,9,128,47,35,1,66,10,240,55,
    224,176,10,241,14,8,191,10,111,1,70,6,72,3,78,177,
    99,194,79,6,68,29,156,192,175,106,240,210,228,33,1,243,
    38,200,10,140,170,240,60,218,128,138,172,193,97,19,226,58,
    8,252,137,12,16,47,252,58,248,43,240,22,79,192,78,131,
    247,92,1,191,201,157,6,248,45,238,52,97,222,3,217,130,
    81,27,112,253,168,131,155,221,194,205,186,188,153,197,155,249,
    56,181,9,126,135,214,35,61,63,210,210,10,45,213,167,116,
    121,159,85,200,169,235,193,168,87,244,215,96,180,86,244,215,
    97,180,94,244,55,96,180,81,244,55,97,132,155,175,130,92,
    135,224,10,76,80,16,189,242,160,45,144,38,4,219,48,218,
    6,137,127,91,112,138,178,242,215,120,237,85,94,187,94,174,
    221,225,181,215,96,116,13,36,254,237,232,181,53,24,246,175,
    160,228,131,255,224,79,31,37,15,170,141,205,43,153,102,65,
    28,57,65,52,137,3,131,230,107,212,144,158,60,106,234,248,
    116,240,249,134,20,246,47,96,109,249,70,174,176,19,192,141,
    5,209,255,210,128,19,238,156,24,48,239,195,177,128,160,2,
    190,9,199,120,76,149,8,152,10,56,53,224,47,38,45,56,
    193,182,130,226,181,160,162,180,174,54,181,120,245,86,117,56,
    169,194,113,21,134,226,197,177,65,35,135,13,136,7,32,126,
    190,193,251,174,240,190,6,28,99,91,129,211,10,156,212,224,
    57,174,194,161,160,65,18,192,207,144,89,194,200,176,95,65,
    138,247,23,88,38,118,252,32,141,220,153,84,27,216,119,18,
    55,117,103,206,139,7,247,159,60,216,253,234,153,59,14,101,
    191,89,44,140,179,59,137,171,14,108,254,210,36,177,204,18,
    197,59,198,145,84,45,236,76,130,200,119,102,177,127,20,74,
    181,66,219,57,147,32,148,142,195,147,223,205,146,56,85,79,
    210,52,78,109,146,44,15,134,177,91,126,81,37,33,135,113,
    38,251,116,26,31,99,211,246,138,86,79,18,222,145,8,96,
    106,233,99,95,102,94,26,36,10,21,166,119,164,213,180,91,
    159,84,197,77,246,6,155,1,81,145,37,174,39,7,137,140,
    147,80,14,188,129,23,135,97,16,101,179,129,244,228,222,189,
    189,65,146,198,135,210,83,244,234,208,251,84,206,238,221,190,
    235,238,222,253,253,253,223,141,247,118,119,247,6,227,163,32,
    244,7,40,154,65,50,87,7,113,52,152,221,27,4,145,146,
    40,189,112,240,190,220,238,224,170,117,162,224,117,48,117,2,
    230,221,57,144,97,34,211,6,141,94,35,234,68,79,180,69,
    77,152,162,47,186,220,235,96,255,134,209,18,251,1,113,239,
    145,68,8,127,102,129,184,127,3,43,22,145,113,104,64,188,
    6,226,152,193,137,171,81,253,8,171,161,160,89,131,103,111,
    129,80,70,62,30,152,132,18,26,93,199,111,24,135,8,72,
    92,251,144,96,33,34,180,8,194,82,149,224,174,65,134,232,
    212,176,139,187,56,87,165,47,104,43,131,142,168,64,59,233,
    225,238,43,60,106,208,40,211,178,184,111,132,3,170,65,254,
    0,199,182,144,132,191,49,154,135,125,226,105,159,241,164,14,
    130,44,126,29,177,214,168,207,6,56,68,113,253,48,127,58,
    38,101,100,159,224,192,143,241,145,229,185,81,20,43,203,245,
    125,203,85,42,13,198,71,74,102,150,138,173,155,25,195,211,
    94,43,32,89,238,55,79,10,8,18,92,16,130,250,197,15,
    60,133,47,140,117,135,85,147,73,133,112,58,136,253,12,199,
    105,139,169,84,118,181,192,252,129,155,209,137,170,139,253,175,
    139,163,25,195,253,90,129,184,76,134,19,213,100,240,186,89,
    230,240,209,52,206,56,165,157,94,185,225,145,84,180,62,83,
    174,66,10,168,171,15,93,22,164,94,37,129,20,242,32,142,
    157,40,142,252,57,178,16,120,159,18,117,87,25,175,29,88,
    67,140,110,225,211,16,87,68,29,186,226,170,88,51,60,226,
    182,146,99,149,113,186,69,178,1,134,135,200,157,19,98,246,
    20,157,88,223,96,23,196,108,179,133,211,238,236,151,236,235,
    212,220,160,230,35,106,62,46,36,179,4,226,233,188,43,158,
    59,68,146,193,50,241,204,156,251,210,74,237,115,86,218,93,
    176,210,83,178,54,178,52,131,76,242,204,210,76,146,80,220,
    42,108,136,45,25,161,67,182,117,102,57,44,57,155,210,5,
    198,30,131,222,38,36,47,194,121,186,0,103,155,148,198,88,
    182,175,93,38,101,107,41,165,60,213,82,190,75,36,181,115,
    228,117,25,113,45,225,17,108,72,22,245,66,222,223,98,103,
    190,77,242,94,20,244,54,70,224,231,148,29,97,36,229,112,
    140,94,238,133,142,193,185,248,117,167,66,24,157,152,176,149,
    135,199,140,252,51,242,247,102,110,197,19,75,65,65,195,195,
    155,217,157,155,217,31,209,231,88,143,216,139,105,175,163,253,
    74,42,147,20,253,71,131,95,180,31,112,216,39,56,121,116,
    67,109,80,186,193,74,100,29,176,123,201,208,181,160,231,91,
    22,5,52,75,5,16,63,123,68,79,147,165,111,194,54,62,
    77,193,68,59,49,123,103,206,135,120,22,159,63,145,30,72,
    20,18,40,111,181,135,154,37,230,150,248,182,251,231,112,246,
    225,121,181,191,196,195,31,23,86,92,131,18,85,244,152,196,
    13,25,213,63,128,147,73,1,127,7,66,16,2,37,55,67,
    54,250,194,240,55,104,57,137,227,88,92,24,154,141,220,160,
    141,220,33,162,197,39,29,142,184,121,168,198,124,239,159,11,
    222,242,212,4,193,241,211,204,115,198,197,248,89,41,189,0,
    227,239,87,197,200,202,57,119,97,239,148,30,193,44,61,194,
    153,203,45,211,59,116,117,31,94,79,108,95,72,137,67,76,
    61,57,67,36,69,162,143,196,166,177,128,179,91,212,220,46,
    33,38,138,177,15,75,255,39,112,121,100,117,180,171,38,255,
    149,85,152,173,213,154,218,198,255,184,201,119,195,175,157,111,
    158,126,255,116,127,232,148,251,149,38,87,45,76,110,183,52,
    57,201,193,228,45,87,36,212,26,132,157,83,67,96,73,136,
    73,24,85,98,21,144,85,24,213,200,56,57,213,22,185,237,
    138,194,143,146,255,61,23,170,22,132,91,162,71,227,131,154,
    55,75,98,202,12,145,135,161,59,27,251,238,163,103,68,13,
    145,228,21,198,108,20,236,245,22,217,35,51,20,151,112,200,
    175,95,21,108,190,90,18,54,109,138,134,37,123,108,161,126,
    236,177,155,122,118,32,173,153,156,141,177,120,61,8,18,107,
    18,186,83,214,174,153,179,255,180,96,95,49,60,222,205,41,
    178,47,168,141,45,47,142,48,32,29,121,42,78,45,95,98,
    49,39,125,235,182,197,209,204,10,50,203,29,227,172,235,41,
    109,89,231,253,7,39,188,110,58,205,56,183,125,249,154,186,
    75,34,183,60,66,7,81,128,153,255,159,11,249,233,26,179,
    12,77,156,224,107,51,69,26,176,72,83,115,237,99,239,83,
    67,242,177,127,3,75,22,193,6,120,248,144,168,32,145,215,
    196,117,204,201,185,226,92,92,247,3,125,153,189,239,55,198,
    191,198,111,232,75,164,220,123,212,104,165,172,211,133,3,181,
    13,138,98,163,38,228,119,82,45,30,108,211,229,143,95,227,
    145,46,249,153,250,255,232,103,216,10,151,69,222,100,127,63,
    253,63,221,139,189,187,172,220,217,191,133,60,3,186,204,181,
    136,69,214,59,218,181,4,162,40,94,88,121,251,154,83,190,
    153,217,185,16,151,142,151,74,87,73,173,234,235,203,35,12,
    118,98,154,182,191,150,10,47,56,174,22,92,239,149,92,159,
    114,118,56,223,92,168,45,88,255,226,121,212,163,250,227,152,
    5,227,24,186,4,129,82,62,149,82,62,84,48,71,242,181,
    243,190,140,116,149,65,4,185,73,34,35,255,172,130,224,153,
    37,145,24,251,73,7,202,244,172,141,229,194,38,62,239,27,
    63,241,188,32,2,86,125,181,180,247,37,2,1,91,132,95,
    168,191,191,10,139,241,194,38,229,235,8,81,6,7,251,15,
    165,58,63,190,24,238,50,194,196,92,102,84,222,254,210,18,
    76,22,185,216,202,223,89,190,108,69,190,12,165,146,23,0,
    69,17,53,249,45,128,47,49,84,199,115,172,65,185,96,195,
    247,208,113,150,42,120,61,192,195,71,68,5,5,94,10,94,
    53,190,82,106,84,26,130,179,138,119,46,223,53,217,156,105,
    112,105,50,231,75,22,176,87,75,145,243,237,112,17,186,217,
    52,169,24,223,119,103,250,186,142,239,153,236,207,168,249,188,
    208,26,91,149,46,102,185,28,212,229,59,154,33,167,60,156,
    225,216,116,209,195,247,43,57,3,79,80,31,115,231,149,164,
    36,137,163,237,57,246,120,86,173,150,195,195,96,166,175,50,
    249,30,208,79,93,148,10,95,255,202,52,112,195,224,103,201,
    111,229,42,14,233,234,115,184,180,0,96,237,166,114,26,100,
    40,92,62,167,252,54,247,22,36,87,174,57,46,192,214,226,
    199,203,4,6,157,192,235,123,146,71,124,45,242,24,155,30,
    221,50,174,54,68,221,64,103,130,191,77,209,21,85,209,238,
    52,204,70,173,81,53,17,48,52,178,33,90,102,163,217,22,
    197,239,14,2,168,105,236,180,26,226,191,248,133,20,73,
};

EmbeddedPython embedded_m5_internal_param_X86E820Table(
    "m5/internal/param_X86E820Table.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/build/X86/python/m5/internal/param_X86E820Table.py",
    "m5.internal.param_X86E820Table",
    data_m5_internal_param_X86E820Table,
    2175,
    7009);

} // anonymous namespace
