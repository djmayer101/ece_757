#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_DerivO3CPU[] = {
    120,156,205,91,249,119,27,215,117,190,3,128,164,64,145,20,
    41,82,251,6,217,150,13,107,131,37,199,150,147,184,174,181,
    182,76,104,137,6,232,74,158,164,69,134,51,143,196,136,192,
    12,50,243,72,10,46,213,37,116,147,180,77,210,37,105,179,
    182,73,247,37,203,57,253,185,231,244,95,107,239,189,51,119,
    56,0,6,4,146,246,212,36,137,123,222,124,239,206,123,239,
    174,111,193,163,13,241,79,25,63,239,150,0,194,111,228,0,
    28,252,51,96,3,160,105,128,105,128,161,12,112,230,225,233,
    24,248,167,192,112,198,224,99,0,51,7,42,7,187,88,200,
    195,23,114,224,77,99,5,190,53,14,27,121,134,12,232,76,
    130,42,128,57,6,143,189,121,40,168,113,120,58,9,254,4,
    24,248,227,229,192,120,226,76,128,115,8,62,198,30,176,80,
    228,54,15,129,51,201,133,34,56,135,185,48,9,157,89,80,
    135,193,156,2,228,55,167,177,177,171,216,216,12,55,86,226,
    198,28,172,90,0,103,154,248,113,60,31,18,107,129,88,163,
    94,102,184,157,35,16,143,110,22,204,89,41,207,129,57,39,
    229,163,96,30,149,242,60,152,243,82,94,0,115,65,202,199,
    192,60,38,229,227,96,30,151,242,9,48,79,72,249,36,152,
    39,165,124,10,204,83,82,62,13,230,105,41,159,1,243,140,
    148,207,130,121,86,202,231,192,60,39,229,243,96,158,151,242,
    5,48,47,72,185,4,102,73,202,23,193,188,40,229,23,192,
    124,65,202,47,130,249,162,148,95,2,243,37,41,95,2,243,
    146,148,95,6,243,101,41,191,2,230,43,82,46,131,89,150,
    242,171,96,190,42,229,203,96,94,150,242,21,48,175,72,249,
    42,152,87,193,57,2,234,20,184,215,96,13,29,101,54,49,
    196,117,80,121,112,43,96,86,64,225,223,117,216,69,95,114,
    230,152,247,53,230,61,154,240,222,96,222,155,96,222,4,133,
    127,55,34,222,113,168,149,143,161,103,186,255,141,63,101,3,
    75,122,10,201,150,10,66,215,247,234,174,183,230,187,57,170,
    31,39,66,126,108,19,153,192,207,52,126,238,146,67,255,28,
    216,155,157,92,236,208,207,1,27,54,104,252,27,57,120,206,
    133,231,57,232,148,97,199,0,183,0,78,30,118,176,155,49,
    26,192,186,1,187,57,248,98,158,24,158,35,45,160,251,149,
    160,160,35,95,94,136,220,47,106,106,2,158,143,193,206,24,
    212,140,39,59,57,66,158,22,193,175,128,241,209,89,110,247,
    16,183,155,131,29,164,5,216,45,192,243,113,120,140,92,8,
    185,69,210,0,190,134,194,82,12,213,202,5,28,241,195,148,
    200,36,142,227,6,158,213,82,122,14,203,245,182,21,88,173,
    250,61,21,184,91,143,94,191,187,252,65,121,82,216,252,240,
    122,219,210,141,42,191,151,39,165,180,218,154,219,243,61,165,
    15,99,97,205,245,156,122,203,119,54,155,74,31,162,198,234,
    107,110,83,213,235,92,185,216,106,251,129,190,31,4,126,80,
    37,189,50,216,244,173,228,141,49,82,113,211,15,85,153,122,
    227,110,170,212,188,38,238,181,54,183,72,3,224,177,210,203,
    142,10,237,192,109,107,52,87,212,34,113,83,107,101,201,58,
    16,110,33,169,208,40,194,182,101,171,74,91,249,237,166,170,
    216,21,219,111,54,93,47,108,85,148,173,110,189,113,171,210,
    14,252,167,202,214,244,88,167,231,117,213,122,227,218,13,235,
    230,141,79,191,249,169,213,91,55,111,222,170,172,110,186,77,
    167,242,228,173,55,43,237,142,110,248,94,165,245,70,197,245,
    180,66,221,53,43,189,90,187,142,60,71,169,255,109,119,189,
    238,178,228,245,134,106,182,85,80,36,244,52,141,205,152,53,
    166,140,113,35,111,148,141,25,46,77,99,249,108,238,176,241,
    208,37,217,109,210,7,249,94,94,188,237,191,128,141,138,94,
    241,52,7,254,28,24,59,236,152,200,141,166,71,151,170,25,
    84,155,227,218,171,96,232,92,140,187,121,242,16,66,143,226,
    59,236,131,232,140,200,251,54,185,132,225,97,52,144,31,141,
    145,171,71,14,134,158,25,185,156,63,131,117,99,244,6,53,
    149,163,46,10,48,213,158,197,214,15,49,154,35,148,199,146,
    110,215,67,64,23,41,87,34,118,28,135,240,21,246,228,90,
    153,100,122,200,222,164,27,110,232,111,123,108,51,42,115,240,
    213,80,93,203,157,71,171,100,138,240,2,2,31,250,155,37,
    219,242,60,95,151,44,199,41,89,90,7,238,234,166,86,97,
    73,251,165,75,33,59,103,117,78,28,50,105,175,211,22,7,
    36,103,65,7,140,30,28,215,214,248,48,207,15,108,154,80,
    105,116,166,134,239,132,136,83,19,235,74,87,199,196,227,27,
    86,72,61,234,25,44,223,150,174,217,131,203,227,226,111,161,
    106,174,233,73,118,93,43,12,235,220,53,225,236,165,212,210,
    150,213,220,84,154,248,67,109,105,28,1,21,163,78,15,134,
    159,158,36,117,136,54,72,222,186,231,123,78,7,5,112,237,
    139,52,182,147,236,173,211,48,135,30,122,28,63,69,227,152,
    49,1,51,198,73,99,46,103,147,172,133,216,83,217,75,143,
    147,102,128,157,195,136,211,18,122,236,46,166,175,114,142,147,
    15,11,205,209,77,173,115,70,170,158,33,114,150,200,57,34,
    231,69,47,159,184,114,166,123,149,115,157,6,148,99,141,216,
    249,88,246,36,66,171,93,17,58,147,138,208,93,138,52,138,
    178,28,133,227,94,148,229,73,63,254,97,137,31,142,98,116,
    27,138,171,189,168,97,189,85,103,73,31,227,226,240,85,242,
    226,180,43,175,167,92,185,74,38,99,63,174,158,30,164,227,
    210,1,212,241,122,164,227,27,52,160,169,216,235,102,216,219,
    14,27,54,185,12,105,98,66,180,125,15,11,157,19,164,237,
    180,154,79,224,188,251,152,214,140,56,127,242,36,140,249,237,
    73,52,243,198,202,143,10,5,242,207,181,60,28,143,39,197,
    144,50,51,74,247,172,83,242,215,74,26,100,12,111,95,10,
    175,95,10,63,139,217,166,244,14,231,175,40,223,68,25,37,
    80,237,0,51,71,145,31,162,12,80,231,108,80,143,103,53,
    180,5,45,50,216,132,108,1,78,44,33,38,21,204,121,7,
    67,253,147,137,250,73,154,91,52,154,73,214,125,30,78,224,
    103,210,224,33,215,125,206,202,188,6,226,90,252,220,33,43,
    144,34,20,208,90,190,90,139,4,98,89,73,234,106,185,203,
    199,62,105,73,171,87,176,235,119,37,126,199,33,241,40,250,
    228,73,22,10,167,175,1,47,31,13,248,42,144,247,160,147,
    196,1,200,225,46,33,63,79,236,164,140,29,35,115,66,206,
    197,161,156,139,19,33,198,122,123,154,231,217,120,130,198,21,
    222,215,83,89,114,55,15,6,207,154,249,120,149,152,158,53,
    11,73,252,179,239,141,52,51,22,186,18,69,245,84,146,11,
    242,73,46,216,75,181,201,146,14,147,220,39,109,37,142,44,
    28,71,157,68,186,191,231,141,52,255,156,51,22,114,41,31,
    187,74,228,90,226,94,134,96,159,228,232,47,192,224,217,180,
    30,37,104,202,91,97,129,133,58,50,206,225,183,215,68,18,
    95,99,18,95,55,147,248,82,60,107,124,204,91,14,162,57,
    114,149,221,156,129,123,98,92,105,209,86,180,0,106,12,204,
    113,138,68,94,77,27,113,160,26,146,50,41,213,118,205,73,
    41,109,38,206,18,185,3,145,103,7,34,110,217,35,222,110,
    90,173,85,199,122,167,73,99,161,1,217,18,185,57,17,110,
    54,45,28,197,156,49,64,62,126,124,77,132,220,58,16,66,
    86,105,210,75,132,227,96,116,124,155,51,210,74,67,149,90,
    170,181,138,59,211,134,219,46,173,53,173,117,182,108,62,22,
    254,145,8,175,217,53,122,23,14,225,101,162,126,201,246,61,
    156,119,54,109,237,7,37,71,225,94,77,57,165,107,37,158,
    180,74,110,88,178,86,177,214,178,117,20,70,221,169,130,87,
    180,86,176,30,242,226,117,99,155,138,7,66,107,241,52,236,
    122,46,46,236,91,162,189,104,3,153,204,64,188,126,143,98,
    18,71,128,123,48,221,137,146,233,155,68,72,59,213,151,225,
    64,77,84,21,210,50,141,129,212,61,110,156,193,37,183,158,
    237,202,19,203,244,86,216,159,45,254,179,48,66,182,136,206,
    206,226,156,49,78,156,106,130,206,17,136,22,105,170,50,39,
    5,60,204,116,138,193,105,1,103,152,30,97,112,86,192,57,
    166,71,25,156,23,112,129,233,49,6,143,11,120,130,233,73,
    6,79,9,120,154,233,25,6,207,10,120,142,233,121,6,47,
    8,88,98,122,145,193,23,4,124,145,233,75,12,94,18,240,
    101,166,175,48,88,22,240,85,166,151,25,188,34,224,85,166,
    215,24,188,46,96,133,233,107,12,222,16,240,38,211,215,25,
    252,148,128,111,48,125,147,193,91,2,190,197,244,211,12,126,
    70,192,207,50,125,155,193,95,19,240,29,166,191,206,224,187,
    2,222,102,122,135,193,187,2,222,99,122,159,193,7,2,254,
    6,211,223,100,112,81,192,207,49,253,60,131,75,2,190,199,
    244,33,131,143,4,92,102,250,62,131,85,1,107,76,87,24,
    252,64,192,223,98,250,152,193,39,2,126,200,212,100,240,11,
    2,126,145,233,111,51,248,59,2,214,153,126,137,65,75,192,
    85,166,54,131,142,128,138,233,26,131,235,2,54,152,186,12,
    62,21,112,131,105,147,193,150,128,30,83,159,193,182,128,95,
    102,26,48,24,10,168,153,110,50,184,37,224,54,211,103,12,
    118,4,252,136,233,239,50,184,35,224,115,166,191,199,224,239,
    11,248,7,76,255,144,193,175,8,184,203,244,99,6,255,72,
    192,175,50,253,26,131,95,23,240,143,153,254,9,131,127,42,
    224,55,152,126,147,193,111,9,248,103,76,255,156,193,191,16,
    240,47,153,126,155,193,239,8,248,87,76,255,154,193,239,10,
    248,61,166,223,103,240,7,2,254,144,233,143,24,252,27,1,
    255,150,233,143,25,252,137,128,127,199,244,239,25,252,7,1,
    255,145,233,63,49,248,207,2,254,11,211,127,101,240,223,32,
    62,227,255,119,6,127,10,230,207,232,172,151,144,159,211,178,
    101,226,127,185,108,225,105,253,96,36,241,27,241,116,244,127,
    182,90,169,222,60,152,178,85,95,135,120,239,52,104,165,98,
    164,5,159,142,86,42,174,33,7,30,108,184,135,145,156,124,
    142,123,34,99,170,171,219,129,178,180,138,140,124,230,160,40,
    130,215,67,209,200,54,19,83,139,180,99,34,241,173,68,226,
    93,222,83,118,22,82,167,17,108,121,227,177,55,75,39,22,
    59,172,148,122,46,58,180,128,68,55,133,68,55,11,72,60,
    181,93,239,213,79,116,42,65,195,177,218,109,229,57,123,39,
    14,92,115,32,180,197,11,174,159,65,178,165,155,50,242,176,
    128,159,254,128,39,121,83,226,179,209,199,146,24,63,48,230,
    231,56,248,15,49,124,249,23,144,94,118,86,201,236,209,66,
    51,89,99,86,63,147,24,178,148,229,228,129,162,115,227,199,
    174,163,27,116,24,54,156,9,55,153,252,93,72,10,211,47,
    101,189,20,182,244,82,237,253,149,70,160,194,134,223,116,184,
    245,145,24,169,135,35,36,98,55,174,95,200,122,217,113,209,
    6,218,110,236,73,48,2,27,245,64,73,161,11,213,151,178,
    94,116,213,246,138,95,101,89,239,169,166,213,225,46,70,227,
    164,94,200,24,189,21,217,58,14,191,188,105,133,141,33,134,
    72,51,137,33,82,88,246,192,34,75,225,16,30,221,25,34,
    66,31,167,136,208,91,161,207,103,189,94,123,255,190,167,3,
    87,133,220,195,16,22,106,154,78,49,19,36,219,112,222,102,
    11,59,77,183,59,2,155,216,183,11,229,131,146,190,23,215,
    84,151,243,12,227,161,150,41,149,236,65,217,134,90,181,236,
    141,187,126,171,230,126,164,6,91,51,205,36,214,76,97,217,
    54,178,253,86,203,213,43,254,226,253,199,67,172,217,199,41,
    214,236,173,224,19,184,129,175,223,83,182,239,164,156,127,100,
    102,234,110,62,213,93,170,46,187,17,135,25,250,195,109,100,
    102,233,49,163,78,191,50,208,178,253,34,142,202,75,253,29,
    21,111,232,22,48,211,145,220,48,220,84,67,156,45,197,35,
    206,182,7,101,59,63,102,201,187,13,101,111,44,249,150,179,
    79,140,116,179,73,140,116,161,251,27,119,36,187,100,49,247,
    122,66,218,46,153,74,176,45,187,161,150,253,64,135,131,21,
    149,226,17,69,237,65,217,99,147,52,54,146,75,103,49,139,
    32,25,117,250,197,1,115,219,3,114,142,101,191,233,218,81,
    103,163,240,81,63,51,209,20,152,130,245,149,204,87,181,31,
    112,254,168,219,77,101,5,245,54,50,248,209,116,251,203,240,
    83,151,244,77,106,118,117,118,134,193,252,186,220,232,132,15,
    154,190,165,171,106,61,28,156,139,250,56,37,23,245,86,100,
    171,39,230,90,244,246,186,25,133,79,212,216,13,235,203,3,
    44,240,112,179,197,218,118,189,117,90,117,72,48,253,18,236,
    212,225,177,200,110,253,181,250,108,86,67,219,171,247,84,59,
    78,8,251,50,80,219,180,89,141,159,179,157,150,83,197,138,
    127,255,153,178,55,245,48,15,207,98,22,15,207,168,27,184,
    122,195,57,118,180,101,94,23,99,106,153,151,198,7,41,97,
    47,109,238,203,176,167,165,40,97,102,166,114,201,67,108,160,
    33,105,63,131,87,210,126,127,85,182,243,71,211,67,96,181,
    151,112,215,230,217,251,76,217,125,156,18,38,189,21,250,76,
    230,235,155,203,190,223,228,230,247,171,167,70,105,223,22,61,
    102,139,45,25,110,20,21,101,240,138,138,250,171,178,5,199,
    89,8,189,154,39,162,90,195,93,211,131,85,212,199,41,42,
    234,173,200,94,115,69,75,131,33,203,236,52,147,44,204,82,
    88,246,75,186,199,192,67,153,164,229,20,54,96,213,223,210,
    139,239,167,102,144,161,76,201,214,96,15,211,231,50,243,165,
    82,78,184,82,123,196,205,238,207,65,109,210,119,31,2,232,
    139,131,131,60,53,214,225,92,212,240,84,146,7,226,209,14,
    202,32,119,57,228,82,237,143,196,152,74,53,105,60,59,147,
    208,166,193,95,13,7,167,26,97,144,84,19,63,239,179,43,
    236,93,111,140,198,217,181,127,76,175,52,6,233,20,35,96,
    4,205,239,113,165,52,159,128,217,206,21,101,186,33,81,147,
    102,18,15,76,97,217,254,85,171,45,174,36,187,164,253,57,
    196,3,5,200,94,2,172,249,193,182,21,56,233,205,215,40,
    124,178,84,232,134,179,55,177,75,195,247,185,75,125,251,220,
    4,201,54,12,58,209,98,87,179,195,185,196,124,105,48,91,
    133,150,173,221,45,87,119,6,43,57,225,16,37,11,144,205,
    190,244,160,54,196,106,9,135,52,40,192,62,206,31,197,230,
    40,97,146,230,236,10,147,84,197,254,71,28,195,183,207,125,
    156,189,135,33,201,246,57,51,7,241,112,122,102,207,145,24,
    37,89,245,224,217,83,175,236,116,71,153,166,51,120,101,154,
    238,175,26,184,77,89,236,57,210,27,133,47,181,157,73,193,
    124,56,203,71,239,142,106,42,173,250,78,152,89,219,241,101,
    67,7,125,59,240,59,245,122,116,55,12,159,155,245,250,1,
    250,2,253,45,114,12,26,195,51,136,190,64,31,231,91,171,
    255,127,191,197,66,209,224,251,19,61,255,67,16,169,135,190,
    48,137,238,91,117,248,206,40,84,201,197,162,115,97,190,230,
    46,215,20,248,155,3,202,87,15,209,199,163,187,243,148,137,
    170,116,162,80,37,255,229,163,101,94,62,70,247,243,248,142,
    91,116,31,209,83,219,124,185,131,239,114,84,233,222,42,231,
    167,72,93,15,62,224,197,38,29,57,60,248,224,158,10,237,
    250,150,162,155,33,93,44,132,51,203,163,118,54,75,132,51,
    160,48,239,225,243,93,234,145,3,38,226,168,185,173,232,58,
    55,223,133,118,2,11,205,198,87,224,209,92,86,147,18,208,
    116,194,123,199,10,21,218,47,213,62,90,124,101,233,14,223,
    80,78,128,101,139,110,137,174,54,213,99,171,185,161,210,163,
    169,117,66,173,90,220,57,143,230,61,213,242,131,206,123,24,
    74,188,11,188,29,95,112,137,96,17,102,33,121,189,187,62,
    37,3,2,177,12,243,9,118,183,233,219,27,202,137,113,138,
    140,219,142,19,84,45,111,93,73,203,221,130,145,28,71,211,
    114,44,249,182,213,188,221,118,237,212,16,144,209,181,151,93,
    92,94,108,185,182,74,13,97,15,163,192,93,14,124,91,133,
    97,127,71,113,5,139,27,183,24,88,158,221,88,14,20,221,
    125,143,121,177,243,197,218,237,126,107,70,56,11,19,1,139,
    94,168,113,151,99,163,150,41,204,99,251,240,237,148,158,239,
    232,56,43,4,106,221,69,11,68,157,196,204,81,234,224,120,
    204,158,153,210,47,30,156,4,18,93,57,139,174,240,190,195,
    55,118,219,72,102,233,242,251,145,162,49,145,155,50,242,248,
    59,105,204,24,99,198,212,116,49,95,28,47,142,229,49,201,
    16,50,111,28,206,23,39,167,140,95,245,247,20,166,142,201,
    220,169,119,139,198,255,0,177,195,153,133,
};

EmbeddedPython embedded_m5_internal_param_DerivO3CPU(
    "m5/internal/param_DerivO3CPU.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/build/X86/python/m5/internal/param_DerivO3CPU.py",
    "m5.internal.param_DerivO3CPU",
    data_m5_internal_param_DerivO3CPU,
    3835,
    14146);

} // anonymous namespace
