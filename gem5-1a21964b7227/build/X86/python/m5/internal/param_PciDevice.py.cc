#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_PciDevice[] = {
    120,156,205,90,107,123,212,214,17,30,105,47,246,250,134,141,
    141,193,216,192,66,66,234,38,192,250,138,147,150,210,16,67,
    18,183,92,92,45,13,100,115,81,101,233,120,45,216,149,182,
    146,214,176,169,221,75,76,147,244,126,251,210,63,209,191,208,
    223,209,63,210,207,237,204,72,71,214,58,210,218,125,218,62,
    24,216,225,232,213,104,116,206,156,119,102,206,145,100,66,244,
    103,10,127,111,151,1,252,127,40,0,22,254,83,224,41,64,
    67,129,154,2,138,80,192,26,135,39,5,112,167,64,177,10,
    240,2,160,166,130,80,97,15,27,57,248,72,5,103,24,79,
    224,85,69,120,154,99,72,129,206,0,136,60,212,10,240,200,
    25,135,188,40,194,147,1,112,251,64,193,63,142,10,202,99,
    171,15,172,126,120,129,119,192,70,137,109,246,131,53,192,141,
    18,88,131,220,24,128,206,40,136,65,168,13,1,234,215,134,
    209,216,21,52,54,194,198,202,108,204,194,83,19,96,13,147,
    62,246,231,67,82,205,147,106,120,151,17,182,115,2,162,222,
    141,66,109,84,182,199,160,54,38,219,39,161,118,82,182,199,
    161,54,46,219,19,80,155,144,237,83,80,59,37,219,147,80,
    155,148,237,211,80,59,45,219,103,160,118,70,182,167,160,54,
    37,219,103,161,118,86,182,167,161,54,45,219,51,80,155,145,
    237,115,80,59,7,214,9,16,51,96,159,135,77,116,250,104,
    60,168,11,32,114,96,151,161,86,6,129,255,46,192,30,206,
    139,53,198,186,23,89,247,100,172,123,137,117,95,129,218,43,
    32,240,223,165,80,183,8,213,217,83,56,203,246,191,240,207,
    44,206,50,4,67,40,182,133,231,219,174,163,219,206,166,107,
    171,116,190,72,130,56,97,146,232,195,223,48,254,86,137,28,
    127,3,102,134,165,70,228,216,5,52,172,80,255,159,170,176,
    203,141,93,21,58,179,176,163,128,157,7,43,7,59,120,155,
    2,117,160,174,192,158,10,31,231,72,97,23,101,30,167,178,
    12,249,32,228,197,68,56,149,161,169,62,216,45,192,78,1,
    170,202,227,29,149,144,39,37,112,43,160,124,54,195,118,251,
    217,174,10,59,40,243,176,151,135,221,34,60,66,45,132,236,
    18,121,0,47,195,193,18,31,171,179,121,236,241,253,196,144,
    105,56,150,237,57,70,83,4,163,216,214,91,134,103,52,245,
    117,211,190,45,182,109,83,204,14,72,45,215,191,214,50,130,
    45,141,47,203,145,79,154,173,128,205,185,142,8,6,177,177,
    105,59,150,222,116,173,118,67,4,253,100,75,223,180,27,66,
    215,249,228,90,179,229,122,193,29,207,115,61,141,220,202,96,
    195,53,226,43,10,228,225,134,235,139,89,186,27,223,70,35,
    243,1,105,111,182,216,34,117,128,187,74,23,91,194,55,61,
    187,21,224,108,133,22,73,155,172,205,210,60,177,240,219,40,
    42,212,11,191,101,152,162,210,18,110,171,33,42,102,197,116,
    27,13,219,241,155,21,97,138,149,229,149,74,203,115,159,8,
    51,160,67,157,142,235,162,185,124,117,222,88,152,127,235,250,
    210,198,202,194,194,74,101,163,109,55,172,202,227,55,175,87,
    90,157,96,203,117,42,205,229,138,237,4,2,93,215,168,28,
    112,218,53,84,57,73,183,127,102,215,117,155,7,174,111,137,
    70,75,120,37,66,207,82,215,148,81,101,72,41,42,57,101,
    86,25,225,214,48,182,103,212,65,229,190,77,67,55,201,29,
    196,188,156,228,218,223,129,167,20,57,241,68,5,119,12,148,
    29,166,37,106,227,196,35,161,170,10,157,85,249,236,21,80,
    2,53,194,237,28,241,131,208,147,120,13,51,16,169,136,186,
    55,136,16,138,131,177,64,44,42,16,209,67,122,33,47,67,
    194,185,35,120,174,64,87,144,41,149,110,145,135,161,214,40,
    90,239,103,84,37,148,251,146,180,235,32,16,148,40,235,32,
    54,137,93,248,156,121,92,157,165,49,221,103,50,5,91,182,
    239,62,115,120,202,168,205,161,87,69,119,173,119,30,108,208,
    76,248,23,16,248,208,109,151,77,195,113,220,160,108,88,86,
    217,8,2,207,222,104,7,194,47,7,110,249,178,207,220,212,
    198,36,31,99,123,157,150,228,31,113,5,249,23,30,88,182,
    25,224,193,56,31,240,212,248,34,64,46,109,185,150,143,56,
    153,168,139,64,43,72,194,111,25,62,221,49,24,193,246,45,
    121,107,38,240,108,81,210,205,23,141,205,96,128,153,107,248,
    190,206,183,38,156,73,74,150,182,141,70,91,4,164,239,7,
    70,128,61,160,102,120,211,99,65,211,51,228,13,233,12,26,
    174,238,184,142,213,193,254,219,230,69,234,218,25,38,235,48,
    140,33,65,39,241,87,82,78,41,125,48,162,156,81,198,84,
    147,134,154,143,136,202,36,157,36,199,0,115,67,137,114,18,
    18,118,15,115,215,172,202,153,135,199,204,177,77,214,57,29,
    105,211,36,102,72,156,35,113,94,186,229,101,251,102,248,160,
    111,174,81,127,84,118,136,153,139,134,30,199,167,214,21,159,
    35,137,248,220,163,56,163,24,83,41,24,247,99,44,71,238,
    113,7,101,244,112,12,35,105,40,170,246,99,134,221,166,81,
    106,102,214,49,221,53,226,112,146,200,245,4,145,53,154,49,
    102,177,118,54,203,197,229,227,231,226,122,232,226,121,234,207,
    80,196,185,17,230,218,160,98,18,97,200,17,125,210,217,183,
    177,209,57,77,206,78,122,249,52,150,220,71,180,244,194,210,
    201,245,23,147,219,227,176,232,70,190,15,27,121,98,231,102,
    14,38,163,122,232,83,90,198,193,61,239,148,221,205,114,0,
    178,15,55,46,251,215,46,251,223,198,84,83,190,201,201,43,
    76,54,97,58,241,68,203,195,180,81,226,131,48,252,117,78,
    5,122,84,209,112,42,104,125,193,51,200,19,192,89,197,199,
    140,130,9,239,88,120,127,32,246,62,13,102,133,58,51,192,
    174,207,193,105,252,13,40,220,99,221,229,140,204,171,31,62,
    139,191,119,104,18,200,15,2,104,69,172,85,195,241,240,80,
    105,208,218,108,23,195,94,242,64,181,55,240,206,111,203,224,
    45,66,204,39,250,229,104,40,20,75,95,2,175,27,21,248,
    2,136,59,72,145,40,250,56,214,101,188,143,147,58,249,98,
    71,73,173,197,106,20,199,106,148,4,49,208,91,195,92,98,
    163,218,140,75,187,175,18,25,114,47,7,10,23,204,92,180,
    60,76,22,204,124,28,252,204,188,35,21,197,124,87,150,208,
    166,226,68,144,139,19,193,126,154,141,23,115,152,225,94,54,
    27,251,195,110,232,52,162,59,251,92,164,210,115,78,153,80,
    19,12,187,66,226,106,76,46,69,98,47,177,243,23,32,187,
    142,234,97,110,166,156,229,231,121,76,39,138,188,14,8,45,
    196,129,85,144,129,181,16,7,150,224,98,241,130,119,25,36,
    85,34,201,158,170,224,150,18,151,87,180,147,203,131,40,64,
    173,72,33,200,43,104,37,138,80,69,166,74,74,177,93,165,
    40,225,200,152,38,33,17,72,60,63,14,1,203,92,184,209,
    48,154,27,150,113,243,19,234,10,245,199,148,33,171,202,177,
    141,38,199,70,193,166,100,12,143,15,231,228,24,183,143,195,
    24,53,42,117,241,216,56,8,45,215,228,76,244,112,75,148,
    155,162,185,129,91,209,45,187,85,222,108,24,117,158,215,92,
    52,246,7,114,236,1,19,227,224,106,193,127,157,164,91,54,
    93,7,171,77,219,12,92,175,108,9,220,157,9,171,124,181,
    204,165,170,108,251,101,99,3,207,26,102,16,198,79,119,138,
    224,69,172,225,213,125,230,233,211,103,212,60,14,78,139,106,
    175,237,216,184,148,255,84,58,47,220,49,198,117,135,87,236,
    97,48,98,7,112,215,21,116,194,28,122,157,4,57,71,123,
    13,142,83,121,170,224,157,63,166,46,144,179,139,202,52,46,
    178,131,19,113,126,64,165,117,186,198,255,122,162,248,103,238,
    8,137,34,124,234,132,10,162,8,118,31,203,126,42,75,181,
    146,4,7,88,14,50,56,36,193,97,150,35,12,158,144,224,
    40,203,49,6,79,74,112,156,229,4,131,167,36,56,201,242,
    52,131,103,36,56,197,242,44,131,211,18,156,97,121,142,193,
    243,18,188,192,178,204,224,69,9,94,98,249,10,131,175,74,
    240,50,203,215,24,252,134,4,103,89,126,147,193,215,37,248,
    6,203,43,12,94,149,224,53,150,21,6,231,36,56,207,114,
    129,193,69,9,46,177,92,102,240,186,4,87,88,190,201,224,
    91,18,252,22,203,111,51,120,67,130,223,97,121,147,193,239,
    74,240,109,150,183,24,124,71,130,171,44,111,51,120,71,130,
    239,178,124,143,193,247,37,184,198,242,123,12,126,95,130,119,
    89,222,99,240,190,4,31,176,92,103,240,7,18,212,88,86,
    25,124,40,193,31,178,252,128,193,71,18,124,204,242,67,6,
    107,18,252,136,229,199,12,126,34,193,79,89,234,12,254,72,
    130,6,203,13,6,77,9,90,44,5,131,155,18,172,179,220,
    98,208,150,224,19,150,79,25,108,72,176,201,210,97,208,149,
    96,139,229,143,25,244,36,232,179,12,24,108,75,112,155,229,
    51,6,159,75,176,195,242,51,6,127,34,193,29,150,187,12,
    254,84,130,63,99,249,115,6,127,33,193,207,89,238,49,248,
    66,130,191,100,249,5,131,95,74,240,43,150,191,98,240,215,
    18,252,13,203,223,50,248,59,89,223,127,207,224,31,160,246,
    71,136,158,52,255,137,106,125,241,191,172,245,92,12,143,69,
    242,163,50,104,253,47,75,188,182,112,44,135,166,45,66,180,
    209,200,42,239,106,148,218,121,220,43,97,121,15,231,17,183,
    35,157,137,196,54,150,221,160,60,114,70,105,171,187,195,155,
    96,93,13,119,187,52,233,100,236,126,184,17,224,7,163,116,
    83,71,60,211,15,212,147,112,55,75,76,50,90,45,225,88,
    251,59,85,62,115,44,92,72,37,251,47,16,111,6,134,112,
    91,58,129,191,175,83,63,31,250,90,14,158,57,94,136,217,
    62,125,92,198,67,148,248,107,188,110,249,115,215,186,69,163,
    57,15,87,42,241,34,37,156,192,153,175,47,6,244,15,112,
    198,92,111,237,54,61,57,233,173,128,59,18,94,55,73,32,
    40,167,104,175,81,167,189,118,43,88,183,29,54,121,168,18,
    153,165,167,36,73,48,56,159,114,213,251,194,176,132,247,176,
    211,18,108,248,16,21,50,75,147,189,15,5,211,41,87,180,
    76,91,183,196,54,91,236,117,158,204,209,242,48,58,78,245,
    212,59,183,180,229,170,253,153,200,116,101,172,32,93,41,1,
    222,247,29,212,174,182,55,252,142,31,136,102,52,57,135,233,
    144,81,122,161,145,192,82,157,180,106,120,214,70,219,95,93,
    171,102,250,49,161,34,253,184,15,165,78,233,61,92,75,55,
    219,205,247,60,195,9,50,231,189,75,73,206,123,18,76,245,
    154,134,7,252,46,45,203,173,177,130,116,171,4,130,179,105,
    46,195,125,117,219,103,99,61,78,147,41,74,105,225,97,112,
    41,109,52,198,115,234,248,93,35,16,142,217,97,131,71,80,
    35,195,180,177,232,134,83,221,133,236,88,184,43,234,134,217,
    89,123,144,233,211,46,37,233,211,36,152,197,196,185,195,168,
    58,119,144,170,115,153,84,109,217,174,222,72,248,225,48,29,
    73,213,4,150,58,184,200,59,15,237,166,240,50,61,208,165,
    36,61,144,4,179,252,54,127,20,231,206,167,57,119,190,167,
    115,91,56,164,77,215,107,102,58,55,86,144,206,149,64,86,
    39,150,142,210,211,165,180,158,198,96,112,185,87,250,232,170,
    2,71,211,164,155,140,37,211,77,92,23,50,248,180,120,24,
    225,22,15,18,142,129,172,225,46,31,197,39,203,105,62,137,
    193,172,171,230,142,98,122,46,205,116,12,166,22,147,85,183,
    217,52,28,43,179,216,200,243,178,216,68,199,169,254,10,15,
    122,212,237,88,65,58,84,2,169,105,111,221,115,235,107,239,
    102,102,197,232,180,204,138,225,97,170,103,144,14,171,244,104,
    104,213,181,68,166,251,186,148,164,251,146,96,122,216,96,237,
    221,108,59,102,118,92,73,133,56,174,34,32,139,113,75,135,
    81,114,233,32,37,25,224,215,157,105,185,130,77,101,158,36,
    51,249,40,129,100,105,205,245,50,49,151,52,49,151,165,181,
    216,203,196,98,210,196,98,150,214,66,47,19,11,73,19,11,
    89,90,203,189,76,44,39,77,44,103,105,45,245,50,177,148,
    52,177,20,156,75,11,167,46,30,246,214,32,99,244,14,110,
    159,129,169,247,93,171,62,204,238,20,157,140,59,133,7,193,
    197,212,165,149,185,37,238,218,142,136,169,119,184,22,25,229,
    143,133,146,104,22,101,23,14,227,244,194,65,78,47,100,166,
    217,59,207,91,134,67,43,41,237,193,189,204,96,238,82,146,
    193,156,4,179,50,232,226,81,210,236,98,90,154,141,193,212,
    21,151,233,58,155,118,189,107,65,114,4,53,185,48,235,134,
    51,55,5,27,209,26,178,215,249,228,166,1,143,83,103,58,
    222,246,208,188,102,242,161,91,75,242,161,11,205,154,238,249,
    195,248,48,127,144,15,12,4,115,105,3,163,79,144,34,7,
    225,127,14,110,106,105,221,109,186,237,104,213,255,31,95,228,
    71,253,234,165,196,187,247,128,190,9,177,68,67,4,226,224,
    3,136,240,139,179,240,73,189,37,252,192,115,59,186,30,190,
    115,198,227,134,174,31,159,71,244,111,66,248,253,159,79,207,
    115,232,17,125,81,57,245,127,251,91,202,151,20,126,23,115,
    224,3,196,208,19,175,130,124,103,219,225,143,78,64,163,119,
    5,225,131,2,174,157,242,157,7,63,66,162,220,120,223,104,
    134,31,46,241,71,55,26,197,148,70,86,248,49,3,175,11,
    194,87,252,252,158,60,252,162,193,17,207,248,69,17,191,23,
    210,232,195,23,142,177,200,51,114,213,59,22,67,200,104,111,
    21,55,110,158,219,224,88,15,209,42,175,47,249,93,134,112,
    218,77,253,158,104,186,94,231,30,101,105,122,234,113,43,122,
    3,21,194,250,182,160,87,85,193,68,124,121,247,121,54,19,
    158,64,32,252,76,140,31,109,133,216,106,195,53,159,10,43,
    194,247,117,171,182,212,165,199,65,150,103,224,52,243,103,120,
    194,179,141,6,5,12,177,240,150,101,121,154,225,212,133,236,
    197,190,129,219,77,35,228,65,2,91,183,221,8,35,83,177,
    6,191,201,225,62,133,228,97,106,123,162,110,163,27,66,147,
    177,106,244,8,142,120,149,26,223,201,43,143,77,24,132,239,
    101,195,207,91,110,242,215,44,68,192,81,250,44,236,68,73,
    233,83,135,148,28,254,29,80,70,148,130,50,52,92,202,149,
    138,165,66,14,67,133,144,113,101,48,87,26,24,82,178,255,
    78,33,237,7,212,169,235,37,229,223,44,120,153,251,
};

EmbeddedPython embedded_m5_internal_param_PciDevice(
    "m5/internal/param_PciDevice.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/build/X86/python/m5/internal/param_PciDevice.py",
    "m5.internal.param_PciDevice",
    data_m5_internal_param_PciDevice,
    3294,
    11655);

} // anonymous namespace