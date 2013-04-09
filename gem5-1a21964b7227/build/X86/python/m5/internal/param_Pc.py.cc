#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Pc[] = {
    120,156,205,88,91,111,219,200,21,62,67,74,178,37,91,178,
    124,137,175,185,48,69,83,8,109,98,53,110,19,111,219,32,
    216,52,187,15,251,176,94,131,46,144,44,119,1,130,38,71,
    50,109,138,20,200,113,178,90,216,47,117,208,246,207,244,47,
    20,253,103,237,57,103,56,180,156,77,128,5,90,64,145,205,
    193,112,102,120,230,92,190,115,153,9,161,252,109,224,243,185,
    3,80,252,91,0,68,248,47,224,12,32,17,224,9,16,82,
    64,180,10,167,117,200,182,64,68,117,120,7,224,89,32,45,
    184,194,142,13,223,89,144,182,113,2,191,106,192,153,205,67,
    2,38,45,144,53,240,234,240,42,93,133,154,108,192,105,11,
    178,57,16,248,75,45,16,175,163,57,136,230,225,29,238,128,
    157,38,211,156,135,168,197,157,38,68,11,220,105,193,164,11,
    114,1,188,69,192,245,94,27,137,61,68,98,29,38,230,48,
    177,8,167,214,32,106,211,122,228,231,91,90,90,163,165,122,
    151,14,211,89,130,146,187,46,120,93,211,95,6,111,217,244,
    87,192,91,49,253,85,240,86,77,127,13,188,53,211,191,5,
    222,45,211,95,7,111,221,244,55,192,219,48,253,77,240,54,
    77,127,11,188,45,211,223,6,111,219,244,119,192,219,129,104,
    9,228,54,196,183,97,128,202,237,86,204,223,1,105,67,124,
    23,188,187,32,241,255,14,92,161,254,163,101,94,123,143,215,
    174,84,107,29,94,123,31,188,251,32,241,223,209,107,27,112,
    212,187,133,214,140,255,131,191,30,90,19,212,34,54,111,100,
    94,196,89,234,199,233,32,139,45,154,111,80,67,182,15,169,
    153,195,167,141,207,75,2,193,63,129,17,16,89,37,8,46,
    1,9,11,226,255,204,130,75,238,92,90,48,233,193,133,128,
    184,6,145,13,23,184,77,157,24,24,10,184,178,224,123,155,
    22,92,98,91,67,147,57,80,83,218,254,107,218,100,154,212,
    28,92,214,225,162,14,71,226,245,133,69,35,167,77,200,250,
    32,126,188,205,116,231,153,174,5,23,216,214,224,170,6,151,
    13,120,133,171,112,40,110,146,6,240,51,20,150,112,119,212,
    171,33,199,7,83,34,147,56,81,156,167,193,72,170,38,246,
    253,113,144,7,35,255,48,236,181,204,116,86,236,142,3,117,
    226,242,122,155,148,49,26,43,166,147,165,82,45,96,103,16,
    167,145,63,202,162,243,68,170,121,34,226,15,226,68,250,62,
    79,126,53,26,103,185,250,50,207,179,220,37,125,242,96,146,
    5,213,23,117,82,109,146,21,178,71,187,241,54,46,145,87,
    180,122,48,102,138,196,0,243,72,31,71,178,8,243,120,172,
    208,76,154,34,173,38,106,61,50,16,55,69,138,77,159,184,
    40,198,65,40,251,99,153,141,19,217,15,251,97,150,36,113,
    90,140,250,50,148,251,79,246,251,227,60,59,149,161,162,87,
    159,222,135,114,244,228,209,227,96,239,241,31,158,254,254,120,
    127,111,111,191,127,124,30,39,81,255,245,103,79,251,227,137,
    58,201,210,254,232,73,63,78,149,68,157,37,125,163,173,93,
    156,91,161,125,223,198,67,63,102,137,253,19,153,140,101,78,
    74,45,182,137,39,209,21,139,162,33,108,209,19,29,238,181,
    177,127,219,90,16,7,49,201,28,146,30,8,107,182,65,215,
    191,128,141,136,40,56,181,32,91,6,113,193,64,196,213,104,
    106,132,208,145,160,89,139,103,31,130,80,86,57,30,219,132,
    8,26,93,193,111,24,115,8,62,92,251,140,32,32,82,68,
    63,225,166,78,208,214,128,66,36,106,136,101,29,156,171,211,
    23,68,202,162,45,106,176,56,238,34,245,121,30,181,104,148,
    121,153,166,155,226,0,194,7,227,9,142,173,35,11,127,101,
    228,30,245,72,166,3,70,145,58,137,139,236,109,202,182,162,
    62,59,219,17,170,235,112,242,205,49,153,160,184,135,3,223,
    102,231,78,24,164,105,166,156,32,138,156,64,169,60,62,62,
    87,178,112,84,230,60,40,24,148,238,178,1,98,69,111,50,
    54,192,35,144,32,240,244,75,20,135,10,95,86,249,133,77,
    83,72,133,32,58,201,162,2,199,137,196,80,42,183,110,144,
    126,18,20,180,163,234,96,255,133,217,154,145,219,107,24,156,
    21,50,25,168,22,67,54,40,10,159,183,166,113,70,39,81,
    122,19,36,231,82,209,250,66,5,10,57,160,174,222,116,182,
    248,220,36,53,24,45,144,156,126,154,165,209,4,25,143,195,
    251,196,211,38,163,180,13,203,136,204,117,124,154,226,150,152,
    131,142,216,20,203,86,72,50,214,74,132,50,58,215,73,35,
    192,160,16,101,248,65,164,94,97,152,234,89,28,100,88,88,
    246,102,162,206,145,199,221,161,230,54,53,119,168,185,107,244,
    49,51,165,180,223,87,202,46,49,98,177,38,66,187,148,185,
    242,72,247,134,71,118,166,60,242,138,60,139,188,202,34,247,
    187,246,42,155,244,146,45,24,127,97,175,69,152,144,31,93,
    123,9,235,203,237,146,30,26,6,224,46,161,118,26,186,195,
    41,232,186,100,42,198,173,187,253,49,221,58,159,144,110,135,
    90,183,143,137,145,197,18,101,29,70,215,130,8,9,34,164,
    129,57,163,229,47,176,51,217,32,45,79,171,119,3,243,233,
    43,170,159,48,47,114,114,197,56,246,90,103,212,82,233,186,
    83,35,60,14,108,88,47,147,93,65,17,24,165,250,97,226,
    100,3,71,129,225,225,217,131,98,247,65,241,39,140,42,206,
    115,142,83,58,174,232,200,145,203,113,142,17,130,51,162,175,
    61,221,103,175,247,203,172,133,54,160,226,129,77,199,154,231,
    0,82,96,240,192,216,54,91,181,183,42,181,147,20,251,196,
    69,139,117,110,195,6,62,45,193,172,250,25,71,93,174,105,
    120,22,159,63,147,246,73,1,18,168,158,117,143,180,32,44,
    35,73,235,246,110,96,106,86,18,186,191,193,45,63,55,126,
    218,128,10,65,244,216,36,3,185,205,223,129,203,64,1,127,
    3,66,11,130,162,116,52,118,107,227,218,171,180,156,148,112,
    33,62,152,104,173,210,101,173,50,208,161,79,143,219,156,63,
    203,196,139,149,218,63,166,162,224,149,13,130,179,161,93,86,
    123,211,217,176,86,249,57,99,237,103,101,188,218,141,128,224,
    110,85,62,111,87,62,127,29,74,171,18,13,131,217,204,240,
    55,175,247,247,73,148,47,175,209,71,121,229,142,88,179,166,
    48,245,144,154,71,21,156,132,25,155,5,215,247,224,227,217,
    209,215,129,151,226,82,81,99,97,150,26,92,157,30,134,149,
    255,212,141,255,236,85,254,35,57,11,188,227,35,2,181,22,
    65,226,202,18,120,238,195,74,137,142,91,53,144,117,240,26,
    228,105,92,5,139,210,17,133,9,133,20,66,111,228,152,41,
    237,85,160,208,102,167,230,135,217,70,30,178,252,179,36,24,
    29,71,193,243,239,136,7,98,36,52,158,105,25,161,186,211,
    66,145,79,137,143,200,197,175,191,53,194,189,153,109,208,161,
    228,85,9,197,78,22,101,33,71,154,191,156,72,103,36,71,
    199,120,114,60,137,199,206,32,9,134,108,73,187,20,250,27,
    35,180,98,40,188,159,248,139,95,83,155,57,97,150,98,254,
    56,15,85,150,59,145,196,51,149,140,156,71,14,39,31,39,
    46,156,224,24,103,131,80,105,55,185,25,2,184,2,13,242,
    97,193,197,230,217,91,234,206,30,10,62,30,162,99,44,192,
    191,55,90,211,7,188,42,147,112,157,173,125,14,119,198,179,
    146,154,232,224,248,148,26,210,138,251,43,248,36,18,78,31,
    183,244,104,111,82,111,67,236,96,105,204,18,30,134,135,180,
    170,248,105,20,56,254,57,81,64,223,251,148,177,160,65,43,
    229,28,157,231,169,109,82,170,241,90,80,94,35,45,240,224,
    34,221,215,68,13,30,233,80,212,152,251,31,163,6,123,215,
    236,253,234,248,255,25,44,220,189,79,75,38,247,119,80,150,
    36,31,11,20,98,90,224,182,14,20,177,48,231,5,54,212,
    129,150,143,175,59,150,166,144,231,135,185,12,148,212,198,220,
    153,181,224,28,126,52,71,81,101,82,35,93,221,72,184,95,
    73,120,197,165,217,100,109,170,136,103,11,139,87,105,151,10,
    253,11,86,130,111,233,90,31,42,93,212,42,93,80,37,159,
    202,183,190,209,135,46,226,137,141,96,60,150,105,116,93,160,
    243,204,108,97,65,113,109,0,85,69,180,136,213,248,26,62,
    63,117,96,146,111,74,92,54,110,189,242,217,153,155,153,241,
    125,102,12,220,35,60,94,71,117,151,204,171,227,120,21,194,
    221,63,86,6,91,157,6,111,49,41,148,28,209,241,240,131,
    227,88,137,233,139,20,126,101,245,49,248,35,153,72,37,43,
    155,43,218,172,60,37,71,18,179,100,54,193,211,26,31,114,
    240,61,241,253,79,32,131,124,70,136,164,189,41,231,81,6,
    105,240,245,74,179,214,20,156,198,223,187,106,214,204,254,2,
    76,57,63,225,171,7,112,151,42,61,242,173,168,201,154,236,
    81,116,88,61,8,70,250,194,138,239,92,92,34,224,254,210,
    152,130,117,169,143,125,124,132,210,199,91,244,30,174,49,184,
    164,112,119,141,83,105,230,143,88,243,172,116,153,158,143,252,
    175,229,40,203,39,95,103,145,84,100,240,23,101,77,162,135,
    253,55,146,138,23,181,86,125,126,115,158,201,232,9,28,208,
    183,126,108,119,61,246,50,201,194,51,25,149,227,215,107,143,
    98,179,150,92,32,202,3,84,48,223,170,202,60,14,146,248,
    71,201,246,127,17,69,185,27,164,67,105,184,232,84,4,14,
    147,64,13,178,124,164,150,171,161,175,82,149,191,204,176,201,
    18,157,200,203,37,156,233,203,0,203,128,202,229,48,70,21,
    104,114,102,85,25,106,200,166,172,134,107,220,78,125,49,123,
    208,233,122,92,223,87,60,231,235,137,3,108,186,116,179,183,
    212,20,115,22,198,31,252,107,137,142,168,139,197,118,211,110,
    54,154,117,27,129,73,35,171,98,193,110,182,22,197,135,255,
    182,16,182,45,107,107,161,41,254,11,38,195,248,188,
};

EmbeddedPython embedded_m5_internal_param_Pc(
    "m5/internal/param_Pc.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/build/X86/python/m5/internal/param_Pc.py",
    "m5.internal.param_Pc",
    data_m5_internal_param_Pc,
    2238,
    6937);

} // anonymous namespace