#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Sinic[] = {
    120,156,205,89,123,111,219,200,17,159,165,30,182,100,203,150,
    31,241,219,137,242,112,78,189,75,172,139,219,196,215,54,56,
    92,46,201,31,7,244,156,128,46,144,28,91,148,165,201,149,
    197,88,34,85,114,109,71,129,253,79,29,180,253,50,253,10,
    253,100,5,218,153,33,151,162,237,115,28,160,5,108,203,92,
    44,103,103,103,119,102,127,51,179,187,116,33,253,91,193,231,
    187,6,64,252,111,1,224,225,191,128,61,128,174,0,75,128,
    144,2,188,25,120,87,130,112,17,132,87,130,143,0,150,1,
    210,128,19,172,20,224,15,6,4,53,108,192,94,101,216,43,
    48,73,192,160,10,178,8,86,9,222,4,51,80,148,101,120,
    87,133,112,4,4,254,5,6,136,183,222,8,120,163,240,17,
    71,192,74,133,101,142,130,87,229,74,5,188,49,174,84,97,
    80,7,57,6,214,56,32,191,85,67,97,15,80,216,4,11,
    107,176,48,15,155,102,193,171,17,63,206,231,39,98,45,18,
    107,50,202,4,203,153,132,116,118,117,176,234,186,62,5,214,
    148,174,79,131,53,173,235,51,96,205,232,250,44,88,179,186,
    126,3,172,27,186,62,7,214,156,174,207,131,53,175,235,11,
    96,45,232,250,34,88,139,186,190,4,214,146,174,47,131,181,
    172,235,43,96,173,232,250,42,88,171,186,126,19,172,155,186,
    126,11,172,91,186,222,0,171,1,222,36,200,58,248,183,161,
    141,11,83,207,20,191,3,178,0,254,93,176,238,130,196,255,
    59,112,130,107,231,77,49,239,61,230,157,206,120,215,152,247,
    62,88,247,65,226,255,90,194,91,134,237,230,13,68,130,255,
    31,252,107,34,18,64,141,99,113,32,163,216,15,3,219,15,
    218,161,111,80,123,153,10,194,141,75,197,8,62,53,124,158,
    19,128,254,9,140,30,207,72,1,116,12,40,88,208,252,247,
    12,56,230,202,177,1,131,38,28,9,240,139,224,21,224,8,
    135,41,209,4,118,5,156,24,240,199,2,49,28,99,89,196,
    229,110,64,81,37,216,153,77,150,59,17,53,2,199,37,56,
    42,193,182,120,123,100,16,229,93,5,194,22,136,15,43,44,
    119,148,229,26,112,132,101,17,78,138,112,92,134,55,200,133,
    36,191,66,22,192,110,168,44,97,118,187,89,196,25,111,229,
    84,38,117,60,63,10,156,158,100,245,237,190,19,57,61,123,
    219,15,124,183,89,213,28,97,188,222,119,84,199,228,46,5,
    178,71,175,175,88,84,24,72,53,134,149,182,31,120,118,47,
    244,246,187,82,141,146,28,187,237,119,165,109,115,227,15,189,
    126,24,169,151,81,20,70,38,153,148,137,221,208,201,122,148,
    200,186,221,48,150,77,26,141,135,49,73,188,34,238,118,159,
    37,210,4,120,154,212,217,147,177,27,249,125,133,43,149,72,
    36,110,146,214,164,53,226,34,254,11,22,45,154,69,220,119,
    92,217,234,203,176,223,149,45,183,229,134,221,174,31,196,189,
    150,116,229,230,227,205,86,63,10,223,73,87,209,171,77,239,
    187,178,247,248,225,35,103,227,209,175,159,252,106,103,115,99,
    99,179,181,179,239,119,189,214,219,111,158,180,250,3,213,9,
    131,86,239,113,203,15,148,68,179,117,91,57,131,173,99,243,
    52,13,125,232,239,218,62,43,109,119,100,183,47,163,10,81,
    151,104,90,162,46,198,69,89,20,68,83,76,112,173,134,245,
    21,99,76,108,249,164,182,75,166,32,196,21,52,198,254,5,
    188,148,136,133,119,6,132,83,32,142,24,142,200,141,11,142,
    64,218,22,212,106,112,235,3,16,202,72,233,126,129,112,65,
    212,105,236,195,200,67,8,34,239,83,2,130,8,208,7,8,
    61,37,2,120,2,43,196,99,2,180,112,2,219,74,212,131,
    68,25,52,68,17,198,251,117,148,62,202,84,131,168,60,151,
    188,220,0,9,170,66,17,9,105,115,56,133,191,50,126,183,
    155,164,211,22,3,73,117,252,56,60,12,120,185,168,206,152,
    219,70,115,189,30,188,218,161,85,136,111,33,225,167,112,191,
    225,58,65,16,170,134,227,121,13,71,169,200,223,217,87,50,
    110,168,176,177,22,51,46,205,41,141,197,76,222,160,175,177,
    71,56,65,236,37,47,158,239,42,124,153,225,23,94,154,88,
    42,196,81,39,244,98,164,147,136,93,169,204,146,6,123,199,
    137,105,68,53,129,245,103,122,104,6,111,179,172,161,22,203,
    110,91,85,25,181,78,28,219,60,52,209,25,160,36,233,192,
    233,238,75,69,252,177,114,20,206,128,170,201,160,87,14,209,
    5,178,132,54,4,169,106,7,97,224,13,112,238,190,123,155,
    166,181,192,64,173,193,20,130,115,14,159,138,184,33,70,96,
    66,44,136,41,195,37,53,139,41,72,25,160,115,100,20,96,
    92,136,52,14,33,88,79,48,94,53,13,142,54,172,47,251,
    52,73,231,16,100,46,83,65,137,216,92,165,226,166,54,201,
    85,218,165,118,214,46,235,52,23,131,141,225,22,82,181,51,
    191,52,79,249,229,68,206,47,79,200,191,200,183,12,114,194,
    161,111,21,200,52,225,152,246,26,246,93,4,11,121,211,208,
    87,216,100,102,157,76,81,214,48,55,9,187,121,0,239,230,
    0,108,210,106,49,122,205,165,139,204,219,184,94,230,221,77,
    204,251,136,230,50,158,98,109,130,49,54,38,92,2,10,25,
    97,68,27,250,5,86,6,243,100,232,188,133,231,49,189,190,
    161,173,24,166,73,206,181,24,208,222,38,9,54,181,123,82,
    41,18,42,219,5,152,75,115,95,76,161,24,21,123,63,104,
    132,237,134,2,61,135,167,107,241,250,90,252,91,12,47,141,
    111,57,96,37,1,38,9,33,145,236,71,24,42,42,252,146,
    184,188,205,238,111,167,25,12,151,129,246,18,188,122,108,124,
    142,36,49,70,17,12,114,87,110,249,106,102,121,82,100,147,
    38,82,101,179,23,96,30,159,170,224,217,218,33,71,96,222,
    229,112,43,62,223,211,2,144,13,36,208,238,216,220,78,116,
    97,53,73,97,179,121,10,89,87,168,164,249,21,142,250,157,
    118,216,50,100,56,162,167,64,106,144,255,252,29,120,111,40,
    224,111,64,152,65,104,164,30,199,254,173,125,124,134,216,201,
    14,71,226,103,243,174,145,250,174,145,6,61,116,238,126,141,
    211,105,154,135,113,251,246,143,92,68,60,41,128,224,228,88,
    72,183,128,249,228,88,204,28,158,17,247,89,9,176,120,42,
    50,152,139,153,243,23,50,231,31,134,213,108,211,134,81,237,
    42,81,56,154,76,193,38,109,94,14,49,72,105,102,85,204,
    26,57,100,61,160,226,97,6,42,161,105,87,52,241,91,112,
    113,190,180,147,56,76,49,42,46,178,62,147,101,142,212,220,
    219,126,254,234,119,175,182,182,237,23,242,192,119,101,230,89,
    37,237,89,27,153,103,73,206,18,31,249,56,65,165,65,72,
    57,49,4,158,47,113,63,69,199,186,34,200,18,88,101,242,
    65,222,46,139,212,69,133,142,147,20,95,79,229,160,156,69,
    51,172,36,104,160,226,253,85,123,44,3,226,105,215,233,237,
    120,206,183,127,166,105,208,92,92,237,179,134,214,171,158,215,
    139,188,77,92,160,26,191,126,173,245,59,184,106,253,76,202,
    111,153,94,236,129,94,232,114,24,250,125,71,54,122,178,183,
    131,103,205,142,223,111,180,187,206,46,175,103,33,213,251,149,
    214,91,49,32,206,110,15,226,47,169,12,27,110,24,96,138,
    217,119,85,24,53,60,137,71,48,233,53,30,54,56,63,53,
    252,184,225,236,96,171,227,170,196,129,78,199,7,222,173,58,
    209,110,204,27,211,189,67,170,94,181,193,210,100,139,111,184,
    95,119,180,225,146,35,97,150,108,120,91,158,120,35,14,142,
    71,43,53,72,130,231,19,42,200,48,230,125,184,46,57,169,
    69,115,165,225,201,200,101,177,140,59,105,62,190,50,195,107,
    226,141,207,7,133,63,137,207,8,10,201,117,83,26,26,202,
    196,41,71,232,42,128,202,10,37,36,171,170,137,99,92,142,
    51,177,166,137,19,92,78,50,177,174,137,83,92,78,51,113,
    70,19,103,185,188,193,196,57,77,156,231,114,129,137,139,154,
    184,196,229,50,19,87,52,113,149,203,155,76,188,165,137,13,
    46,111,51,241,142,38,222,229,242,30,19,215,52,241,62,151,
    95,48,177,169,137,191,224,242,75,38,126,165,137,15,184,124,
    200,196,117,72,111,238,90,76,252,26,172,71,116,163,68,148,
    13,10,160,35,255,99,0,229,40,115,229,232,162,248,178,251,
    255,140,155,230,198,181,83,203,252,37,164,91,183,139,98,166,
    200,235,92,75,98,166,47,244,1,139,151,107,43,81,145,47,
    138,166,79,187,159,237,70,210,81,50,89,213,229,107,160,62,
    199,227,100,82,126,182,182,90,199,146,214,115,51,211,243,132,
    55,178,131,217,220,193,135,151,90,188,9,234,116,56,58,98,
    83,216,70,114,62,130,204,34,197,204,34,147,88,4,242,208,
    206,89,37,57,251,208,76,156,126,95,6,222,240,92,195,45,
    87,109,35,142,245,135,144,109,33,199,241,16,51,139,207,121,
    151,38,45,115,74,243,42,151,50,47,190,14,235,205,112,63,
    210,43,221,36,184,15,147,157,73,235,156,164,183,44,179,153,
    191,201,86,238,230,25,44,127,144,81,104,187,97,127,96,199,
    254,7,73,199,236,203,88,112,67,203,9,245,52,89,221,189,
    176,151,234,68,50,238,132,93,143,165,127,14,31,13,49,115,
    106,136,172,77,53,206,244,143,222,219,109,191,29,218,221,240,
    208,238,57,209,30,15,114,41,19,141,64,54,58,219,160,110,
    159,233,169,82,134,211,74,92,206,69,3,176,71,156,109,57,
    215,55,250,172,17,206,115,233,17,206,181,168,197,11,77,76,
    146,47,110,37,137,149,188,217,213,242,249,89,244,156,247,67,
    89,159,106,39,105,99,201,252,52,237,34,126,196,121,244,41,
    121,220,126,70,30,209,46,92,135,142,191,219,25,162,225,114,
    174,179,171,149,181,156,155,145,186,196,2,234,103,44,144,163,
    169,165,51,252,158,236,58,131,161,184,79,52,147,52,138,93,
    67,146,90,57,195,125,224,71,106,223,233,218,142,231,37,246,
    252,36,3,9,228,207,87,57,162,90,189,160,135,27,238,7,
    138,101,126,154,131,132,214,114,66,153,202,193,151,211,40,78,
    94,42,153,207,27,236,134,233,29,165,39,241,244,17,14,108,
    59,185,92,34,237,109,251,122,108,203,191,193,81,219,52,60,
    197,83,218,150,151,249,138,251,162,95,165,88,17,124,114,58,
    243,61,48,209,227,11,208,215,43,3,190,19,6,115,50,11,
    208,252,221,74,159,82,56,103,147,75,110,57,189,228,123,2,
    223,135,155,119,168,184,167,99,60,103,221,228,38,142,175,180,
    146,75,71,204,207,124,172,227,83,156,185,174,87,32,209,235,
    165,234,200,232,133,60,248,222,193,5,155,58,71,246,93,201,
    57,62,161,190,118,253,148,54,49,164,117,29,213,14,163,94,
    174,243,15,232,145,207,67,44,194,46,227,42,181,224,32,86,
    178,199,210,100,176,223,179,127,148,189,48,26,252,24,122,82,
    81,206,122,150,30,56,19,178,125,32,233,100,170,102,179,238,
    167,219,115,147,66,66,242,249,135,51,69,66,123,222,13,221,
    61,233,165,244,33,239,182,175,121,41,145,123,145,131,171,204,
    159,215,100,228,59,93,202,94,4,194,103,136,127,211,9,118,
    165,158,197,80,192,139,158,115,222,42,126,152,210,72,217,188,
    65,249,12,55,204,65,167,111,116,24,233,145,220,245,209,44,
    17,175,72,190,107,186,151,34,180,241,55,151,188,163,229,59,
    94,11,167,72,110,99,146,219,236,111,249,242,250,45,22,117,
    250,250,51,89,17,35,6,238,177,240,87,21,19,162,36,198,
    107,149,66,165,92,41,21,208,113,136,50,35,198,10,149,234,
    184,184,236,183,136,142,84,53,22,231,43,226,191,74,135,3,
    48,
};

EmbeddedPython embedded_m5_internal_param_Sinic(
    "m5/internal/param_Sinic.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/build/X86/python/m5/internal/param_Sinic.py",
    "m5.internal.param_Sinic",
    data_m5_internal_param_Sinic,
    2641,
    8588);

} // anonymous namespace
