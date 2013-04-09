#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Topology[] = {
    120,156,205,89,109,111,220,184,17,30,74,187,107,239,218,107,
    175,223,95,147,40,105,83,44,218,36,219,164,77,124,109,131,
    195,245,210,124,56,160,200,5,242,1,201,233,174,16,100,137,
    182,21,107,37,65,162,147,236,193,254,82,7,109,255,76,191,
    246,99,127,65,255,83,59,51,20,229,117,92,39,7,180,64,
    214,182,8,106,72,13,103,134,207,188,144,14,161,250,89,199,
    231,11,7,160,252,151,0,136,240,79,192,17,64,34,192,19,
    32,164,128,104,9,94,53,33,219,0,17,53,225,29,128,103,
    129,180,224,12,59,54,124,103,65,218,197,1,252,170,5,71,
    54,147,4,140,58,32,27,224,53,225,69,186,4,13,217,130,
    87,29,200,166,64,224,79,106,129,120,25,77,65,52,13,239,
    112,5,236,180,153,231,52,68,29,238,180,33,154,225,78,7,
    70,61,144,51,224,205,2,206,247,186,200,236,14,50,155,99,
    102,14,51,139,112,104,25,162,46,205,71,121,190,165,169,13,
    154,170,87,153,99,62,243,80,73,215,3,175,103,250,11,224,
    45,152,254,34,120,139,166,191,4,222,146,233,47,131,183,108,
    250,43,224,173,152,254,42,120,171,166,191,6,222,154,233,175,
    131,183,110,250,27,224,109,152,254,38,120,155,166,191,5,222,
    150,233,111,131,183,13,209,60,200,101,136,175,193,62,26,186,
    87,43,114,29,164,13,241,13,240,110,128,196,191,235,112,134,
    123,17,45,240,92,135,231,46,214,115,111,242,220,91,224,221,
    2,137,127,55,245,220,22,236,246,87,112,103,227,127,227,79,
    31,119,22,212,44,54,175,101,81,198,89,234,199,233,126,22,
    91,52,222,162,134,112,16,82,51,133,79,23,159,39,4,136,
    191,3,163,33,178,42,64,156,2,50,22,36,255,145,5,167,
    220,57,181,96,212,135,19,1,113,3,34,27,78,112,153,38,
    9,112,32,224,204,130,239,109,154,112,138,109,3,183,207,129,
    134,210,88,88,214,219,167,89,77,193,105,19,78,154,176,43,
    94,158,88,68,121,213,134,108,0,226,135,109,230,59,205,124,
    45,56,193,182,1,103,13,56,109,193,11,156,133,164,184,77,
    22,192,207,80,89,194,224,110,191,129,18,63,27,83,153,212,
    137,226,34,13,134,82,205,99,223,207,131,34,24,250,223,100,
    121,150,100,7,163,126,199,76,202,202,123,121,160,14,93,254,
    202,38,147,12,115,197,220,178,84,170,25,236,236,199,105,228,
    15,179,232,56,145,106,154,88,249,251,113,34,125,159,7,191,
    26,230,89,161,158,22,69,86,184,100,85,38,38,89,80,127,
    209,36,3,39,89,41,251,180,26,47,227,18,123,69,179,247,
    115,230,72,2,176,164,244,113,36,203,176,136,115,133,155,165,
    57,210,108,226,214,167,109,226,166,84,216,12,72,138,50,15,
    66,57,200,101,150,39,114,16,14,194,44,73,226,180,28,14,
    100,40,119,30,238,12,242,34,123,37,67,69,175,62,189,31,
    200,225,195,187,247,131,7,247,127,243,232,215,123,59,15,30,
    236,12,246,142,227,36,26,188,252,236,209,32,31,169,195,44,
    29,12,31,14,226,84,73,180,92,50,184,104,179,123,56,99,
    145,86,127,19,31,248,49,235,237,31,202,36,151,69,155,168,
    155,36,153,232,137,89,209,18,182,232,139,57,238,117,177,191,
    109,205,136,103,49,105,30,146,53,8,119,182,65,218,63,129,
    55,20,17,241,202,130,108,1,196,9,131,18,103,227,182,35,
    156,118,5,141,90,60,122,7,132,178,42,122,108,19,58,136,
    186,136,223,48,254,16,136,56,247,49,193,65,164,232,9,132,
    161,38,193,92,131,11,81,169,225,150,205,225,88,147,190,32,
    86,22,45,209,128,217,188,135,220,167,153,106,17,149,101,25,
    231,155,34,65,181,41,206,32,109,21,69,248,51,163,120,183,
    79,58,61,99,44,169,195,184,204,222,164,188,99,212,103,199,
    219,69,115,61,31,125,189,71,27,81,222,64,194,183,217,177,
    19,6,105,154,41,39,136,34,39,80,170,136,247,142,149,44,
    29,149,57,183,75,134,166,187,96,224,88,243,27,229,6,126,
    4,21,132,159,126,137,226,80,225,203,18,191,240,214,148,82,
    33,148,14,179,168,68,58,177,56,144,202,109,26,188,31,6,
    37,173,168,230,176,255,123,179,52,227,183,223,50,104,43,101,
    178,175,58,12,220,160,44,125,94,154,232,140,81,226,244,58,
    72,142,165,106,49,20,3,133,18,80,87,47,58,9,40,165,
    196,86,219,130,180,245,211,44,141,70,40,126,28,222,36,201,
    214,25,171,93,88,64,124,174,226,211,22,43,98,10,230,196,
    186,88,176,66,210,180,81,225,148,49,186,74,118,1,134,134,
    168,2,18,226,245,12,3,87,223,226,176,195,42,179,103,19,
    119,142,69,238,22,53,219,212,92,163,230,186,177,202,39,54,
    77,247,125,211,220,35,113,44,182,71,104,87,154,215,222,233,
    94,240,206,185,49,239,60,35,47,35,15,179,200,21,207,61,
    204,38,235,100,51,198,119,216,131,17,50,228,83,231,30,195,
    86,115,123,100,141,150,1,187,75,8,30,135,241,193,24,140,
    93,218,48,198,176,187,121,149,133,157,137,179,240,129,182,240,
    125,18,103,182,66,220,28,35,109,70,132,4,23,178,195,148,
    177,245,31,176,51,90,35,91,143,27,121,13,179,237,11,170,
    180,48,107,114,234,197,200,246,82,231,219,202,244,186,211,32,
    108,238,219,176,90,165,194,146,98,50,234,246,118,228,100,251,
    142,2,35,195,227,219,229,189,219,229,239,48,206,56,159,115,
    228,210,145,70,199,146,66,230,5,198,140,54,191,104,223,247,
    57,14,248,85,54,195,157,160,210,130,55,144,237,207,33,165,
    196,112,130,209,110,18,140,223,169,141,79,186,236,144,44,29,
    182,188,13,107,248,116,4,11,236,103,28,141,185,238,225,81,
    124,190,164,61,32,51,72,160,250,215,221,213,234,176,166,164,
    179,219,191,128,175,79,171,167,251,11,92,248,11,227,185,45,
    168,209,68,143,77,154,144,35,253,21,184,96,20,240,23,32,
    228,32,64,42,215,99,71,55,206,190,68,211,201,20,39,226,
    191,166,97,171,114,98,171,10,128,232,229,121,151,179,107,149,
    150,177,166,251,219,88,116,60,179,65,112,174,180,171,186,112,
    60,87,54,106,207,103,220,253,168,124,216,184,16,34,220,141,
    58,10,216,117,20,56,15,177,117,25,135,225,237,19,99,113,
    90,75,225,147,66,79,207,145,72,89,231,154,88,182,198,240,
    117,135,154,187,53,180,132,161,125,58,217,111,192,213,25,212,
    215,97,153,226,85,217,96,149,230,91,172,172,97,80,251,85,
    211,248,213,131,218,175,36,103,138,119,124,188,160,214,34,144,
    156,89,2,207,143,88,89,209,177,173,1,178,9,94,139,60,
    144,107,103,81,57,168,48,129,146,2,236,133,60,52,102,201,
    26,38,26,8,212,188,157,0,127,101,243,60,78,130,225,94,
    20,124,254,61,73,66,226,132,198,99,45,163,90,111,92,53,
    242,53,113,133,118,252,250,75,163,226,235,9,80,209,165,52,
    87,171,198,46,24,101,33,199,161,111,14,165,51,148,195,61,
    60,129,30,198,185,179,159,4,7,188,171,118,165,250,215,70,
    117,197,176,120,191,80,40,127,78,109,230,132,89,138,153,230,
    56,84,89,225,68,18,79,101,50,114,238,58,156,166,156,184,
    116,130,61,28,13,66,165,221,231,98,128,224,234,53,40,14,
    74,46,84,143,222,80,119,2,108,86,165,221,56,141,177,132,
    255,147,177,157,62,40,214,57,135,43,117,237,139,184,62,158,
    182,212,72,7,208,71,212,144,109,220,159,193,4,165,166,1,
    46,252,29,73,64,166,110,137,45,44,174,89,5,51,231,57,
    125,81,94,142,17,255,248,49,49,66,223,46,85,145,162,69,
    51,229,20,221,20,80,219,166,212,228,117,12,113,134,219,89,
    38,118,13,113,142,219,121,38,246,12,113,129,219,69,38,46,
    25,226,50,183,43,76,92,133,234,2,108,141,137,235,124,199,
    211,98,202,38,197,169,169,255,49,78,177,39,79,194,222,145,
    15,135,255,207,240,228,62,152,68,205,220,95,65,85,34,93,
    21,154,196,184,218,93,29,154,98,97,78,52,188,105,207,180,
    150,124,69,179,114,9,223,126,88,200,64,73,189,189,91,147,
    97,4,14,126,90,46,89,111,178,209,180,105,180,221,169,181,
    61,227,178,113,180,60,118,216,224,61,23,47,210,30,29,72,
    78,216,32,190,165,207,36,80,219,165,81,219,133,174,139,82,
    249,198,191,104,27,125,228,32,97,130,60,151,105,116,126,156,
    224,145,9,176,20,199,214,35,168,107,182,89,60,59,44,227,
    115,217,201,73,215,49,213,121,187,155,181,95,79,200,198,51,
    250,115,179,229,125,182,116,157,95,92,218,112,157,81,234,100,
    226,254,182,222,194,237,203,208,198,133,124,148,247,168,164,19,
    238,135,39,96,245,200,199,201,154,162,54,47,79,47,50,172,
    246,11,205,237,3,195,196,139,34,109,245,206,53,234,123,83,
    243,130,22,194,66,97,95,31,191,63,58,135,120,210,177,120,
    156,168,174,95,254,104,236,82,150,249,126,100,10,178,117,187,
    87,88,79,190,253,136,245,206,39,24,235,213,20,198,37,71,
    155,72,38,82,201,247,28,75,209,46,86,215,39,40,142,42,
    178,17,30,224,249,196,139,239,137,239,79,76,145,240,25,46,
    188,7,213,221,26,21,9,45,190,131,51,191,237,70,91,112,
    245,246,222,127,42,180,232,63,1,115,198,27,241,13,21,184,
    243,53,92,249,58,221,148,73,28,202,200,128,207,130,161,190,
    227,228,11,58,247,22,53,63,53,136,231,72,164,111,4,248,
    92,173,239,63,48,108,113,105,201,149,164,75,183,100,124,57,
    245,101,80,198,225,87,169,250,35,110,135,255,90,82,49,202,
    81,78,171,56,62,170,22,46,146,93,134,45,51,209,212,39,
    73,22,30,201,72,223,12,243,63,41,52,125,55,30,86,52,
    10,36,81,17,160,29,249,134,93,22,113,144,196,63,200,177,
    185,204,153,87,91,52,194,233,117,140,108,181,204,79,223,126,
    72,230,106,84,45,215,100,247,120,111,244,36,75,17,67,73,
    130,98,247,46,12,236,142,74,37,135,44,85,45,45,23,126,
    23,50,33,3,177,144,7,113,73,138,207,143,79,174,18,1,
    193,64,109,93,118,129,241,15,39,5,179,250,12,167,239,193,
    62,231,107,175,231,216,244,232,246,120,190,45,166,44,204,17,
    248,219,17,115,162,41,102,187,109,187,221,106,55,109,196,53,
    81,150,196,140,221,238,204,138,171,126,55,16,239,29,107,3,
    249,252,7,37,116,215,161,
};

EmbeddedPython embedded_m5_internal_param_Topology(
    "m5/internal/param_Topology.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/build/X86/python/m5/internal/param_Topology.py",
    "m5.internal.param_Topology",
    data_m5_internal_param_Topology,
    2359,
    7581);

} // anonymous namespace