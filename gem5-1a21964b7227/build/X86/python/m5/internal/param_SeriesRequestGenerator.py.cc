#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_SeriesRequestGenerator[] = {
    120,156,205,89,91,115,219,198,21,62,11,144,148,72,137,20,
    117,177,46,182,28,163,23,119,216,198,54,107,53,182,210,214,
    227,137,155,100,58,157,105,148,12,212,25,59,72,103,80,8,
    88,81,144,64,128,5,86,86,152,145,94,34,79,219,135,254,
    149,190,245,185,127,173,61,231,44,22,162,108,203,74,218,62,
    80,18,118,22,139,197,193,185,124,231,59,187,171,16,202,159,
    85,188,62,114,0,138,127,10,128,8,255,4,28,1,36,2,
    60,1,66,10,136,150,225,176,14,217,6,136,168,14,175,0,
    60,11,164,5,231,216,177,225,43,11,210,54,62,192,183,26,
    112,100,243,144,128,113,11,100,13,188,58,60,79,151,161,38,
    27,112,216,130,108,6,4,254,164,22,136,23,209,12,68,179,
    240,10,191,128,157,38,203,156,133,168,197,157,38,68,115,220,
    105,193,184,11,114,14,188,121,192,249,94,27,133,221,67,97,
    29,22,230,176,176,8,31,173,64,212,166,249,168,207,151,52,
    181,70,83,245,87,58,44,103,1,74,237,186,224,117,77,127,
    17,188,69,211,95,2,111,201,244,151,193,91,54,253,21,240,
    86,76,255,6,120,55,76,127,21,188,85,211,95,3,111,205,
    244,215,193,91,55,253,13,240,54,76,255,38,120,55,33,90,
    0,217,133,248,22,236,163,67,187,149,194,155,32,109,136,111,
    131,119,27,36,254,109,194,57,250,60,90,228,185,239,241,220,
    165,106,238,29,158,235,128,231,128,196,191,59,122,110,3,118,
    123,55,48,130,241,191,241,167,135,17,4,53,143,205,75,153,
    23,113,150,250,113,186,159,197,22,61,111,80,67,241,14,169,
    153,193,171,141,215,199,20,248,127,0,71,61,178,202,192,159,
    1,10,22,164,255,145,5,103,220,57,179,96,220,131,83,1,
    113,13,34,27,78,241,51,117,82,96,32,224,220,130,63,218,
    52,225,12,219,26,134,201,129,154,210,49,95,209,97,210,162,
    102,224,172,14,167,117,216,21,47,78,45,26,57,108,66,214,
    7,241,205,38,203,157,101,185,22,156,98,91,131,243,26,156,
    53,224,57,206,194,161,184,73,30,192,215,208,88,194,218,110,
    175,134,26,239,76,152,76,230,68,113,158,6,67,169,110,99,
    223,31,5,121,48,244,119,101,30,203,194,149,127,62,150,133,
    250,173,76,101,30,168,44,239,181,204,43,89,241,96,20,168,
    3,151,101,216,228,160,225,72,177,236,44,149,106,14,59,251,
    113,26,249,195,44,58,78,164,154,37,193,254,126,156,72,223,
    231,135,191,27,142,178,92,125,154,231,89,238,146,143,121,48,
    201,130,234,141,58,185,59,201,10,217,163,175,241,103,92,18,
    175,104,246,254,136,37,146,2,172,55,189,28,201,34,204,227,
    145,194,208,105,137,52,155,164,245,40,104,220,20,223,98,211,
    39,45,138,81,16,202,254,72,102,163,68,246,195,126,152,37,
    73,156,22,195,190,12,229,246,163,237,254,40,207,14,101,168,
    232,214,167,251,129,28,62,186,255,48,216,122,248,203,199,31,
    236,109,111,109,109,247,247,142,227,36,234,191,248,240,113,127,
    52,86,7,89,218,31,62,234,199,169,146,232,199,164,255,46,
    15,62,192,249,75,164,203,73,60,240,99,246,130,127,32,147,
    145,204,155,52,122,147,244,20,93,49,47,26,194,22,61,209,
    225,94,27,251,155,214,156,216,137,201,15,33,249,134,48,105,
    27,20,254,11,56,216,136,150,67,11,178,69,16,167,12,88,
    156,141,144,64,168,237,10,122,106,241,211,123,32,148,85,142,
    199,54,33,135,70,151,240,29,198,38,130,20,231,62,33,168,
    136,20,179,132,240,85,167,20,208,192,67,196,106,40,102,29,
    124,86,167,55,72,148,69,159,168,193,252,168,139,210,103,121,
    212,162,81,214,101,82,110,138,3,170,73,92,131,99,171,168,
    194,183,140,240,221,30,217,180,195,200,82,7,113,145,157,164,
    28,63,234,115,82,238,162,187,190,24,127,190,71,97,41,238,
    224,192,151,217,177,19,6,105,154,41,39,136,34,39,80,42,
    143,247,142,149,44,28,149,57,119,11,6,170,187,104,192,89,
    201,27,143,12,24,9,56,8,70,125,19,197,161,194,155,101,
    190,225,208,20,82,33,176,14,178,168,192,113,18,49,144,202,
    173,27,244,31,4,5,125,81,117,176,255,204,124,154,209,220,
    107,24,236,21,50,217,87,45,134,113,80,20,62,127,154,198,
    25,177,36,233,101,144,28,75,69,243,11,21,40,212,128,186,
    250,163,211,135,217,117,114,141,241,12,217,238,167,89,26,141,
    209,152,56,252,1,233,185,206,200,109,195,34,162,117,21,175,
    166,184,33,102,160,35,214,197,162,21,146,221,181,18,181,140,
    88,170,156,10,24,40,162,164,46,68,239,57,82,92,207,98,
    130,98,7,112,214,147,116,102,45,247,22,53,155,212,16,81,
    185,239,25,31,77,149,163,218,175,59,234,1,41,103,177,119,
    66,187,244,67,149,185,238,165,204,237,76,100,238,57,101,32,
    101,159,69,105,122,145,125,54,249,42,155,51,121,197,217,141,
    112,162,124,187,200,38,246,161,219,37,223,52,76,34,184,132,
    238,73,136,15,38,32,238,82,248,24,223,238,205,171,252,237,
    76,185,191,7,218,223,15,73,185,249,18,141,29,70,225,156,
    8,9,74,228,149,25,227,249,79,176,51,94,35,207,79,186,
    124,13,107,246,115,90,151,97,237,229,2,142,28,248,66,87,
    237,50,16,186,83,35,220,238,219,176,90,22,212,130,216,27,
    45,253,122,236,100,251,142,2,163,195,147,187,197,131,187,197,
    175,145,145,156,167,204,113,154,147,52,235,228,114,148,35,187,
    52,249,70,179,132,207,140,225,151,85,16,227,66,11,20,14,
    39,71,131,201,167,64,226,65,94,156,190,80,180,170,80,144,
    101,219,164,89,139,227,96,195,26,94,45,193,234,251,25,179,
    56,175,165,248,41,94,191,161,136,144,83,36,208,218,217,221,
    213,198,177,221,228,1,183,119,9,123,211,100,181,251,62,170,
    241,145,201,241,6,84,72,163,203,38,187,40,229,254,10,188,
    36,21,240,23,32,84,33,120,202,36,101,74,48,180,176,76,
    211,201,49,167,226,173,197,220,42,211,221,42,137,19,249,96,
    212,230,26,93,22,119,92,53,254,109,130,85,207,109,16,92,
    113,237,114,229,57,89,113,107,21,71,48,38,191,83,85,173,
    93,34,19,119,163,226,11,187,226,139,11,106,174,150,134,72,
    132,211,20,49,206,62,212,201,39,243,62,189,64,41,213,174,
    219,98,197,154,192,222,61,106,238,87,176,19,102,108,90,44,
    185,3,87,87,101,95,147,59,241,92,81,99,3,23,26,138,
    234,238,219,197,85,249,88,55,249,184,85,229,163,228,234,243,
    138,183,58,212,90,4,167,115,75,224,158,21,87,114,180,85,
    172,129,172,131,215,160,204,229,149,187,40,19,91,24,186,37,
    154,190,84,219,38,188,92,1,74,67,134,154,175,167,46,207,
    25,53,79,146,96,184,23,5,79,61,210,139,148,11,77,166,
    91,198,208,238,164,161,148,163,226,10,91,249,246,231,198,224,
    151,83,103,176,75,133,180,50,148,19,57,202,66,102,179,63,
    28,72,103,40,135,123,184,83,62,136,71,206,126,18,12,56,
    226,118,233,136,207,141,35,20,67,230,245,133,73,241,51,106,
    51,39,204,82,172,101,199,33,126,207,137,36,238,23,101,228,
    220,119,184,16,58,113,225,4,123,248,52,8,149,78,187,203,
    52,195,43,233,32,31,20,188,104,62,58,161,238,212,121,176,
    44,243,113,26,227,230,226,43,227,73,189,161,173,170,26,239,
    33,116,14,163,54,184,15,84,99,77,202,143,169,33,79,185,
    63,129,169,45,126,125,42,26,164,15,133,161,33,110,225,178,
    95,109,94,201,49,95,144,180,226,77,166,249,251,119,97,26,
    125,46,86,242,77,131,102,202,25,58,251,160,182,73,165,208,
    107,153,193,57,110,231,121,176,109,6,59,220,46,240,96,23,
    202,3,185,69,30,92,226,179,171,6,143,172,16,135,205,252,
    143,28,198,121,61,125,209,162,140,14,254,159,212,229,110,77,
    191,157,238,47,160,92,132,93,69,91,98,210,9,109,77,91,
    177,48,187,43,14,232,142,182,153,15,150,126,116,13,190,253,
    48,151,129,146,26,8,183,166,209,65,76,154,90,203,176,130,
    131,241,66,221,120,98,187,242,196,57,47,90,199,43,19,219,
    32,70,135,120,158,118,105,171,116,202,206,242,45,189,91,130,
    202,103,181,202,103,40,15,82,121,114,133,74,218,111,122,107,
    68,170,5,163,145,76,163,139,109,15,63,153,58,47,50,67,
    15,160,90,63,206,227,30,103,5,175,55,137,131,252,48,225,
    22,6,70,189,226,138,169,132,8,231,80,98,192,193,231,228,
    23,53,203,37,104,232,42,85,21,40,247,87,85,176,251,215,
    37,8,86,185,80,166,202,63,201,99,220,91,208,198,253,123,
    191,131,235,93,174,156,151,135,213,251,215,137,73,143,135,248,
    46,77,224,207,126,159,249,244,73,138,244,197,144,250,224,186,
    215,113,23,149,227,2,0,115,109,72,90,22,241,55,146,191,
    251,95,189,72,10,16,143,189,229,25,99,145,153,41,146,137,
    84,242,157,137,166,40,114,229,33,80,132,143,243,108,236,251,
    122,111,142,247,137,239,79,233,98,227,67,84,227,79,164,15,
    29,160,211,98,163,193,167,140,244,219,172,53,5,175,14,95,
    251,143,141,54,130,142,16,245,78,116,204,39,110,224,46,84,
    96,229,127,36,152,133,23,83,30,157,199,236,4,67,125,158,
    203,199,143,238,15,169,249,177,193,59,115,148,62,197,224,221,
    191,62,193,65,122,227,165,43,175,84,93,58,245,83,107,36,
    155,141,250,36,206,113,182,140,42,123,248,84,187,52,120,92,
    40,57,84,164,146,36,108,125,38,135,89,62,254,44,139,164,
    162,140,123,86,46,131,245,176,255,82,210,122,89,173,84,175,
    95,126,206,98,244,3,28,208,7,230,12,26,61,246,113,146,
    133,71,50,42,199,47,230,238,198,102,46,241,82,148,7,24,
    20,254,135,4,6,35,72,16,96,140,153,103,8,60,55,72,
    7,210,104,65,188,252,134,105,188,40,124,71,149,100,224,229,
    114,16,163,217,57,251,232,13,17,101,65,160,128,171,159,94,
    151,42,147,226,166,19,185,122,239,168,207,244,158,242,17,222,
    239,177,233,210,41,249,66,83,204,88,88,57,240,183,37,58,
    162,46,230,219,77,187,217,104,214,109,68,55,141,44,139,57,
    187,217,154,23,111,251,221,64,212,183,172,141,118,83,252,7,
    101,171,90,106,
};

EmbeddedPython embedded_m5_internal_param_SeriesRequestGenerator(
    "m5/internal/param_SeriesRequestGenerator.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/build/X86/python/m5/internal/param_SeriesRequestGenerator.py",
    "m5.internal.param_SeriesRequestGenerator",
    data_m5_internal_param_SeriesRequestGenerator,
    2340,
    7827);

} // anonymous namespace