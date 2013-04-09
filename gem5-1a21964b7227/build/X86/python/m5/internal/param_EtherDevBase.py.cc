#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_EtherDevBase[] = {
    120,156,237,91,89,115,27,199,17,238,89,28,20,192,251,190,
    116,64,7,37,88,150,4,75,182,76,39,86,57,62,228,114,
    249,193,180,2,166,34,121,157,212,214,18,59,32,87,2,118,
    81,187,67,73,112,81,47,161,43,201,67,42,201,67,146,159,
    144,151,84,254,66,254,90,210,221,179,179,88,144,4,133,74,
    185,74,48,203,34,118,106,208,219,219,51,221,243,245,55,51,
    216,81,3,146,127,235,120,125,92,1,136,255,102,1,120,248,
    17,240,12,160,37,192,22,32,164,0,111,29,158,22,32,92,
    5,225,21,224,123,0,219,2,105,193,33,86,114,240,173,5,
    193,36,222,192,167,138,240,44,199,34,1,221,50,200,60,216,
    5,120,28,204,67,94,22,225,105,25,194,49,16,248,47,176,
    64,60,241,198,192,59,7,223,99,11,88,41,177,205,115,224,
    149,185,82,2,111,156,43,101,232,206,128,28,7,123,2,80,
    223,158,68,99,183,208,216,20,27,171,176,49,15,111,157,7,
    111,146,244,177,63,223,144,106,158,84,117,43,83,108,103,26,
    188,105,178,211,68,79,102,82,77,52,157,3,127,22,236,89,
    144,248,153,129,67,116,214,155,53,138,115,169,226,28,43,206,
    131,61,15,18,63,115,90,145,107,164,184,144,42,46,176,226,
    34,216,139,32,241,179,160,21,23,141,226,82,170,184,196,138,
    203,96,47,131,196,207,146,86,212,17,92,1,123,5,146,250,
    42,216,171,166,190,6,246,154,169,175,131,189,110,234,231,193,
    62,111,234,23,192,190,96,234,23,193,190,104,234,151,192,190,
    100,234,21,176,43,166,126,25,236,203,166,126,5,236,43,166,
    126,21,236,171,166,126,13,236,107,166,190,1,246,134,169,95,
    7,251,186,169,223,0,251,6,120,232,201,10,248,85,246,117,
    37,245,245,45,246,245,38,216,55,65,226,231,45,237,235,42,
    235,190,205,186,107,169,238,45,214,189,13,246,109,144,248,185,
    165,117,139,176,93,189,128,8,245,255,139,255,170,2,107,106,
    2,139,231,50,138,253,48,112,252,160,25,250,22,221,47,82,
    65,120,110,80,49,134,215,36,94,159,17,176,255,13,140,106,
    207,74,128,253,10,208,176,160,254,63,179,224,21,87,94,89,
    208,173,194,129,0,63,15,94,14,14,176,153,2,117,96,87,
    192,161,5,191,201,145,194,43,44,243,8,195,10,228,149,198,
    244,130,134,161,54,53,6,175,10,112,80,128,109,241,228,192,
    34,201,211,18,132,53,16,223,157,103,187,231,216,174,5,7,
    88,230,225,48,15,175,138,240,24,181,80,228,151,40,2,248,
    24,58,75,72,216,174,230,177,199,91,25,151,201,29,207,143,
    2,183,45,213,60,214,157,142,27,185,109,231,115,181,39,163,
    135,242,249,167,110,44,171,101,163,24,198,119,58,174,218,171,
    243,147,57,10,75,187,163,216,98,24,72,53,142,149,166,31,
    120,78,59,244,246,91,82,157,35,115,78,211,111,73,199,225,
    155,95,182,59,97,164,62,143,162,48,170,83,100,89,216,10,
    221,244,137,2,5,185,21,98,147,212,26,55,83,39,243,138,
    180,155,29,182,72,29,224,222,210,195,158,140,27,145,223,81,
    56,96,218,34,105,147,181,42,13,21,23,241,75,44,106,212,
    139,184,227,54,100,173,35,195,78,75,214,26,181,70,216,106,
    249,65,220,174,201,134,220,188,191,89,235,68,225,83,217,80,
    244,213,161,239,187,178,125,255,246,93,247,222,221,159,189,255,
    222,206,230,189,123,155,181,157,125,191,229,213,158,124,240,126,
    173,211,85,123,97,80,107,223,175,249,129,146,24,189,86,237,
    120,220,238,160,214,28,245,224,133,191,235,248,236,187,179,39,
    91,29,25,149,72,186,70,189,19,51,98,66,20,69,78,84,
    197,20,215,38,177,126,222,26,23,91,62,121,223,160,136,16,
    254,114,6,113,255,1,30,88,68,198,83,11,194,89,16,7,
    12,78,212,198,225,71,88,109,11,186,107,241,221,91,32,148,
    149,200,253,28,161,132,164,115,248,12,227,16,1,137,186,15,
    8,22,34,192,140,32,44,21,8,238,26,100,136,78,13,187,
    112,10,239,21,232,9,50,101,81,19,121,152,232,204,160,245,
    115,44,181,72,202,125,201,218,13,80,160,74,196,155,40,91,
    194,46,252,142,209,188,93,37,159,182,24,79,106,207,143,195,
    23,1,143,26,213,57,1,183,49,92,143,186,95,239,208,96,
    196,151,80,240,77,184,95,105,184,65,16,170,138,235,121,21,
    87,169,200,223,217,87,50,174,168,176,178,17,51,60,235,179,
    6,146,169,189,110,199,64,144,224,130,16,212,95,60,191,161,
    240,11,99,221,225,161,137,165,66,56,237,133,94,140,114,50,
    177,43,85,189,96,48,191,231,198,212,162,154,194,250,39,166,
    105,198,112,181,104,16,23,203,86,83,149,25,188,110,28,59,
    220,52,201,25,167,100,233,185,219,218,151,138,244,99,229,42,
    236,1,85,117,163,163,130,212,21,10,136,137,7,121,236,4,
    97,224,117,209,5,191,113,153,122,183,194,120,157,132,89,196,
    232,18,94,37,177,40,198,96,74,172,136,89,171,65,222,230,
    19,172,50,78,151,40,54,192,240,16,9,57,33,102,15,145,
    196,170,22,83,16,187,205,25,78,214,153,151,234,180,96,168,
    159,167,130,136,185,126,209,68,102,4,194,51,121,52,60,119,
    168,75,22,199,164,145,75,188,79,179,180,222,151,165,83,153,
    44,61,164,108,163,76,179,40,37,123,153,150,163,8,133,227,
    38,135,56,147,17,58,148,91,189,204,225,200,213,103,40,34,
    69,3,250,58,33,57,11,231,221,12,156,235,52,104,140,229,
    250,218,160,40,87,70,50,202,187,58,202,119,169,75,19,9,
    242,166,24,113,227,162,65,176,161,88,140,153,120,63,196,74,
    119,153,226,157,13,244,50,206,192,143,105,21,137,51,41,79,
    199,200,114,79,244,28,156,132,95,87,242,132,209,102,14,150,
    146,233,49,38,126,70,255,94,118,43,97,179,162,192,244,225,
    193,70,124,103,35,254,16,57,167,242,17,179,152,102,29,205,
    43,145,236,68,200,31,37,254,162,121,192,97,78,112,146,217,
    13,71,99,145,162,108,153,49,96,122,137,145,90,144,249,70,
    101,0,202,233,0,144,63,155,212,159,50,71,63,7,203,120,
    149,5,119,218,9,153,157,121,61,196,119,241,250,148,198,129,
    66,33,129,214,247,245,109,237,18,123,75,126,215,171,125,56,
    123,243,190,214,223,198,198,63,54,89,92,132,20,85,116,229,
    200,27,74,170,63,0,47,38,5,252,30,8,65,8,148,36,
    13,57,233,77,226,207,147,58,133,227,64,156,56,53,91,73,
    66,91,9,33,98,198,119,38,121,198,77,166,106,92,239,253,
    49,195,150,135,57,16,60,127,230,146,53,99,118,254,204,167,
    44,192,248,27,106,142,204,247,209,69,125,53,101,132,92,202,
    8,61,202,77,151,119,72,117,111,126,156,56,191,176,39,14,
    57,245,121,15,145,52,19,93,16,11,86,6,103,183,168,184,
    157,66,76,24,217,155,237,255,37,24,60,179,58,154,170,137,
    191,226,60,187,53,93,228,20,67,35,159,120,94,148,166,88,
    193,164,216,195,52,197,36,79,30,223,243,14,132,74,139,176,
    114,104,9,220,42,235,77,50,46,189,104,159,90,4,57,70,
    187,4,218,1,23,146,29,48,166,39,205,32,140,121,115,49,
    147,18,3,247,77,86,153,240,166,248,209,8,161,226,229,136,
    36,51,131,228,65,203,109,239,120,238,71,95,83,111,168,75,
    13,147,206,150,113,111,38,235,30,37,162,24,224,33,127,125,
    199,184,249,124,68,220,172,211,124,152,186,199,57,234,133,13,
    38,170,95,237,201,74,91,182,119,112,251,186,231,119,42,205,
    150,187,203,163,155,75,192,243,5,185,255,115,224,85,153,246,
    253,79,122,115,186,144,153,15,153,167,196,227,96,134,230,204,
    3,102,43,199,210,211,38,65,129,236,109,105,46,73,247,111,
    129,124,225,36,96,213,211,33,225,202,237,116,100,224,245,200,
    133,87,195,110,180,27,179,202,136,4,51,153,184,253,192,199,
    13,193,47,123,196,50,141,19,221,2,94,199,147,131,188,200,
    4,130,249,165,144,50,205,250,232,184,198,56,249,181,193,73,
    149,198,169,55,9,243,86,70,19,18,182,141,219,81,213,213,
    179,201,77,42,174,83,177,153,14,49,233,122,18,247,230,210,
    140,178,154,129,116,173,137,251,111,21,133,93,92,233,240,178,
    0,191,183,28,103,164,38,249,26,141,148,25,219,162,88,199,
    45,118,41,95,18,188,78,251,178,67,254,200,56,30,97,150,
    101,14,26,149,96,18,170,190,253,33,201,181,126,111,84,189,
    171,191,11,201,10,240,77,16,235,100,66,172,41,66,117,240,
    238,67,223,138,237,125,19,213,81,137,32,209,198,111,207,30,
    145,238,12,32,210,250,7,84,12,164,206,153,30,117,246,198,
    145,128,82,255,176,207,193,17,240,242,1,54,110,15,100,201,
    45,169,218,110,252,236,39,150,28,30,50,187,103,154,37,83,
    239,70,133,37,19,132,254,120,88,210,63,123,44,25,252,0,
    44,105,198,113,52,89,242,23,216,120,243,4,150,44,51,75,
    62,246,213,222,163,48,82,63,209,228,240,152,137,207,52,77,
    166,222,189,89,154,156,74,105,210,64,244,199,195,147,251,103,
    143,39,191,251,255,120,114,54,203,147,233,64,142,38,81,126,
    138,141,71,39,16,37,189,68,201,234,30,167,202,123,195,80,
    101,66,146,121,144,5,162,202,186,126,165,124,166,136,241,47,
    103,154,24,83,239,134,35,70,114,228,107,227,186,98,68,28,
    125,41,26,83,202,108,133,149,70,24,196,42,218,111,168,48,
    170,120,178,233,7,210,171,220,174,240,235,184,138,31,87,220,
    29,188,235,54,148,30,244,35,47,64,136,0,249,215,203,103,
    47,232,167,202,81,9,24,81,192,95,83,206,24,27,196,25,
    155,125,196,49,82,116,64,47,109,254,76,189,40,38,116,128,
    84,48,119,132,10,30,209,147,39,252,16,247,84,12,189,118,
    66,5,89,4,127,140,203,115,244,142,13,151,79,137,176,204,
    229,56,11,39,140,112,146,203,41,22,78,27,225,12,151,179,
    44,156,51,194,121,46,23,88,184,104,132,75,92,46,179,112,
    197,8,87,185,92,99,225,186,17,158,231,242,2,11,47,26,
    225,37,46,43,44,188,108,132,87,184,188,202,194,107,70,184,
    193,229,117,22,222,48,194,42,151,111,177,240,166,17,190,205,
    229,45,22,222,54,194,59,92,214,88,248,142,33,207,187,44,
    188,7,246,187,102,133,249,222,153,92,97,254,227,76,19,105,
    234,221,235,137,212,74,178,138,93,223,4,179,194,60,228,215,
    218,125,203,75,209,183,188,20,175,91,94,210,73,159,228,37,
    208,145,108,206,44,51,211,67,15,35,183,194,252,39,164,43,
    204,137,51,178,194,252,87,58,91,220,31,52,91,244,86,152,
    60,134,55,78,100,99,103,207,141,60,156,11,165,227,234,95,
    47,233,84,206,208,186,49,234,82,91,71,111,240,251,240,19,
    12,68,47,233,245,145,219,229,70,94,167,67,198,233,245,157,
    17,168,171,39,63,160,94,58,77,191,25,58,177,255,157,100,
    195,195,232,145,113,90,170,102,133,131,220,246,218,174,243,34,
    242,113,85,222,116,105,213,113,90,136,142,233,154,16,29,189,
    161,174,191,206,64,47,82,67,170,82,83,211,125,77,233,184,
    85,6,6,26,17,140,72,227,54,94,171,68,214,75,122,56,
    180,68,109,12,238,86,36,93,47,227,192,112,154,212,194,84,
    210,255,158,88,93,62,249,97,76,146,40,211,196,235,181,200,
    60,145,64,79,116,90,96,185,3,153,241,30,82,53,59,6,
    25,249,32,76,70,67,98,55,58,9,187,89,225,41,227,167,
    246,184,35,167,15,114,162,148,25,100,45,25,244,136,26,198,
    174,58,102,55,149,12,202,126,53,4,67,168,163,12,97,4,
    106,109,128,127,9,173,157,114,155,76,209,54,1,235,60,101,
    40,58,62,213,123,41,126,116,214,27,205,61,249,23,216,248,
    223,169,23,4,86,189,39,95,60,229,143,246,235,188,55,58,
    242,127,32,180,59,116,248,85,159,16,235,242,89,87,168,79,
    167,115,9,31,210,55,231,10,104,198,225,193,221,114,219,250,
    212,52,31,247,173,95,161,226,154,153,137,120,215,165,207,20,
    242,169,60,125,138,18,23,21,188,113,227,125,90,157,154,228,
    183,249,106,1,210,227,81,124,10,33,146,187,126,140,190,243,
    91,44,94,142,164,175,219,250,239,255,162,119,63,249,161,185,
    255,62,253,108,161,150,33,251,99,110,159,2,255,6,211,31,
    93,191,33,57,165,181,244,81,195,79,100,83,61,89,203,85,
    205,48,106,103,30,254,18,73,230,179,16,139,176,197,185,170,
    165,219,93,108,163,205,214,100,176,223,118,190,146,237,48,234,
    126,21,122,82,209,12,254,73,178,117,213,98,231,185,100,234,
    88,72,31,239,191,159,233,20,10,244,97,122,62,36,172,101,
    159,181,194,198,51,233,37,242,158,238,182,111,116,105,117,227,
    69,46,130,138,255,179,130,140,124,183,69,84,66,211,21,159,
    245,113,131,93,105,122,209,51,240,176,237,30,143,138,31,38,
    178,241,76,142,225,119,222,24,114,50,101,193,122,60,228,153,
    71,146,20,35,48,15,98,128,236,227,163,148,129,250,136,154,
    62,11,252,17,31,253,165,55,38,51,116,146,126,186,36,198,
    44,92,125,226,95,89,76,137,130,152,152,44,229,74,197,82,
    33,135,89,74,146,121,49,158,43,149,151,74,37,81,182,142,
    151,19,226,244,191,213,60,105,173,46,151,196,255,0,184,167,
    4,254,
};

EmbeddedPython embedded_m5_internal_param_EtherDevBase(
    "m5/internal/param_EtherDevBase.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/build/X86/python/m5/internal/param_EtherDevBase.py",
    "m5.internal.param_EtherDevBase",
    data_m5_internal_param_EtherDevBase,
    3026,
    14235);

} // anonymous namespace