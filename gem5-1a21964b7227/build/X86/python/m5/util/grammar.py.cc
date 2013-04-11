#include "sim/init.hh"

namespace {

const uint8_t data_m5_util_grammar[] = {
    120,156,197,87,109,111,27,199,17,158,61,190,83,164,45,43,
    170,18,165,77,114,105,171,136,77,19,19,54,98,187,9,4,
    33,47,117,130,162,129,144,158,243,37,70,80,246,116,92,82,
    103,29,239,14,183,203,90,2,36,160,176,83,160,95,242,55,
    251,47,138,118,158,217,91,138,78,141,32,159,34,137,92,237,
    203,236,205,104,230,121,102,230,18,170,127,218,252,253,56,36,
    50,95,243,100,202,31,69,167,68,143,87,115,69,143,3,63,
    111,200,60,32,221,164,153,162,105,131,190,35,122,78,244,205,
    227,22,77,155,164,219,178,219,90,237,118,112,233,209,8,26,
    210,255,242,207,145,237,243,244,171,184,50,250,97,85,21,85,
    226,109,8,248,251,41,108,216,230,137,102,237,10,55,89,233,
    119,172,189,65,209,163,17,36,146,6,15,254,251,25,196,223,
    224,137,229,135,43,186,32,186,80,244,60,32,117,17,96,49,
    17,155,31,141,20,75,28,141,112,193,246,120,120,120,150,232,
    210,166,69,110,187,188,154,76,210,60,181,147,137,109,225,188,
    56,213,185,147,108,242,96,116,54,179,29,158,44,180,49,241,
    92,71,56,25,145,31,12,108,31,207,210,76,155,50,78,244,
    184,212,69,153,233,113,50,78,138,44,75,115,179,24,235,68,
    63,184,247,96,92,86,197,19,157,88,44,39,88,207,245,226,
    222,251,119,226,187,119,62,188,255,193,241,131,187,119,31,140,
    77,149,140,203,115,123,82,228,227,197,189,241,210,166,217,120,
    94,197,139,69,92,221,46,207,35,252,227,111,67,33,140,34,
    181,169,142,70,152,213,246,231,241,66,179,253,125,89,44,138,
    233,50,195,18,2,71,69,174,229,242,149,205,63,175,225,80,
    22,66,33,140,104,43,241,229,23,238,120,21,247,166,143,251,
    87,87,113,39,192,7,48,83,50,105,0,111,152,52,129,183,
    105,15,64,3,196,24,138,109,154,182,229,136,113,214,145,73,
    151,166,93,153,244,128,25,120,37,81,53,188,240,253,51,84,
    237,147,96,153,209,242,164,77,197,144,20,3,136,85,60,11,
    40,87,140,30,129,210,68,57,244,32,230,71,22,248,117,190,
    53,111,174,166,97,106,194,56,15,211,44,211,243,56,11,99,
    107,171,244,120,105,181,32,213,222,224,225,19,191,37,88,151,
    24,101,250,108,114,250,52,174,230,70,196,34,137,36,30,95,
    111,254,236,81,178,183,4,234,118,89,126,169,207,116,245,121,
    156,216,162,58,127,7,155,109,193,219,144,127,197,135,205,250,
    43,62,252,231,143,250,144,227,84,159,252,133,79,20,165,1,
    165,13,176,234,185,162,111,3,186,228,15,75,52,40,149,172,
    193,155,101,253,132,214,42,10,1,158,192,209,61,96,49,142,
    109,136,85,151,14,214,34,212,118,17,2,169,143,34,248,246,
    39,196,70,92,93,44,109,185,180,6,161,101,7,24,112,235,
    235,19,29,186,237,16,46,15,23,75,99,67,157,79,195,167,
    169,61,9,225,166,222,234,226,52,173,210,255,112,46,147,45,
    27,31,59,141,35,160,59,218,192,22,2,91,24,225,96,25,
    219,19,201,45,166,204,82,27,221,244,188,229,71,27,60,218,
    226,194,121,156,36,30,20,77,15,138,104,8,89,216,200,250,
    228,47,171,186,6,120,108,121,120,72,210,246,248,248,61,213,
    169,90,240,17,12,213,107,156,151,26,170,207,191,91,65,226,
    217,214,244,89,250,175,74,146,51,3,230,73,64,197,45,82,
    115,146,16,202,152,114,20,17,83,134,15,78,183,56,192,146,
    208,185,128,200,44,168,143,27,235,199,141,213,113,179,62,110,
    202,241,59,140,163,22,165,109,124,24,77,23,78,67,64,223,
    139,48,99,6,203,118,125,165,189,126,165,131,207,213,149,166,
    191,210,145,101,167,190,210,145,43,111,57,213,28,223,22,131,
    93,236,151,37,35,116,151,19,212,174,147,237,191,68,118,227,
    69,217,129,151,29,138,236,235,47,200,118,107,217,30,165,125,
    158,50,86,166,55,200,14,96,207,115,161,222,44,160,157,103,
    117,153,187,185,74,84,25,120,108,162,1,64,180,227,65,196,
    155,194,17,65,37,0,103,129,175,100,89,85,58,183,19,185,
    34,5,58,37,159,188,252,153,41,150,85,162,37,25,28,228,
    92,82,14,83,36,3,59,88,191,158,230,90,104,180,191,103,
    246,195,226,24,128,11,79,98,19,230,197,21,245,66,28,142,
    160,53,122,29,3,116,56,35,119,95,176,180,204,206,163,95,
    98,231,87,24,64,150,232,13,159,36,161,40,47,28,203,36,
    115,158,151,122,45,143,98,128,190,107,160,201,134,212,223,185,
    182,208,63,153,124,8,221,31,213,252,232,169,46,51,164,191,
    54,190,185,54,246,85,75,109,254,224,239,70,208,80,6,255,
    250,129,97,239,229,243,67,9,75,130,68,130,32,118,61,175,
    254,77,210,253,48,20,172,180,62,229,171,140,101,41,156,214,
    167,219,29,159,146,5,39,167,45,186,108,213,28,96,76,51,
    135,46,153,18,60,239,74,243,164,232,10,112,188,203,73,152,
    33,134,221,147,166,92,218,160,116,0,34,222,175,23,67,208,
    206,47,110,128,61,126,113,19,236,186,127,201,228,97,106,109,
    18,87,25,236,110,209,69,7,118,94,178,186,46,165,175,128,
    79,172,135,145,126,33,149,253,130,77,166,198,101,143,106,43,
    182,29,203,123,228,74,249,145,249,13,34,92,205,151,11,134,
    157,75,210,199,58,140,67,231,165,247,194,167,140,57,192,76,
    160,44,49,225,184,78,151,9,250,61,35,8,138,101,46,72,
    153,23,182,144,28,174,81,157,103,203,60,145,76,45,92,144,
    217,84,31,47,231,146,174,109,21,39,167,172,97,244,11,44,
    96,74,106,24,61,54,206,19,45,203,227,216,104,103,132,128,
    51,250,53,228,192,147,153,96,58,215,79,5,211,242,216,36,
    99,22,201,44,205,185,156,8,27,156,109,101,201,117,193,225,
    126,15,3,170,112,132,110,37,26,249,194,225,181,70,161,223,
    249,50,114,153,89,158,88,98,234,104,84,148,226,179,43,102,
    76,99,6,39,244,56,70,71,239,226,20,137,60,26,99,248,
    221,74,46,77,172,200,149,238,185,152,86,218,44,51,123,13,
    188,26,120,59,38,206,189,127,131,242,80,136,133,130,179,29,
    12,212,77,166,216,14,207,135,242,187,25,188,198,196,226,150,
    197,23,160,85,203,82,253,128,44,197,174,180,18,220,137,216,
    160,174,78,128,166,162,252,142,52,35,16,12,68,112,40,130,
    92,115,88,54,223,230,195,38,138,21,59,220,113,6,20,115,
    148,130,148,176,138,225,204,228,249,62,88,117,144,192,66,101,
    238,190,12,190,154,251,0,93,173,80,28,22,149,244,32,87,
    104,30,73,18,124,15,195,251,62,72,144,144,9,250,255,43,
    204,69,7,94,160,210,241,116,173,155,184,77,117,75,17,253,
    129,174,227,101,64,88,226,2,41,166,67,245,102,29,198,182,
    122,133,199,33,231,188,77,215,59,192,101,45,159,227,240,82,
    202,126,45,222,229,28,166,234,126,1,126,150,10,152,202,203,
    232,171,46,58,179,38,237,112,107,153,223,114,13,168,72,242,
    235,40,246,216,37,174,163,228,112,62,171,91,123,121,71,50,
    111,241,248,232,60,183,241,89,40,121,128,11,86,184,103,62,
    218,155,242,167,127,120,184,103,14,14,164,224,153,221,151,8,
    162,67,44,102,44,63,130,185,17,250,207,232,237,85,177,210,
    103,37,183,129,56,249,123,156,45,181,188,15,9,28,28,39,
    165,140,10,87,23,102,126,13,17,65,195,90,78,228,127,249,
    7,244,246,37,28,29,102,210,126,176,169,86,129,88,53,113,
    31,144,111,249,83,233,245,119,135,235,97,152,53,156,163,27,
    255,239,104,97,128,65,90,251,83,221,143,39,39,49,103,84,
    203,168,223,51,225,199,161,56,91,74,156,67,236,103,222,143,
    209,167,24,94,244,91,244,71,12,15,175,7,197,240,153,117,
    62,251,23,173,94,145,26,156,113,142,92,182,197,70,36,175,
    2,210,223,72,107,243,91,242,141,12,216,25,125,130,225,115,
    12,95,208,245,189,156,163,240,161,200,24,216,217,86,189,86,
    239,70,111,127,107,187,55,232,117,93,190,65,227,239,48,146,
    157,223,70,251,136,172,43,21,7,27,104,33,35,229,163,227,
    94,171,164,239,147,7,95,211,63,37,214,29,184,247,177,67,
    212,91,233,161,6,92,35,6,193,78,235,127,64,26,2,112,
};

EmbeddedPython embedded_m5_util_grammar(
    "m5/util/grammar.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/src/python/m5/util/grammar.py",
    "m5.util.grammar",
    data_m5_util_grammar,
    1872,
    4848);

} // anonymous namespace
