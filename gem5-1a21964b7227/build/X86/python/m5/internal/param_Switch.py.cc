#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Switch[] = {
    120,156,205,88,91,111,220,198,21,62,67,238,69,123,213,234,
    98,201,146,157,134,41,234,98,209,218,222,88,169,173,180,53,
    12,55,151,135,190,40,1,149,194,206,38,1,65,145,179,43,
    74,92,146,32,71,86,54,144,94,186,70,219,63,211,191,208,
    191,214,158,115,134,164,40,165,46,2,52,192,106,37,14,134,
    51,195,153,57,223,249,206,101,198,131,252,55,192,231,165,5,
    144,133,2,192,199,127,1,167,0,248,50,22,32,164,0,127,
    3,78,234,16,239,128,240,235,240,22,96,108,128,52,96,129,
    21,19,190,49,32,234,97,7,126,213,128,83,147,155,4,204,
    219,32,107,48,174,195,171,104,3,106,178,1,39,109,136,155,
    32,240,23,25,32,94,251,77,240,87,224,45,174,128,149,22,
    207,185,2,126,155,43,45,240,59,92,105,195,124,0,178,3,
    227,46,224,248,113,15,39,123,136,147,245,121,50,139,39,243,
    177,107,19,252,30,141,199,253,124,77,67,107,52,84,175,210,
    231,121,86,33,223,221,0,198,131,162,190,6,227,181,162,190,
    14,227,245,162,190,1,227,141,162,190,9,99,156,124,21,228,
    0,130,59,48,65,32,6,229,66,91,32,77,8,182,97,188,
    13,18,255,183,96,129,88,249,107,60,246,46,143,93,47,199,
    238,240,216,93,24,239,130,196,255,29,61,182,1,135,195,59,
    136,124,240,111,252,13,17,121,80,93,44,222,200,52,11,226,
    200,9,162,73,28,24,212,223,160,130,244,228,81,209,196,167,
    135,207,167,164,176,127,2,107,203,55,114,133,93,2,78,44,
    104,255,167,6,92,114,229,210,128,249,16,46,4,4,53,240,
    77,184,192,101,234,180,129,169,128,133,1,223,154,52,224,18,
    203,26,194,107,65,77,105,93,109,106,120,245,84,77,184,172,
    195,69,29,14,197,235,11,131,90,78,90,16,143,64,252,112,
    159,231,93,225,121,13,184,192,178,6,139,26,92,54,224,21,
    142,194,166,160,69,8,224,103,40,44,113,228,112,88,195,29,
    31,84,68,38,113,252,32,141,220,153,84,36,150,147,184,169,
    59,115,14,207,3,229,29,15,219,197,144,56,123,156,184,234,
    216,230,111,76,2,100,150,40,158,43,142,164,234,96,101,18,
    68,190,51,139,253,179,80,170,21,154,200,153,4,161,116,28,
    238,252,243,44,137,83,245,121,154,198,169,77,152,114,99,24,
    187,229,23,117,130,55,140,51,57,164,213,120,25,155,166,87,
    52,122,146,240,140,180,1,222,39,125,236,203,204,75,131,68,
    161,170,244,140,52,154,102,27,146,146,184,200,82,44,70,180,
    139,44,113,61,57,74,100,156,132,114,228,141,188,56,12,131,
    40,155,141,164,39,247,159,238,143,146,52,62,145,158,162,87,
    135,222,167,114,246,244,209,19,119,239,201,239,159,253,238,104,
    127,111,111,127,116,116,22,132,254,232,245,199,207,70,201,92,
    29,199,209,104,246,116,20,68,74,34,110,225,168,138,216,99,
    236,95,167,181,207,131,169,19,176,212,206,177,12,19,153,182,
    168,117,151,246,37,6,162,43,26,194,20,67,209,231,90,15,
    235,247,141,142,56,8,72,110,143,176,32,206,153,5,203,254,
    5,172,76,100,195,137,1,241,26,136,11,38,36,142,70,149,
    35,149,14,5,245,26,220,251,16,132,50,242,246,192,36,102,
    80,235,58,126,195,220,67,18,226,216,231,68,5,17,161,21,
    16,127,234,68,113,77,44,100,164,166,90,220,199,190,58,125,
    65,83,25,180,68,13,186,201,0,103,95,225,86,131,90,121,
    47,213,121,35,108,80,45,242,1,216,182,133,91,248,43,51,
    248,112,72,50,29,48,147,212,113,144,197,231,17,235,139,234,
    108,116,8,222,244,203,249,23,71,164,134,236,125,108,248,58,
    62,179,60,55,138,98,101,185,190,111,185,74,165,193,209,153,
    146,153,165,98,235,65,198,196,180,215,10,50,150,243,205,147,
    130,124,68,20,36,159,126,241,3,79,225,203,6,191,176,106,
    50,169,144,72,199,177,159,97,59,77,49,149,202,174,23,108,
    63,118,51,90,81,245,177,254,167,98,105,102,239,176,81,112,
    45,147,225,68,181,153,182,110,150,57,188,52,181,51,67,105,
    166,55,110,120,38,21,141,207,148,171,112,7,84,213,139,46,
    159,163,119,9,138,2,9,146,213,137,226,200,159,227,230,3,
    239,3,218,215,93,102,106,15,214,144,157,91,248,180,196,29,
    209,132,190,184,43,214,12,143,228,172,229,44,101,134,110,17,
    42,192,196,16,185,43,66,182,46,208,101,13,13,118,56,44,
    48,91,53,205,206,94,200,190,71,197,125,42,222,163,226,23,
    5,38,75,5,166,119,19,152,199,180,25,131,209,240,204,92,
    238,210,50,237,107,150,217,175,88,230,130,44,140,172,203,32,
    51,188,178,46,147,176,137,59,133,221,176,245,34,93,200,158,
    174,172,133,49,179,41,45,96,190,49,209,109,98,111,149,194,
    211,10,133,109,82,23,243,215,222,125,23,190,214,45,195,119,
    170,241,125,66,155,233,230,108,235,51,203,58,194,35,170,16,
    10,205,2,233,207,176,50,223,38,164,171,16,111,99,140,125,
    69,249,15,198,74,14,184,232,211,94,235,40,155,3,175,43,
    53,226,229,196,132,173,60,0,102,228,141,81,178,239,231,86,
    60,177,20,20,123,120,254,32,123,252,32,251,35,122,24,235,
    5,251,44,237,99,180,23,73,101,146,162,183,104,241,139,182,
    122,135,61,128,147,71,49,212,3,37,20,172,62,70,159,157,
    73,134,142,4,253,220,242,161,111,151,208,147,36,251,180,147,
    54,227,110,194,54,62,109,193,219,117,98,246,194,156,235,112,
    47,62,159,144,6,8,4,9,148,147,218,135,90,24,150,147,
    36,182,135,215,184,181,76,41,237,223,226,178,47,11,155,109,
    64,201,36,122,76,146,131,76,232,239,192,41,162,128,191,1,
    177,6,201,145,27,29,155,120,97,230,27,52,156,128,184,16,
    255,53,248,26,185,249,26,185,227,67,251,78,122,28,83,243,
    96,140,89,220,63,42,94,113,97,130,224,8,105,230,153,96,
    53,66,214,74,155,103,206,253,164,40,88,187,230,28,236,157,
    210,254,205,210,254,175,92,107,153,186,161,99,91,42,15,87,
    244,30,28,18,231,243,43,22,82,172,121,79,108,26,21,110,
    61,164,226,81,73,43,81,180,45,107,231,239,195,187,163,166,
    163,157,49,249,169,172,198,2,173,54,56,228,235,207,75,123,
    170,23,246,180,87,218,147,228,232,240,150,143,18,84,26,68,
    143,133,33,240,44,135,153,20,29,161,106,32,235,48,110,144,
    229,113,166,44,114,195,20,133,123,36,183,122,45,246,84,80,
    44,9,162,41,64,197,247,75,183,83,102,193,243,208,157,29,
    249,238,139,175,104,31,180,25,175,176,84,163,16,108,80,21,
    140,108,76,188,67,54,126,253,176,16,240,205,210,5,180,41,
    176,149,130,177,225,249,177,199,222,231,171,99,105,205,228,236,
    8,79,154,199,65,98,77,66,119,202,26,53,115,193,191,40,
    4,87,76,137,155,137,65,246,27,42,99,203,139,35,140,45,
    103,158,138,83,203,151,120,254,146,190,245,200,226,192,100,5,
    153,229,30,97,175,235,41,109,54,215,221,2,103,170,110,58,
    205,152,161,167,231,84,93,58,98,121,152,13,162,0,147,245,
    191,20,200,233,3,97,25,101,56,39,215,54,136,171,227,185,
    74,205,181,211,124,70,5,33,99,255,26,110,77,48,26,145,
    253,211,250,4,115,67,220,195,52,186,56,239,224,136,47,105,
    116,246,99,207,112,244,83,60,131,190,223,201,253,67,131,70,
    202,38,221,5,80,217,162,80,52,110,67,126,93,212,225,198,
    46,221,203,248,13,110,233,147,39,105,254,159,158,132,173,109,
    249,24,147,157,125,243,115,58,16,123,239,246,201,101,127,4,
    121,234,242,46,231,33,170,66,247,180,243,8,68,113,198,96,
    133,29,104,25,249,186,100,227,6,11,29,47,149,174,146,90,
    177,247,110,3,0,236,154,244,174,190,43,213,91,72,89,47,
    36,221,47,37,93,112,42,55,223,172,36,255,172,109,241,42,
    26,208,1,225,130,193,112,12,125,70,128,18,147,90,137,9,
    81,37,146,231,78,21,23,125,0,160,173,184,73,34,35,255,
    42,185,231,158,165,163,196,126,207,129,50,139,234,98,38,191,
    137,207,143,13,155,228,172,136,205,138,174,151,182,124,43,84,
    206,156,247,11,101,15,87,161,234,249,109,82,181,246,245,165,
    155,183,255,80,42,111,247,38,161,223,4,169,114,34,169,50,
    58,105,254,175,110,204,229,248,80,87,182,48,166,108,33,190,
    12,165,146,215,8,193,44,201,143,224,190,196,16,27,207,241,
    24,200,39,39,124,15,29,231,150,132,158,143,113,217,49,173,
    79,1,147,66,79,131,239,112,90,181,150,224,60,224,198,221,
    182,222,48,231,6,124,70,152,243,221,6,216,171,37,192,124,
    5,91,132,92,54,59,2,237,192,157,233,155,49,190,216,177,
    127,73,197,175,10,29,177,221,232,243,36,159,203,244,217,25,
    77,140,147,20,206,73,108,186,95,81,100,74,90,128,79,220,
    44,240,236,24,15,57,41,107,64,183,126,26,198,222,169,244,
    245,5,161,90,45,219,15,131,89,222,70,76,246,83,23,225,
    224,139,86,153,6,110,24,252,160,239,138,43,115,114,68,174,
    56,63,214,99,42,167,65,70,11,174,93,31,156,123,0,66,
    82,237,220,228,79,245,195,219,161,114,157,82,235,171,136,23,
    124,243,240,18,139,1,93,222,173,182,68,211,64,215,128,127,
    109,209,23,117,209,237,181,204,86,163,85,55,145,22,212,178,
    33,58,102,171,221,21,197,223,14,210,164,109,236,116,90,226,
    63,253,196,242,139,
};

EmbeddedPython embedded_m5_internal_param_Switch(
    "m5/internal/param_Switch.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/build/X86/python/m5/internal/param_Switch.py",
    "m5.internal.param_Switch",
    data_m5_internal_param_Switch,
    2149,
    6822);

} // anonymous namespace