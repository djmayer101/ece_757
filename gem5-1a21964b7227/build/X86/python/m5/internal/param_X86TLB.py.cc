#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86TLB[] = {
    120,156,205,88,123,111,219,200,17,159,37,37,217,146,37,63,
    226,87,28,231,193,20,205,65,184,38,81,227,54,241,181,13,
    130,75,114,247,199,1,119,78,64,29,144,28,239,0,130,38,
    215,50,109,138,20,200,117,124,58,216,255,212,65,219,47,211,
    175,80,244,155,181,51,179,92,90,118,18,224,128,22,144,101,
    115,177,220,93,206,206,227,55,143,221,16,202,223,58,62,95,
    58,0,197,191,5,64,132,255,2,14,1,18,1,158,0,33,
    5,68,203,112,80,135,108,3,68,84,135,247,0,158,5,210,
    130,51,236,216,240,163,5,105,7,39,240,171,6,28,218,60,
    36,96,220,2,89,3,175,14,111,210,101,168,201,6,28,180,
    32,155,1,129,191,212,2,241,54,154,129,104,22,222,227,14,
    216,105,50,205,89,136,90,220,105,66,52,199,157,22,140,23,
    65,206,129,215,6,92,239,117,144,216,125,36,54,207,196,28,
    38,22,225,212,10,68,29,90,143,252,252,64,75,107,180,84,
    239,50,207,116,22,160,228,110,17,188,69,211,95,2,111,201,
    244,175,129,119,205,244,151,193,91,54,253,21,240,86,76,127,
    21,188,85,211,95,3,111,205,244,215,193,91,55,253,235,224,
    93,55,253,13,240,54,76,255,6,120,55,76,127,19,188,77,
    136,22,64,110,66,124,19,246,80,185,139,21,243,183,64,218,
    16,223,6,239,54,72,252,191,5,103,168,255,104,137,215,222,
    225,181,215,170,181,14,175,189,11,222,93,144,248,239,232,181,
    13,232,119,87,209,154,241,127,240,215,69,107,130,106,99,243,
    78,230,69,156,165,126,156,238,101,177,69,243,13,106,200,246,
    33,53,51,248,116,240,121,73,32,248,39,48,2,34,171,4,
    193,41,32,97,65,252,31,90,112,202,157,83,11,198,93,56,
    17,16,215,32,178,225,4,183,169,19,3,3,1,103,22,252,
    100,211,130,83,108,107,104,50,7,106,74,219,127,69,155,76,
    147,154,129,211,58,156,212,161,47,222,158,88,52,114,208,132,
    172,7,226,151,155,76,119,150,233,90,112,130,109,13,206,106,
    112,218,128,55,184,10,135,226,38,105,0,63,67,97,9,119,
    253,110,13,57,222,153,16,153,196,137,226,60,13,134,82,145,
    88,254,40,200,131,161,255,246,139,39,223,127,251,162,219,50,
    75,178,226,225,40,80,251,46,127,99,147,66,134,35,197,180,
    178,84,170,57,236,236,197,105,228,15,179,232,40,145,106,150,
    8,249,123,113,34,125,159,39,191,25,142,178,92,125,157,231,
    89,238,146,78,121,48,201,130,234,139,58,169,55,201,10,217,
    165,221,120,27,151,200,43,90,189,55,98,138,196,0,243,73,
    31,71,178,8,243,120,164,208,84,154,34,173,38,106,93,50,
    18,55,69,142,77,143,184,40,70,65,40,123,35,153,141,18,
    217,11,123,97,150,36,113,90,12,123,50,148,219,143,183,123,
    163,60,59,144,161,162,87,159,222,7,114,248,248,193,163,96,
    235,209,159,158,252,113,119,123,107,107,187,183,123,20,39,81,
    15,149,210,27,141,213,126,150,246,134,143,123,113,170,36,234,
    45,233,77,106,236,33,206,95,163,189,143,227,129,31,179,212,
    254,190,76,70,50,111,210,232,13,226,75,44,138,182,104,8,
    91,116,197,60,247,58,216,191,105,205,137,157,152,228,14,73,
    23,132,57,219,160,236,95,192,198,68,52,28,88,144,45,129,
    56,97,64,226,106,52,57,66,169,47,104,214,226,217,251,32,
    148,85,142,199,54,33,131,70,175,225,55,140,61,4,33,174,
    125,74,80,16,41,122,1,225,167,78,16,215,192,66,68,106,
    168,101,243,56,87,167,47,136,148,69,91,212,160,61,90,68,
    234,179,60,106,209,40,243,50,73,55,197,1,213,164,184,130,
    99,107,200,194,95,25,193,253,46,201,180,195,72,82,251,113,
    145,29,167,108,47,234,179,211,245,81,93,175,199,175,118,201,
    12,197,29,28,248,33,59,114,194,32,77,51,229,4,81,228,
    4,74,229,241,238,145,146,133,163,50,231,94,193,192,116,151,
    12,24,43,122,227,145,1,31,1,5,193,167,95,162,56,84,
    248,178,204,47,108,154,66,42,4,210,126,22,21,56,78,36,
    6,82,185,117,131,246,253,160,160,29,213,60,246,159,155,173,
    25,189,221,134,193,90,33,147,61,213,98,216,6,69,225,243,
    214,52,206,8,37,74,239,130,228,72,42,90,95,168,64,33,
    7,212,213,155,78,31,163,215,73,21,70,19,36,171,159,102,
    105,52,70,230,227,240,46,241,117,157,145,218,129,37,68,231,
    26,62,77,177,42,102,96,94,92,23,75,86,72,114,214,74,
    148,50,66,215,72,43,192,192,16,101,40,66,180,158,97,200,
    234,90,28,112,88,96,246,106,162,206,81,200,221,164,230,38,
    53,183,168,185,109,116,50,85,197,116,46,43,230,33,49,99,
    177,54,66,187,148,187,242,76,247,130,103,206,79,120,230,25,
    121,24,121,151,69,110,120,238,93,54,233,38,155,51,126,195,
    222,139,112,33,127,58,247,22,214,153,187,72,186,104,24,160,
    187,132,222,73,8,15,38,32,236,146,185,24,191,238,141,79,
    233,215,185,98,250,29,104,253,62,34,102,218,37,218,230,25,
    101,115,34,36,168,144,22,102,140,166,191,194,206,120,157,52,
    61,169,226,117,204,177,111,168,166,194,92,201,9,23,99,218,
    91,157,101,75,197,235,78,141,112,185,103,195,90,153,0,11,
    138,198,40,217,207,99,39,219,115,20,24,30,158,222,43,30,
    222,43,254,130,17,198,121,198,49,75,199,24,29,69,114,57,
    202,49,90,52,249,69,123,189,207,17,192,47,179,24,218,129,
    10,10,54,31,107,159,131,73,129,129,4,227,220,244,85,223,
    170,84,79,146,108,19,39,45,214,187,13,235,248,180,4,179,
    235,103,28,133,185,214,225,89,124,94,144,5,72,9,18,168,
    206,117,251,90,24,150,147,36,118,187,23,176,53,77,41,221,
    223,225,182,95,26,159,109,64,133,36,122,108,146,131,92,232,
    239,192,37,162,128,191,1,161,6,193,81,58,29,187,184,113,
    243,101,90,78,138,56,17,31,77,190,86,233,190,86,25,248,
    208,191,71,29,206,169,101,50,198,42,238,31,19,81,241,204,
    6,193,25,210,46,43,193,201,12,89,171,124,158,49,247,171,
    178,96,237,66,112,112,55,42,255,183,43,255,63,15,173,85,
    233,134,129,109,170,56,156,213,60,248,36,206,215,231,40,164,
    92,115,75,172,88,19,216,186,79,205,131,10,86,194,140,77,
    139,243,59,240,233,172,233,235,96,76,113,170,168,177,64,11,
    13,69,182,193,207,191,233,63,247,95,190,250,246,213,78,223,
    71,74,149,107,213,141,107,109,85,174,37,57,81,188,231,83,
    5,181,22,33,229,204,18,120,84,196,162,138,78,104,53,144,
    117,240,26,228,132,92,52,139,210,71,133,137,148,20,97,47,
    164,161,9,133,86,88,209,104,160,230,231,169,187,44,3,226,
    105,18,12,119,163,224,217,143,196,7,49,19,26,167,181,140,
    96,139,147,130,145,187,137,79,200,198,175,191,55,2,190,155,
    186,128,46,229,184,74,48,246,193,40,11,57,16,125,191,47,
    157,161,28,238,226,161,115,63,30,57,123,73,48,96,139,218,
    165,224,175,140,224,138,33,113,185,70,40,62,167,54,115,194,
    44,197,52,115,20,170,44,119,34,137,71,49,25,57,15,28,
    206,81,78,92,56,193,46,206,6,161,210,30,116,49,66,112,
    209,26,228,131,130,235,211,195,99,234,78,93,99,101,198,141,
    211,24,235,246,159,140,230,244,217,176,74,56,92,158,107,119,
    196,221,241,136,165,198,58,126,62,161,134,52,227,126,6,87,
    38,47,245,112,91,143,246,39,53,55,196,38,86,212,124,244,
    209,43,94,211,234,226,195,200,112,252,107,34,131,190,62,42,
    227,67,131,86,202,25,186,22,160,182,73,89,201,107,153,193,
    57,110,219,60,216,129,242,138,106,158,7,23,248,198,167,193,
    35,75,20,94,102,254,199,240,194,46,56,125,197,147,243,237,
    254,63,163,138,187,117,245,228,114,255,0,101,105,243,169,136,
    34,38,133,238,232,136,18,11,115,6,97,131,237,104,25,249,
    58,101,249,18,52,253,48,151,129,146,218,176,155,87,65,1,
    28,175,52,87,81,101,94,35,101,221,72,186,93,73,122,198,
    165,222,120,101,226,112,192,214,22,111,210,69,58,64,156,176,
    50,124,75,159,33,160,210,73,173,210,9,65,37,149,199,254,
    164,94,244,1,129,88,9,70,35,153,70,231,197,63,207,76,
    93,75,28,12,7,80,85,89,109,172,244,87,240,249,208,177,
    73,206,9,177,217,208,245,202,151,175,132,201,25,243,137,49,
    118,151,46,218,206,211,129,75,166,214,9,160,138,253,238,159,
    43,227,173,95,6,244,113,144,28,202,156,142,161,159,156,195,
    42,143,77,171,95,213,234,229,101,69,252,139,100,2,31,159,
    161,207,249,170,8,95,216,14,236,85,145,76,164,146,23,64,
    196,200,42,143,245,145,196,92,157,141,241,104,201,167,49,124,
    79,124,255,138,228,176,47,8,230,80,6,77,202,97,13,190,
    23,90,21,205,90,83,112,73,113,233,198,92,179,252,27,48,
    39,143,49,223,152,128,187,80,153,133,47,118,77,246,102,103,
    165,243,245,78,48,212,247,109,124,93,228,18,1,247,183,198,
    178,108,18,125,74,229,211,158,62,145,163,99,114,189,195,229,
    141,75,183,54,124,201,85,137,240,58,160,11,135,221,68,190,
    209,198,108,87,147,253,113,161,228,80,17,79,50,61,26,250,
    223,201,97,150,143,191,203,34,201,118,125,94,22,79,122,216,
    127,39,169,202,82,43,213,231,23,231,153,140,158,192,1,125,
    163,201,102,215,99,47,147,44,60,148,81,57,126,190,182,31,
    155,181,228,114,81,30,160,13,248,198,88,230,113,144,32,126,
    24,34,207,163,40,119,131,116,32,13,23,157,138,192,139,160,
    144,104,37,6,77,217,231,146,67,221,134,143,28,65,24,106,
    185,28,196,40,185,166,82,126,83,6,53,50,180,218,248,0,
    212,19,31,93,13,68,234,163,131,190,125,121,198,151,45,59,
    216,44,210,125,229,66,83,204,88,24,237,240,175,37,230,69,
    93,180,59,77,187,217,104,214,109,68,45,141,44,139,57,187,
    217,106,139,143,255,109,32,162,91,214,70,187,41,254,11,119,
    169,49,58,
};

EmbeddedPython embedded_m5_internal_param_X86TLB(
    "m5/internal/param_X86TLB.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/build/X86/python/m5/internal/param_X86TLB.py",
    "m5.internal.param_X86TLB",
    data_m5_internal_param_X86TLB,
    2291,
    7163);

} // anonymous namespace