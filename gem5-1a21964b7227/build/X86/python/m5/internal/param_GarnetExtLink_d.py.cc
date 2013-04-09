#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_GarnetExtLink_d[] = {
    120,156,205,89,253,110,219,200,17,159,37,37,217,146,37,91,
    254,182,19,39,97,210,230,42,180,73,212,184,77,124,109,131,
    224,122,105,80,20,40,124,1,93,32,57,222,21,4,77,174,
    109,218,20,41,144,235,56,186,218,255,212,65,219,151,233,43,
    244,9,250,78,237,204,44,151,150,157,184,8,112,7,84,182,
    185,89,206,46,103,231,227,55,51,187,155,16,202,159,53,124,
    190,112,0,138,127,11,128,8,255,4,28,1,36,2,60,1,
    66,10,136,22,225,176,14,217,58,136,168,14,239,1,60,11,
    164,5,231,216,177,225,27,11,210,14,14,224,87,13,56,178,
    153,36,96,212,2,89,3,175,14,175,211,69,168,201,6,28,
    182,32,155,2,129,63,169,5,226,77,52,5,209,52,188,199,
    21,176,211,100,158,211,16,181,184,211,132,104,134,59,45,24,
    117,65,206,128,215,6,156,239,117,144,217,3,100,54,203,204,
    28,102,22,225,208,18,68,29,154,143,242,124,77,83,107,52,
    85,175,50,203,124,230,160,148,174,11,94,215,244,231,193,155,
    55,253,5,240,22,76,127,17,188,69,211,95,2,111,201,244,
    151,193,91,54,253,21,240,86,76,127,21,188,85,211,95,3,
    111,205,244,215,193,91,55,253,27,224,221,48,253,155,224,221,
    52,253,13,240,54,32,154,3,185,6,241,45,216,67,67,119,
    43,69,110,131,180,33,190,3,222,29,144,248,119,27,206,209,
    23,209,60,207,117,120,238,66,53,247,46,207,189,7,222,61,
    144,248,119,87,207,109,192,78,111,25,61,27,255,7,127,122,
    232,89,80,109,108,222,202,188,136,179,212,143,211,189,44,182,
    104,188,65,13,225,32,164,102,10,159,14,62,47,8,16,255,
    4,70,67,100,149,128,56,3,100,44,72,254,35,11,206,184,
    115,102,193,168,7,167,2,226,26,68,54,156,226,50,117,18,
    96,95,192,185,5,223,218,52,225,12,219,26,186,207,129,154,
    210,88,88,210,238,211,172,166,224,172,14,167,117,216,17,111,
    78,45,162,28,54,33,235,131,248,110,131,249,78,51,95,11,
    78,177,173,193,121,13,206,26,240,26,103,33,41,110,146,5,
    240,51,84,150,48,184,211,171,161,196,219,99,42,147,58,81,
    156,167,193,64,170,21,236,251,195,32,15,6,254,239,131,60,
    149,234,229,59,245,199,56,61,242,163,94,203,204,205,138,71,
    195,64,29,184,252,177,77,150,25,12,21,51,205,240,131,25,
    236,236,197,105,228,15,178,232,56,145,106,154,56,250,123,113,
    34,125,159,7,255,48,24,102,185,122,153,231,89,238,146,113,
    153,152,100,65,245,69,157,236,156,100,133,236,209,106,188,140,
    75,236,21,205,222,27,50,71,18,128,5,166,143,35,89,132,
    121,60,84,232,51,205,145,102,19,183,30,121,139,155,226,47,
    216,244,73,138,98,24,132,178,63,148,217,48,145,253,176,31,
    102,73,18,167,197,160,47,67,185,245,100,171,63,204,179,67,
    25,42,122,245,233,125,95,14,158,60,124,28,108,62,254,213,
    211,95,238,110,109,110,110,245,119,143,227,36,234,191,249,252,
    105,127,56,82,7,89,218,31,60,233,199,169,146,104,192,164,
    255,81,211,61,194,137,11,36,196,73,188,239,199,172,190,127,
    32,147,161,204,155,68,189,65,2,138,174,104,139,134,176,69,
    79,204,114,175,131,253,13,107,70,108,199,100,128,144,140,66,
    40,180,13,238,254,5,236,94,196,199,161,5,217,60,136,83,
    134,40,206,70,16,32,184,118,4,141,90,60,250,0,132,178,
    74,122,108,19,86,136,186,128,223,48,26,17,150,56,247,25,
    129,67,164,24,23,132,168,58,129,94,67,13,49,170,193,151,
    205,226,88,157,190,32,86,22,45,81,131,246,176,139,220,167,
    153,106,17,149,101,25,231,155,34,65,53,41,235,32,109,5,
    69,248,43,99,122,167,71,58,109,51,164,212,65,92,100,39,
    41,59,142,250,28,134,59,104,174,87,163,175,118,201,31,197,
    29,36,124,157,29,59,97,144,166,153,114,130,40,114,2,165,
    242,120,247,88,201,194,81,153,115,191,96,132,186,243,6,149,
    21,191,209,208,160,144,16,131,40,212,47,81,28,42,124,89,
    228,23,118,77,33,21,34,234,32,139,10,164,19,139,125,169,
    220,186,129,253,65,80,208,138,106,22,251,191,53,75,51,140,
    123,13,3,186,66,38,123,170,197,248,13,138,194,231,165,137,
    206,80,37,78,111,131,228,88,42,154,95,168,64,161,4,212,
    213,139,78,16,88,169,218,85,38,33,165,253,52,75,163,17,
    106,17,135,119,73,192,53,134,108,7,230,17,166,43,248,52,
    197,178,152,130,89,177,38,230,173,144,20,174,149,112,101,168,
    82,82,81,192,8,17,101,150,66,216,158,99,54,235,89,156,
    139,88,115,142,115,226,206,9,202,189,73,205,6,53,183,168,
    185,109,140,51,25,22,234,92,181,208,35,146,202,98,179,132,
    118,105,128,42,86,221,75,177,58,59,22,171,231,20,115,20,
    111,22,5,230,69,188,217,100,164,108,198,68,18,199,51,2,
    136,34,236,34,126,216,120,110,151,140,210,48,208,119,9,207,
    227,160,222,31,3,181,75,126,99,68,187,55,174,51,180,51,
    169,134,222,215,134,126,76,82,181,75,252,205,50,238,102,68,
    72,224,33,115,76,25,147,255,14,59,163,85,50,249,184,173,
    87,177,32,191,166,205,24,22,86,174,206,152,238,222,232,146,
    92,122,64,119,106,132,212,61,27,86,202,106,89,80,162,70,
    21,223,141,156,108,207,81,96,100,120,118,191,120,116,191,248,
    13,38,31,231,57,167,51,157,126,116,130,201,229,48,199,68,
    210,228,23,157,16,124,78,14,126,89,233,208,33,180,251,96,
    63,178,27,56,207,20,152,99,48,5,78,144,15,90,149,15,
    72,165,45,18,169,197,14,176,97,21,159,150,96,185,253,140,
    51,53,239,144,120,20,159,47,201,21,100,13,9,180,83,118,
    119,180,86,172,48,169,238,246,46,161,109,34,212,117,127,134,
    235,127,97,194,185,1,21,182,232,177,73,33,138,174,191,3,
    239,48,5,252,13,8,71,8,151,50,30,57,250,77,6,88,
    164,233,100,145,83,241,209,74,109,149,145,109,149,201,17,67,
    127,216,225,2,92,86,110,220,4,254,99,44,115,158,219,32,
    184,156,218,229,70,114,188,156,214,170,116,192,40,252,164,146,
    89,187,148,55,220,245,42,53,216,85,106,184,72,191,213,134,
    15,115,222,68,184,138,3,13,133,241,73,175,151,23,184,164,
    194,116,75,44,89,99,104,123,64,205,195,10,104,194,208,254,
    239,42,220,129,235,107,173,175,51,55,229,178,162,198,154,205,
    53,212,28,254,123,133,79,21,115,117,19,115,155,85,204,73,
    174,41,239,249,144,66,173,69,200,57,183,4,158,66,113,71,
    70,135,191,26,200,58,120,13,138,78,222,122,139,50,120,133,
    201,165,148,131,47,85,172,49,187,86,216,209,232,160,230,221,
    228,196,50,3,228,89,18,12,118,163,224,249,183,36,16,73,
    21,154,104,182,140,134,221,113,13,41,14,197,53,74,242,235,
    207,141,166,111,39,71,83,151,234,98,165,33,71,105,148,133,
    156,170,254,116,32,157,129,28,236,226,169,246,32,30,58,123,
    73,176,207,62,182,75,11,124,101,44,160,24,36,87,55,24,
    197,79,169,205,156,48,75,177,52,29,135,42,203,157,72,226,
    17,79,70,206,67,135,235,154,19,23,78,176,139,163,65,168,
    116,104,93,206,33,188,7,14,242,253,130,183,187,71,39,212,
    157,28,211,149,229,58,78,99,60,15,252,217,152,80,31,62,
    171,34,197,219,126,29,167,40,6,30,221,212,72,167,218,167,
    212,144,137,220,207,96,242,106,89,31,215,255,134,4,33,195,
    55,196,77,220,169,171,229,15,19,200,43,250,190,248,48,141,
    156,124,74,26,209,215,88,101,50,105,208,76,57,69,87,18,
    212,54,169,164,121,45,67,156,225,182,205,196,14,148,87,101,
    179,76,156,227,155,167,6,83,230,41,23,77,125,207,92,196,
    97,58,65,174,160,0,13,127,200,20,228,110,78,176,130,238,
    47,160,220,41,93,151,126,196,184,246,29,157,126,98,97,78,
    59,236,194,109,173,44,223,233,108,92,135,90,63,204,101,160,
    164,246,249,205,137,50,9,167,59,45,158,172,60,111,244,174,
    27,221,183,42,221,207,121,47,57,90,26,59,143,48,16,196,
    235,180,75,103,150,83,54,143,111,233,99,11,84,86,170,85,
    86,162,13,92,42,79,174,202,162,45,165,15,39,36,83,48,
    28,202,52,186,56,120,240,200,228,216,141,147,234,1,84,251,
    185,54,158,50,150,240,249,48,29,144,230,99,134,96,12,212,
    171,12,48,89,104,224,0,25,24,28,244,232,70,240,162,190,
    184,132,2,93,81,170,98,226,254,186,242,235,79,174,69,63,
    146,78,178,252,200,71,13,142,10,58,36,127,242,92,220,111,
    242,241,250,18,85,125,246,191,226,44,194,18,121,177,208,39,
    78,165,117,218,58,16,42,34,123,152,99,58,146,137,84,242,
    227,128,85,100,143,242,30,35,146,184,191,200,70,120,132,230,
    195,38,190,39,190,63,105,229,246,115,92,127,23,202,108,78,
    229,182,193,87,99,203,162,89,107,10,222,15,93,249,255,4,
    45,251,143,192,28,172,70,124,87,4,238,92,229,121,190,237,
    54,59,14,78,21,116,161,176,29,12,244,221,35,223,152,185,
    247,168,249,177,1,15,135,184,62,141,243,97,86,95,65,96,
    90,224,205,26,239,205,92,186,175,82,75,196,73,123,95,235,
    224,191,149,180,191,227,251,35,173,228,165,225,49,250,139,36,
    11,143,100,164,111,103,249,76,162,233,59,241,160,164,81,24,
    70,121,128,70,227,91,110,153,199,65,18,127,39,153,199,11,
    134,194,229,53,23,46,120,143,141,142,145,191,12,138,56,44,
    205,205,162,107,178,123,188,59,122,145,165,8,142,36,65,35,
    117,47,13,236,140,10,37,7,106,254,50,19,55,195,35,112,
    62,38,53,83,153,47,1,117,124,33,222,65,125,172,248,48,
    42,115,185,31,23,196,106,225,202,103,101,194,37,60,168,123,
    215,134,201,56,139,9,131,178,62,57,233,123,170,231,124,45,
    245,10,155,46,221,245,206,53,197,148,133,41,25,127,91,98,
    86,212,69,187,211,180,155,141,102,221,70,184,19,101,81,204,
    216,205,86,91,92,247,187,142,193,208,178,214,219,77,241,95,
    37,246,211,209,
};

EmbeddedPython embedded_m5_internal_param_GarnetExtLink_d(
    "m5/internal/param_GarnetExtLink_d.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/build/X86/python/m5/internal/param_GarnetExtLink_d.py",
    "m5.internal.param_GarnetExtLink_d",
    data_m5_internal_param_GarnetExtLink_d,
    2308,
    7520);

} // anonymous namespace