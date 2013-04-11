#include "sim/init.hh"

namespace {

const uint8_t data_m5_util_smartdict[] = {
    120,156,221,89,109,111,27,69,16,222,187,179,157,56,47,109,
    222,154,20,74,233,82,222,76,105,99,18,154,134,86,21,66,
    165,42,170,128,0,151,210,210,208,234,116,185,93,59,151,156,
    239,156,219,117,94,80,194,7,64,66,66,2,137,15,72,252,
    26,254,0,63,10,102,230,94,236,184,73,145,85,84,91,117,
    226,209,120,207,190,157,103,246,153,185,189,231,60,150,190,138,
    240,254,136,51,166,124,112,4,252,27,108,139,177,123,232,153,
    108,203,96,129,193,214,12,102,8,139,73,147,213,12,38,10,
    236,39,198,126,100,236,225,154,197,68,145,201,2,141,150,242,
    209,34,19,67,76,26,52,58,156,143,150,112,180,14,231,26,
    98,162,204,86,43,35,48,155,255,15,188,42,6,120,26,205,
    165,196,29,6,227,106,29,11,223,211,244,225,190,27,251,238,
    122,32,189,44,100,252,218,45,12,249,111,112,36,195,248,32,
    220,53,19,99,135,249,48,46,147,156,2,131,176,209,41,166,
    97,99,24,69,114,134,210,144,215,134,49,48,116,202,105,184,
    107,35,24,33,58,163,76,140,144,51,198,196,40,57,227,76,
    140,145,115,138,137,113,114,78,51,113,138,156,9,38,78,147,
    51,201,196,4,57,83,76,76,146,51,205,196,20,57,51,76,
    76,147,115,134,137,25,114,102,153,56,67,206,28,179,87,43,
    179,128,71,253,10,230,110,168,101,16,248,117,25,106,222,140,
    163,189,125,238,5,174,82,188,22,197,124,181,225,198,250,54,
    36,103,158,243,44,53,124,215,15,2,222,82,146,235,13,57,
    194,225,181,3,71,162,150,226,94,20,238,200,88,243,90,43,
    244,180,31,133,138,235,136,67,122,101,163,169,209,205,142,239,
    184,65,75,210,65,56,11,158,146,206,162,247,155,82,121,70,
    154,115,11,222,31,99,222,39,112,157,104,213,14,96,121,13,
    252,95,165,197,91,169,152,120,168,140,38,66,16,117,56,55,
    254,76,233,56,89,221,2,126,144,65,173,130,11,73,70,193,
    10,178,106,205,15,164,106,186,158,172,54,101,212,12,100,213,
    171,122,17,164,32,84,141,170,244,228,242,210,114,21,18,177,
    41,61,141,31,29,252,92,151,141,165,43,11,238,226,194,245,
    107,87,215,151,23,23,151,171,42,246,170,205,125,189,17,133,
    213,198,82,181,165,253,160,170,48,91,72,165,121,56,48,4,
    51,57,142,31,106,199,185,138,51,155,196,166,222,241,149,8,
    223,103,81,88,183,17,15,29,178,139,25,160,231,141,106,152,
    80,5,16,141,227,92,123,22,88,67,4,235,78,16,185,122,
    16,112,149,9,87,13,195,113,156,15,158,125,189,110,69,81,
    48,8,184,70,9,87,24,133,223,201,56,114,156,27,29,200,
    204,20,149,153,33,219,73,144,29,16,166,67,147,29,152,136,
    114,211,100,209,40,51,114,188,171,6,142,155,249,184,121,100,
    220,202,199,173,35,227,133,124,188,144,143,235,98,230,166,249,
    43,101,69,139,173,128,156,117,72,35,213,52,212,17,13,32,
    243,52,102,179,214,102,142,149,101,152,14,68,208,149,98,234,
    241,186,111,117,159,54,186,155,56,243,12,101,123,204,24,55,
    70,143,188,41,255,102,103,254,167,193,129,132,248,217,18,128,
    221,100,121,114,136,71,120,50,162,25,225,181,167,250,69,171,
    82,210,6,160,86,62,233,98,212,127,34,50,6,26,145,116,
    156,187,189,34,50,7,25,145,220,118,156,79,123,69,100,13,
    50,162,16,214,232,243,94,17,21,6,25,81,29,234,232,139,
    94,17,21,7,26,17,172,209,87,79,67,52,249,36,162,185,
    129,196,147,108,227,92,33,28,231,94,143,128,206,14,48,32,
    213,90,119,156,251,61,2,154,25,96,64,141,86,224,56,223,
    244,8,232,220,0,3,18,254,142,227,172,189,16,128,146,77,
    168,142,91,146,64,61,58,6,148,117,4,148,113,4,215,96,
    54,134,228,78,40,166,206,224,244,136,104,48,59,67,138,136,
    90,131,219,35,162,193,108,13,41,34,234,13,94,143,136,6,
    179,148,82,68,84,71,242,133,64,52,150,32,202,187,67,189,
    141,170,114,150,165,26,29,236,250,220,6,236,41,244,8,125,
    104,68,162,133,91,245,172,85,70,158,227,216,184,243,176,241,
    203,54,126,201,30,203,64,218,103,208,160,220,101,207,161,193,
    147,218,47,161,121,25,205,57,52,175,160,57,143,230,85,52,
    23,208,112,52,175,161,185,136,230,117,52,111,28,201,210,115,
    78,149,141,89,121,15,167,188,12,166,100,149,140,178,153,254,
    141,230,158,89,182,158,244,52,178,225,235,80,200,154,31,74,
    113,178,198,137,249,57,86,227,180,87,137,42,234,47,48,95,
    6,0,115,35,10,132,140,83,165,80,71,60,150,205,88,42,
    148,16,91,217,52,36,11,226,60,106,158,243,7,126,16,144,
    202,87,151,161,140,221,32,216,231,158,139,26,162,27,114,185,
    231,201,38,234,133,124,119,3,142,194,157,51,247,53,247,21,
    170,131,226,50,95,111,105,46,81,50,116,53,137,134,116,26,
    148,51,72,161,68,133,64,194,73,128,63,122,131,195,55,180,
    31,214,185,106,121,27,220,85,220,15,113,2,191,198,149,134,
    95,55,32,190,92,208,49,178,74,33,193,225,232,125,54,9,
    9,119,220,64,201,254,202,55,68,226,176,163,32,48,86,251,
    77,52,111,161,121,59,35,122,255,56,137,243,109,178,52,141,
    200,73,146,210,114,221,56,231,152,153,113,236,209,73,28,235,
    85,71,71,5,221,32,41,157,100,126,244,71,144,168,88,253,
    106,31,12,206,15,172,114,227,76,209,214,27,174,230,200,92,
    5,124,136,129,39,42,97,151,223,86,192,145,151,137,120,163,
    18,81,122,35,2,146,166,223,70,162,147,188,148,104,213,92,
    200,166,12,5,242,13,184,11,227,126,12,148,117,235,50,239,
    198,133,140,99,213,188,27,111,150,88,52,199,140,68,65,244,
    73,60,195,238,108,166,146,152,133,79,48,86,5,138,36,84,
    112,77,48,177,212,173,56,84,220,109,75,240,137,78,15,188,
    134,89,51,57,93,238,249,74,19,229,113,80,184,218,93,119,
    169,192,4,33,193,87,126,166,144,63,209,13,18,100,187,190,
    146,43,9,205,72,205,68,143,30,142,224,133,165,46,53,173,
    119,251,178,65,195,91,114,191,143,219,74,8,202,135,210,118,
    156,22,206,142,23,1,86,24,55,230,74,30,134,134,239,98,
    182,8,231,147,66,247,141,52,233,154,36,78,148,112,45,102,
    180,83,254,144,145,220,40,99,236,74,148,75,37,53,117,149,
    168,6,153,219,207,251,26,87,81,66,169,93,200,114,176,235,
    238,171,60,209,74,71,113,155,54,217,146,64,220,43,137,90,
    249,46,134,146,196,175,178,248,187,196,76,251,74,150,127,60,
    220,151,218,70,214,254,144,119,31,203,51,186,51,58,143,164,
    128,124,31,26,237,196,66,62,111,63,158,38,253,184,35,197,
    83,219,51,236,251,182,244,215,78,2,46,88,66,96,34,92,
    135,152,139,208,157,111,23,30,147,150,187,211,151,4,44,192,
    76,63,183,219,47,37,32,219,101,121,152,128,119,192,217,187,
    216,5,126,146,29,38,200,105,215,117,223,216,158,96,15,4,
    59,6,251,72,178,184,113,39,254,118,105,21,179,204,244,5,
    58,62,179,250,37,175,40,99,130,149,18,248,212,230,179,245,
    191,113,210,250,95,96,143,76,164,192,161,69,109,143,30,24,
    28,88,120,172,102,158,204,133,98,74,246,52,21,133,188,20,
    22,89,250,216,118,203,126,191,95,23,58,124,218,245,91,23,
    23,172,52,33,196,133,37,228,194,124,87,34,206,83,34,140,
    238,114,128,44,60,133,23,229,148,23,29,185,56,218,22,236,
    165,126,101,1,31,141,253,222,73,139,49,195,198,34,200,187,
    109,206,141,11,44,123,78,150,95,229,240,153,80,214,112,59,
    30,251,228,87,27,66,111,227,230,246,216,94,136,155,125,184,
    104,185,173,160,47,79,118,40,176,63,58,24,240,191,65,166,
    70,0,215,129,20,220,113,224,237,235,253,90,113,172,241,63,
    219,168,43,120,213,234,222,130,226,117,128,174,22,212,49,169,
    119,80,189,16,93,146,5,189,193,250,185,75,189,4,51,109,
    227,148,120,155,91,50,75,102,121,188,92,132,251,163,2,190,
    199,172,149,10,221,55,210,221,162,145,209,47,217,0,225,226,
    70,235,56,61,109,125,232,76,153,40,28,4,142,211,55,76,
    116,95,124,51,185,19,254,16,41,162,144,69,35,198,132,57,
    123,99,118,104,246,210,191,183,253,233,8,
};

EmbeddedPython embedded_m5_util_smartdict(
    "m5/util/smartdict.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/src/python/m5/util/smartdict.py",
    "m5.util.smartdict",
    data_m5_util_smartdict,
    1899,
    9077);

} // anonymous namespace
