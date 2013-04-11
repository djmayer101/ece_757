#include "sim/init.hh"

namespace {

const uint8_t data_m5_util_code_formatter[] = {
    120,156,205,26,77,111,220,198,245,13,185,223,218,213,74,150,
    180,254,140,205,56,86,189,74,99,203,118,19,219,73,28,199,
    118,108,167,73,28,37,161,18,187,145,173,18,212,146,146,41,
    83,228,102,201,181,229,72,139,182,81,208,56,64,218,2,189,
    20,232,169,5,90,160,64,129,2,5,122,234,45,231,94,139,
    222,250,91,218,247,222,204,112,119,101,39,109,47,93,239,199,
    112,56,51,124,51,239,99,222,215,176,5,234,83,197,255,37,
    11,32,249,90,0,120,248,19,112,15,96,41,171,11,88,18,
    186,110,192,146,161,235,38,44,153,186,158,131,165,28,120,6,
    248,121,88,197,193,38,124,14,176,3,240,241,82,1,188,28,
    248,69,110,205,103,173,37,240,10,122,108,49,107,45,83,235,
    26,78,87,1,127,12,188,18,172,27,16,207,9,65,115,148,
    225,94,25,194,50,224,32,225,151,105,252,82,21,60,28,88,
    99,32,99,25,144,113,240,170,176,84,7,31,43,53,46,241,
    87,199,62,129,144,101,73,83,76,128,130,50,9,254,36,120,
    19,176,35,16,48,130,156,204,106,123,178,218,84,86,155,206,
    106,51,186,22,236,33,56,98,211,1,127,10,188,6,53,95,
    93,254,0,150,166,97,104,152,183,55,171,237,3,111,63,236,
    24,242,230,0,221,120,7,97,199,148,247,135,192,123,38,235,
    60,172,111,62,185,46,110,209,92,51,60,23,117,29,1,207,
    98,196,228,115,111,70,8,28,57,177,216,124,22,217,25,252,
    11,63,11,105,1,171,97,28,223,235,182,91,154,217,200,98,
    184,66,204,126,14,43,62,40,214,34,241,136,175,130,43,38,
    49,146,42,57,176,23,155,38,142,107,81,145,199,191,129,255,
    247,232,233,75,88,217,54,96,27,192,193,138,224,10,151,129,
    128,64,182,155,176,109,114,37,7,219,57,174,228,225,46,112,
    165,64,115,46,54,105,45,11,205,34,150,41,1,95,237,184,
    27,126,90,166,90,220,217,112,211,212,239,112,187,227,5,173,
    52,205,97,45,171,184,157,181,132,177,187,247,32,171,134,113,
    203,13,147,38,61,193,99,18,63,92,181,105,193,54,205,99,
    83,187,77,227,154,160,139,100,29,139,249,213,32,244,147,182,
    219,242,231,219,126,220,14,253,249,214,124,43,14,195,32,74,
    54,230,253,150,127,238,165,115,243,237,78,188,238,183,82,186,
    117,232,126,205,223,120,233,196,105,247,204,233,151,207,190,184,
    114,238,204,153,115,243,73,167,53,223,126,152,222,141,163,249,
    141,151,230,187,105,16,34,16,207,119,50,76,78,98,111,137,
    144,113,130,40,72,29,231,40,205,95,101,142,148,241,91,231,
    146,233,172,255,111,16,157,39,51,58,7,76,231,11,3,132,
    99,180,136,122,204,35,187,164,17,15,82,127,35,165,166,251,
    110,56,58,100,199,24,217,196,79,105,57,142,243,60,45,193,
    96,124,91,134,146,164,130,198,242,13,161,133,8,177,92,47,
    64,92,5,145,161,188,127,81,108,107,209,26,232,19,253,62,
    148,91,210,20,227,178,195,128,192,132,32,7,178,203,224,174,
    177,172,43,79,237,88,45,16,244,248,40,104,216,216,85,100,
    240,245,108,104,113,120,246,210,224,236,37,221,39,65,149,119,
    129,170,236,2,85,233,131,66,194,4,85,13,74,222,200,190,
    135,7,33,173,81,29,213,68,79,66,26,151,93,183,162,41,
    200,165,117,88,175,64,92,4,129,159,8,85,194,15,210,9,
    82,180,56,162,241,153,33,55,20,113,127,65,137,25,113,218,
    113,212,13,50,24,111,146,41,34,120,220,13,61,43,138,83,
    107,53,136,60,235,248,108,114,188,57,169,37,137,55,8,239,
    23,222,82,171,14,241,149,89,217,138,25,98,68,91,180,196,
    93,4,51,138,121,135,233,22,222,129,54,173,34,37,104,107,
    97,188,130,13,114,75,59,250,78,10,198,74,55,8,211,32,
    202,86,72,91,27,111,72,108,131,40,229,221,154,86,176,184,
    233,134,93,255,90,167,19,119,248,246,173,200,243,55,249,182,
    105,104,161,183,43,35,221,213,18,159,53,45,232,39,104,9,
    47,176,160,79,136,170,65,255,154,24,199,255,152,97,137,58,
    223,235,171,41,170,184,241,199,69,94,72,173,37,41,65,36,
    70,74,84,248,102,35,246,186,196,71,155,104,104,147,190,176,
    15,12,97,59,10,148,109,154,147,204,76,66,66,82,16,229,
    82,217,76,167,88,72,6,71,58,40,42,238,227,134,103,239,
    160,225,25,180,58,104,108,12,214,219,88,86,44,252,52,95,
    127,133,175,150,53,219,244,252,48,216,152,75,154,175,191,127,
    193,79,90,110,219,247,46,102,141,115,214,208,103,219,122,206,
    82,99,44,30,129,140,233,40,64,63,36,0,40,247,126,148,
    94,188,109,45,63,63,55,4,57,140,35,31,193,6,212,141,
    96,143,49,40,106,180,184,41,88,13,50,64,67,207,113,239,
    192,131,150,245,248,138,190,25,194,108,51,92,145,112,86,156,
    221,144,102,155,29,236,147,16,86,58,200,91,239,63,44,165,
    29,39,248,56,150,79,88,134,94,10,246,6,105,16,71,110,
    104,181,93,54,186,223,190,168,65,152,122,65,26,150,90,84,
    31,228,19,0,121,10,146,143,6,233,226,201,231,95,39,32,
    94,6,69,1,242,226,238,74,232,107,120,254,102,187,227,39,
    9,66,124,34,189,35,132,20,120,23,159,136,33,126,144,218,
    97,120,130,4,113,80,4,24,104,194,240,230,184,108,145,166,
    26,83,174,13,27,34,146,210,20,127,172,126,209,239,34,87,
    70,176,1,54,217,209,66,89,197,26,41,239,154,212,237,38,
    244,114,16,253,86,222,228,224,142,1,189,60,244,10,172,189,
    243,112,39,7,189,34,244,74,208,43,67,175,66,96,241,129,
    187,69,82,174,100,93,216,142,236,176,145,58,75,55,101,210,
    231,92,171,144,215,124,86,13,203,243,152,124,118,95,224,251,
    66,118,143,191,18,236,221,97,87,90,183,149,97,187,34,219,
    74,112,182,129,107,164,246,49,114,196,168,82,229,178,6,87,
    232,50,14,87,118,180,199,198,86,164,204,86,132,20,120,155,
    247,113,196,94,24,147,145,107,44,128,172,169,145,235,41,109,
    217,112,133,47,157,21,110,69,126,243,21,121,220,172,107,231,
    46,233,182,253,142,253,12,41,48,86,101,135,181,141,145,12,
    71,203,135,83,176,8,56,170,133,33,250,60,70,238,102,251,
    8,61,104,81,241,172,54,49,173,120,163,141,106,143,235,55,
    175,217,87,222,91,188,198,79,92,125,239,195,203,55,110,176,
    229,121,247,163,27,31,190,117,227,173,133,107,77,98,53,175,
    172,133,102,136,120,207,214,140,86,183,226,38,126,194,93,94,
    75,161,230,166,54,249,104,246,115,250,161,112,229,180,186,158,
    145,232,101,215,211,163,211,196,132,224,18,205,123,136,117,236,
    33,81,19,53,179,46,102,208,153,156,18,21,252,78,224,119,
    90,236,51,216,55,176,15,82,113,72,211,159,159,30,177,41,
    33,137,120,151,230,165,245,21,170,5,145,142,63,102,72,50,
    27,98,104,27,242,247,204,134,160,177,144,81,40,197,159,24,
    215,229,105,55,81,212,137,209,105,145,118,17,198,154,24,233,
    81,72,137,229,24,151,85,21,138,46,213,104,27,81,0,138,
    15,142,115,189,196,245,58,197,155,52,96,130,66,204,207,57,
    74,148,33,230,210,30,10,47,169,50,69,225,37,85,166,41,
    194,164,202,12,133,99,84,105,80,60,73,149,189,20,78,82,
    101,31,69,147,84,217,79,193,36,85,14,80,44,73,149,131,
    20,35,82,229,16,25,192,6,176,246,1,56,150,16,115,110,
    59,151,79,124,186,124,231,193,243,108,105,111,159,58,241,242,
    242,119,217,139,222,234,49,193,182,182,122,189,22,13,39,65,
    164,6,14,206,126,141,149,53,80,193,153,10,185,216,75,166,
    138,65,4,82,241,153,65,58,11,41,133,123,128,244,157,32,
    95,86,233,130,130,238,205,13,244,22,117,111,81,247,230,7,
    122,75,186,183,76,74,51,158,148,74,177,162,92,90,193,1,
    42,233,23,66,101,33,32,126,6,44,148,228,57,176,247,153,
    146,127,179,26,108,58,145,255,128,188,203,68,238,88,25,3,
    186,169,107,19,150,172,41,28,105,194,157,208,191,239,135,44,
    49,186,133,165,54,81,218,169,205,187,60,125,136,186,35,155,
    196,126,37,3,50,56,149,114,190,208,129,13,29,167,31,80,
    61,5,97,35,239,210,135,52,239,30,222,227,101,245,61,44,
    14,27,135,141,162,8,136,255,89,76,149,211,166,140,220,68,
    164,127,46,0,200,194,165,233,115,134,3,131,177,55,251,208,
    23,168,120,141,176,203,92,106,166,121,43,238,70,233,232,252,
    106,34,186,100,234,79,225,241,216,49,195,243,188,196,115,8,
    205,245,60,180,49,80,66,19,242,153,96,41,28,166,194,249,
    93,84,48,135,168,192,226,116,57,73,252,14,57,52,187,99,
    141,43,163,20,5,166,137,231,19,77,190,212,58,19,80,16,
    152,42,166,162,12,83,165,145,81,165,103,232,252,12,103,18,
    134,146,7,151,96,40,121,64,208,147,212,77,187,114,55,160,
    7,118,63,136,187,201,232,208,53,165,62,248,25,168,80,67,
    10,63,43,60,227,27,176,21,202,121,147,105,169,33,57,191,
    164,5,251,58,134,161,254,0,79,223,28,41,79,105,69,81,
    140,104,254,114,23,154,160,62,25,154,164,180,214,216,65,117,
    196,99,187,152,49,121,21,70,109,208,165,230,8,125,183,243,
    171,129,93,43,212,142,37,134,190,73,168,188,13,218,209,150,
    249,26,228,213,87,156,73,70,19,130,18,187,121,24,164,67,
    125,117,121,10,122,210,82,229,217,9,199,253,252,201,44,220,
    162,134,2,231,66,153,14,52,205,2,219,205,7,50,159,152,
    99,201,65,199,144,122,98,233,237,161,75,119,151,43,235,113,
    16,49,169,120,177,15,58,24,28,168,101,199,40,23,57,24,
    212,253,12,116,85,102,31,209,4,141,206,10,124,128,211,145,
    97,79,42,76,210,131,162,130,145,247,100,127,51,100,41,195,
    89,73,218,64,39,163,20,81,89,245,173,105,31,128,247,134,
    164,26,104,37,160,246,127,39,136,214,236,247,51,105,234,11,
    215,135,35,149,43,98,171,227,224,242,28,231,55,253,141,50,
    35,170,125,155,144,109,148,177,76,31,112,254,108,80,229,153,
    195,56,141,52,117,196,169,156,223,15,108,147,255,61,253,107,
    194,160,6,103,116,88,148,239,83,218,108,116,136,145,35,247,
    7,120,220,106,103,28,26,31,228,208,107,79,196,234,41,97,
    146,202,239,81,248,203,249,189,63,126,27,90,164,161,7,19,
    217,79,47,86,85,198,170,21,71,169,139,208,29,231,79,223,
    134,214,228,32,183,118,180,31,223,71,141,53,135,219,110,251,
    145,247,212,232,11,117,216,226,122,158,227,252,249,9,200,101,
    123,236,162,212,151,219,236,57,160,166,140,247,14,156,35,108,
    179,129,226,240,101,90,39,121,40,226,97,50,236,162,4,17,
    129,211,182,65,130,248,164,110,212,242,237,243,90,143,202,60,
    198,102,138,36,146,170,76,146,139,93,28,84,106,79,11,217,
    236,219,56,221,95,250,250,117,66,236,53,90,218,223,206,124,
    238,175,51,121,104,207,232,211,24,153,42,211,36,81,141,213,
    246,164,238,71,51,180,95,158,198,144,125,239,49,101,77,178,
    224,87,151,99,54,241,38,196,47,107,18,199,7,7,192,122,
    166,114,6,166,117,24,217,159,209,204,66,75,172,182,75,120,
    49,160,26,79,15,62,109,100,67,144,113,56,247,39,111,195,
    173,254,105,9,159,148,38,196,192,10,155,122,139,217,200,190,
    34,243,141,9,194,92,77,218,168,1,56,86,148,177,194,91,
    196,162,220,16,219,82,74,119,209,249,94,224,134,58,178,100,
    215,129,42,163,227,41,250,194,240,87,80,49,33,112,82,40,
    111,28,22,53,116,32,138,120,119,80,76,27,117,252,179,43,
    81,80,255,58,241,249,23,88,121,36,50,38,107,62,102,76,
    126,196,185,203,253,95,242,40,100,211,145,47,113,19,25,138,
    175,200,176,158,78,45,32,115,30,113,30,245,231,6,124,105,
    192,23,0,95,8,248,194,128,85,147,18,12,24,223,169,12,
    101,145,79,214,114,240,136,179,175,61,126,54,40,171,20,168,
    220,107,100,221,22,36,195,100,14,129,195,95,42,72,81,211,
    214,154,162,165,31,49,180,136,122,217,137,154,128,248,134,198,
    68,138,5,174,28,151,253,136,247,249,254,85,1,141,30,47,
    142,222,40,144,203,50,41,197,17,112,214,119,155,211,193,169,
    169,118,62,254,22,53,44,206,200,182,107,25,236,98,127,70,
    92,243,122,25,226,9,92,253,208,68,217,179,165,93,207,150,
    249,89,62,51,87,207,190,199,146,139,247,89,7,146,234,17,
    175,127,29,183,202,1,236,46,82,158,10,59,26,168,246,144,
    94,59,28,248,114,194,197,164,145,217,227,195,83,143,49,196,
    60,145,87,77,117,24,97,85,232,254,46,208,98,119,76,202,
    101,211,254,43,192,208,147,85,78,65,203,103,242,56,75,173,
    79,139,113,221,85,130,184,33,151,86,135,221,203,162,177,99,
    106,108,143,83,216,222,4,31,212,18,157,38,41,99,78,101,
    25,162,155,64,66,134,253,86,70,251,94,133,238,211,170,74,
    169,201,124,218,118,5,174,238,176,250,222,135,15,35,125,176,
    129,198,150,41,77,236,77,115,66,188,4,171,6,52,176,245,
    51,21,61,205,144,40,201,253,25,71,190,253,134,182,18,179,
    201,144,87,253,61,150,39,172,108,238,35,145,186,186,60,65,
    188,69,17,189,73,231,185,55,197,39,69,165,80,164,25,0,
    109,230,89,183,175,249,145,237,81,11,187,0,111,140,210,220,
    235,156,25,169,176,127,210,26,74,172,14,138,168,6,242,194,
    254,8,84,114,157,205,147,58,137,146,137,118,206,144,211,41,
    80,66,135,155,239,63,225,244,200,122,110,86,157,41,199,221,
    200,179,130,200,210,71,7,68,93,58,247,97,168,234,84,206,
    126,89,79,163,14,114,248,101,148,143,162,142,223,138,215,162,
    224,83,31,97,185,116,116,179,214,137,187,237,1,104,3,27,
    126,208,71,89,180,20,50,219,108,198,247,46,14,132,192,204,
    8,122,98,147,203,135,163,117,72,46,132,238,198,138,231,94,
    44,9,58,108,210,138,75,11,90,50,44,104,203,147,156,206,
    208,78,23,10,90,97,72,208,132,150,177,208,143,36,158,84,
    156,60,197,136,126,58,50,68,57,113,125,1,229,158,142,219,
    36,166,180,174,50,36,223,1,58,192,103,142,91,242,9,75,
    134,155,175,88,36,148,214,172,247,130,133,107,194,107,179,166,
    229,142,69,64,134,163,43,160,2,251,15,59,93,105,86,23,
    104,219,210,121,178,221,166,98,31,21,236,113,241,233,198,186,
    134,129,190,88,39,101,7,172,227,123,221,150,223,79,43,227,
    18,90,119,229,145,146,79,197,26,232,195,165,178,146,91,135,
    176,80,207,38,221,48,101,226,6,42,63,26,162,200,23,148,
    121,199,106,94,85,147,126,56,45,209,236,103,18,194,190,30,
    24,69,0,141,254,254,125,191,147,254,131,166,191,206,187,191,
    110,20,69,93,76,26,245,220,51,230,17,81,19,19,92,86,
    197,148,48,209,57,152,16,13,179,142,247,123,68,213,108,136,
    188,217,48,10,98,194,160,150,130,168,24,83,194,18,85,108,
    105,146,123,52,224,45,201,157,157,180,113,209,172,120,90,221,
    78,7,149,137,124,191,75,190,87,178,226,182,238,241,107,4,
    125,126,73,87,184,187,194,238,138,244,194,134,51,240,242,61,
    174,159,104,82,122,82,194,57,248,253,81,54,240,199,255,127,
    202,218,151,113,186,191,209,188,211,82,161,178,127,85,65,2,
    213,141,25,49,115,126,70,52,249,220,179,127,248,70,183,242,
    8,66,190,35,17,186,9,134,96,187,206,55,237,227,84,16,
    146,54,229,104,118,157,96,200,83,84,146,35,251,26,21,223,
    167,130,178,106,246,59,84,80,182,200,190,5,234,117,17,249,
    226,200,199,84,208,97,161,125,71,179,138,105,205,235,31,241,
    49,32,73,193,6,205,123,6,232,141,146,2,74,149,250,170,
    90,185,86,53,171,185,114,30,191,102,185,192,165,254,22,202,
    147,42,218,219,112,233,141,34,185,197,206,107,145,186,30,199,
    143,191,132,66,84,249,166,183,31,213,123,40,67,105,230,119,
    172,255,54,12,238,182,61,55,29,204,46,143,254,240,104,159,
    214,193,79,138,237,251,118,115,255,99,30,76,255,157,66,132,
    215,25,117,10,102,13,183,74,74,249,191,3,125,124,118,31,
    107,243,174,248,106,244,242,76,199,51,123,133,62,214,22,101,
    131,51,94,233,221,32,177,240,231,90,169,159,164,54,9,188,
    29,1,135,56,56,148,176,168,108,241,155,41,52,208,193,159,
    235,208,192,230,220,171,149,94,133,35,114,234,60,246,48,33,
    207,245,152,126,199,239,149,99,250,5,191,202,86,50,71,61,
    91,91,199,95,176,142,159,164,60,119,147,146,11,155,115,100,
    111,173,77,114,165,54,59,110,180,230,55,95,156,155,235,201,
    51,228,99,91,155,61,166,230,177,205,128,173,37,215,3,121,
    57,197,220,255,212,239,196,9,245,29,59,109,97,19,237,42,
    180,188,234,233,83,189,132,180,210,93,223,122,128,74,158,229,
    137,26,221,196,91,77,72,175,51,66,184,164,240,246,169,101,
    250,29,221,60,74,215,147,15,123,61,196,138,189,57,62,246,
    182,9,41,251,51,42,22,168,32,76,236,155,122,91,197,43,
    196,22,105,50,94,7,165,67,229,38,151,153,97,62,184,149,
    146,176,72,5,11,6,177,65,146,249,199,154,214,172,51,25,
    164,164,132,189,5,74,135,142,248,224,132,253,67,249,190,223,
    69,66,35,33,149,94,21,234,107,52,94,104,88,141,223,149,
    13,52,209,40,78,141,66,65,60,107,148,133,153,163,8,222,
    228,56,94,126,41,170,231,43,142,171,137,73,180,66,166,89,
    51,254,13,238,92,14,27,
};

EmbeddedPython embedded_m5_util_code_formatter(
    "m5/util/code_formatter.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/src/python/m5/util/code_formatter.py",
    "m5.util.code_formatter",
    data_m5_util_code_formatter,
    4007,
    12269);

} // anonymous namespace
