#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RubyWireBuffer[] = {
    120,156,205,88,109,111,220,198,17,158,37,121,119,186,147,238,
    116,122,177,36,199,78,195,20,117,113,104,109,95,173,196,86,
    218,26,70,154,38,31,242,161,74,194,11,32,249,18,128,160,
    200,189,19,101,30,73,144,43,59,103,72,95,122,70,219,63,
    211,191,208,191,214,206,204,146,212,201,177,128,0,41,16,158,
    196,197,114,185,92,206,60,243,204,204,206,250,80,252,122,120,
    125,106,3,228,223,10,128,0,255,5,188,0,136,4,140,5,
    8,41,32,216,130,179,6,36,183,65,4,13,120,3,48,54,
    64,26,176,192,142,9,223,25,16,119,241,1,190,213,132,23,
    38,15,9,152,119,64,90,48,110,192,81,188,5,150,108,194,
    89,7,146,22,8,252,197,6,136,227,160,5,193,10,188,193,
    47,96,167,205,107,174,64,208,225,78,27,130,85,238,116,96,
    222,7,185,10,227,53,192,249,227,46,46,118,31,23,235,241,
    98,54,47,22,224,163,109,8,186,52,31,229,121,78,83,45,
    154,170,191,210,227,117,214,161,144,174,15,227,126,217,223,128,
    241,70,217,223,132,241,38,4,235,32,251,16,110,193,4,21,
    238,87,11,110,131,52,33,188,5,227,91,32,241,127,27,22,
    136,73,176,193,115,119,120,238,102,53,119,151,231,238,193,120,
    15,36,254,239,234,185,77,24,13,110,33,194,225,127,241,55,
    64,132,65,173,97,243,82,102,121,152,196,110,24,79,146,208,
    160,231,77,106,200,30,62,53,45,188,186,120,253,149,12,243,
    111,96,171,4,70,97,152,75,192,133,5,201,255,194,128,75,
    238,92,26,48,31,192,133,128,208,130,192,132,11,252,76,131,
    4,152,10,88,24,240,189,73,19,46,177,181,16,70,27,44,
    165,109,178,173,97,212,75,181,224,178,1,23,13,24,137,227,
    11,131,70,206,218,144,12,65,188,190,203,235,174,240,186,6,
    92,96,107,193,194,130,203,38,28,225,44,28,10,219,132,0,
    190,134,202,18,23,70,3,11,37,62,92,82,153,212,9,194,
    44,246,102,82,17,26,110,234,101,222,204,117,206,79,230,71,
    97,38,63,59,159,76,100,54,232,148,83,147,252,97,234,169,
    83,135,223,53,9,152,89,170,120,205,36,150,106,21,59,147,
    48,14,220,89,18,156,71,82,173,208,130,238,36,140,164,235,
    242,195,47,103,105,146,169,47,178,44,201,28,194,150,7,163,
    196,171,222,104,16,204,81,146,203,1,125,141,63,227,208,242,
    138,102,79,82,94,145,4,96,121,233,229,64,230,126,22,166,
    10,77,166,87,164,217,180,218,128,140,197,77,254,26,155,33,
    73,145,167,158,47,135,169,76,210,72,14,253,161,159,68,81,
    24,231,179,161,244,229,193,227,131,97,154,37,103,210,87,116,
    235,210,253,84,206,30,63,120,228,237,63,250,227,147,143,79,
    14,246,247,15,134,39,231,97,20,12,143,63,121,50,76,231,
    234,52,137,135,179,199,195,48,86,18,241,139,134,239,66,238,
    33,206,219,36,25,94,133,83,55,100,237,221,83,25,165,50,
    107,211,232,123,36,159,232,139,53,209,20,166,24,136,30,247,
    186,216,191,107,172,138,195,144,244,247,9,19,226,160,89,178,
    238,63,192,198,69,118,156,25,144,108,128,184,96,130,226,108,
    164,0,82,107,36,232,169,193,79,239,131,80,70,49,30,154,
    196,20,26,221,196,119,152,139,72,74,156,251,148,168,33,98,
    244,10,226,83,131,40,175,137,134,12,213,212,75,122,248,172,
    65,111,208,82,6,125,194,130,181,180,143,171,175,240,168,65,
    163,44,203,242,186,49,14,168,54,249,62,142,237,160,8,127,
    103,70,143,6,164,211,33,51,74,157,134,121,242,42,102,187,
    81,159,157,112,132,112,125,61,255,234,132,204,145,127,128,3,
    207,147,115,219,247,226,56,81,182,23,4,182,167,84,22,158,
    156,43,153,219,42,177,239,229,76,80,103,163,36,101,181,222,
    60,45,73,72,132,65,18,234,155,32,244,21,222,108,241,13,
    155,38,151,10,9,117,154,4,57,142,211,18,83,169,156,70,
    201,250,83,47,167,47,42,10,200,127,41,63,205,44,30,52,
    75,206,229,50,154,168,14,211,215,203,115,151,63,77,227,204,
    84,90,233,165,23,157,75,69,243,115,229,41,148,128,186,250,
    163,245,225,234,30,65,82,34,66,58,187,113,18,7,115,84,
    34,244,63,36,249,246,152,177,93,216,64,150,238,224,213,22,
    183,68,11,122,98,79,108,24,62,233,107,21,108,101,166,238,
    16,58,192,4,17,69,136,66,214,46,48,148,13,12,14,68,
    172,56,123,57,173,206,209,201,185,67,205,93,106,222,167,230,
    87,37,54,181,0,168,251,54,64,15,73,40,131,81,241,205,
    66,255,202,83,157,107,158,218,91,242,212,5,121,28,121,155,
    65,110,121,229,109,38,97,148,172,150,126,196,222,140,244,33,
    255,186,242,30,198,206,233,19,38,205,146,248,14,177,121,153,
    210,211,37,74,59,100,54,230,179,243,222,77,56,219,53,197,
    121,170,113,126,68,66,173,21,236,235,49,235,86,133,79,212,
    33,52,90,37,226,159,99,103,190,75,136,47,67,189,139,185,
    248,136,246,67,152,83,57,49,99,172,59,214,217,184,48,128,
    238,88,196,211,137,9,59,69,162,204,41,74,163,134,63,204,
    237,100,98,43,40,101,120,122,47,127,120,47,255,51,70,30,
    251,25,199,50,29,123,116,116,201,100,154,97,20,105,243,141,
    142,6,46,71,6,183,200,114,104,15,74,181,108,70,182,2,
    7,153,28,3,12,198,191,250,152,160,83,153,128,52,58,32,
    137,58,140,191,9,187,120,117,4,139,237,38,28,165,121,111,
    196,79,241,250,140,44,65,96,72,160,189,170,51,210,74,177,
    190,164,185,51,184,198,181,58,104,235,252,30,63,255,105,233,
    203,77,168,152,69,151,73,250,144,107,253,19,120,107,41,224,
    31,64,44,66,178,20,206,200,174,95,186,255,22,77,39,64,
    46,196,59,147,180,81,184,181,81,4,70,244,251,180,203,185,
    183,72,218,184,251,251,215,82,212,92,152,32,56,147,154,197,
    14,114,57,147,90,85,44,96,14,254,164,108,105,93,11,26,
    206,237,42,46,152,85,92,184,10,189,213,86,15,3,94,29,
    44,197,94,134,178,184,164,214,23,87,172,164,156,244,190,216,
    54,150,184,118,159,154,7,21,205,68,57,246,75,107,240,1,
    220,156,101,93,29,180,41,142,229,22,43,182,222,100,87,188,
    90,162,242,181,70,233,107,251,149,175,73,206,36,111,184,44,
    161,214,32,202,44,12,129,245,31,238,194,168,236,178,64,54,
    96,220,36,175,228,221,182,40,156,86,148,33,148,66,239,181,
    60,181,132,104,69,26,77,11,106,126,168,141,15,51,51,158,
    70,222,236,36,240,158,81,234,205,73,40,191,244,98,163,84,
    176,191,172,32,249,159,184,65,71,190,253,67,169,232,203,218,
    40,234,80,50,172,20,100,231,12,18,159,35,212,183,167,210,
    158,201,217,9,86,177,167,97,106,79,34,111,202,22,54,11,
    0,190,42,1,80,76,145,183,55,21,249,239,168,77,108,63,
    137,49,31,157,251,42,201,236,64,98,77,39,3,251,129,205,
    201,204,14,115,219,59,193,167,158,175,180,75,93,15,29,188,
    235,245,178,105,206,27,220,23,175,168,91,27,228,138,20,29,
    198,33,22,0,163,18,65,93,108,86,153,137,247,249,218,63,
    81,10,172,213,212,92,7,216,39,212,16,66,206,111,161,118,
    9,108,136,159,255,134,228,32,216,155,226,14,110,205,213,54,
    201,122,109,230,215,244,118,254,227,8,242,183,159,18,65,244,
    217,81,17,71,154,80,156,58,181,64,174,208,73,195,184,67,
    167,54,52,178,74,193,165,245,51,131,11,59,94,125,224,37,
    151,123,254,255,140,41,206,126,125,245,115,62,130,98,199,115,
    83,60,17,203,202,119,117,60,9,69,89,178,176,1,15,181,
    174,124,42,115,231,6,34,186,126,38,61,37,181,193,239,212,
    9,16,142,94,90,186,239,42,179,151,90,55,74,205,15,42,
    205,23,188,35,156,111,47,213,20,204,2,113,20,247,169,238,
    184,96,112,92,67,151,30,80,97,100,85,24,81,141,22,203,
    87,238,187,112,210,245,5,137,228,165,169,140,131,171,218,129,
    159,212,6,53,14,145,223,67,181,41,91,195,66,97,27,175,
    31,7,2,210,123,9,6,38,64,163,242,253,90,81,129,125,
    195,43,73,48,160,2,240,42,89,56,68,1,157,30,170,204,
    224,252,9,202,108,81,177,63,144,145,84,242,157,198,85,244,
    118,81,181,7,18,51,107,50,199,138,145,139,43,188,143,92,
    183,102,153,230,19,252,252,49,20,165,48,101,154,38,230,154,
    182,213,22,188,9,120,235,208,92,139,77,37,134,46,34,230,
    124,40,2,206,122,133,14,159,233,150,121,150,29,138,74,231,
    67,111,166,143,216,248,100,200,249,53,53,191,41,81,102,79,
    208,133,39,23,110,186,216,70,231,225,29,10,111,72,28,58,
    152,81,244,21,173,198,40,156,233,243,68,62,140,11,50,15,
    213,228,51,88,153,133,94,20,190,150,124,87,205,226,116,170,
    118,97,121,223,205,22,202,228,52,204,17,32,94,186,154,94,
    120,41,33,163,62,188,41,214,45,191,94,47,147,234,157,179,
    62,157,120,198,135,17,79,177,233,211,249,222,122,91,180,12,
    116,99,252,235,136,158,104,136,181,110,219,108,55,219,13,19,
    205,78,35,91,98,213,108,119,214,4,253,221,70,18,116,140,
    219,157,182,248,31,125,228,17,113,
};

EmbeddedPython embedded_m5_internal_param_RubyWireBuffer(
    "m5/internal/param_RubyWireBuffer.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/build/X86/python/m5/internal/param_RubyWireBuffer.py",
    "m5.internal.param_RubyWireBuffer",
    data_m5_internal_param_RubyWireBuffer,
    2105,
    6853);

} // anonymous namespace
