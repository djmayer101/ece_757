#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86ACPIRSDP[] = {
    120,156,205,89,253,110,219,200,17,159,37,37,217,146,45,89,
    254,182,19,95,143,45,154,66,232,37,81,227,54,241,181,13,
    130,75,147,251,35,192,193,9,168,180,246,169,87,16,52,185,
    182,233,80,164,64,174,157,232,96,255,83,7,109,95,163,15,
    208,87,232,171,181,51,179,92,90,182,227,220,1,45,16,217,
    230,98,185,187,156,157,143,223,124,236,58,128,226,103,1,159,
    175,28,128,252,189,0,8,241,79,192,27,128,88,64,95,128,
    144,2,194,69,56,170,66,186,14,34,172,194,123,128,190,5,
    210,130,115,236,216,240,103,11,146,38,78,224,87,53,120,99,
    243,144,128,81,3,100,5,250,85,216,73,22,161,34,107,112,
    212,128,116,10,4,254,36,22,136,221,112,10,194,105,192,237,
    250,216,169,51,205,105,8,27,220,169,67,56,195,157,6,140,
    218,32,103,160,63,11,184,190,223,68,98,119,145,88,139,137,
    57,76,44,196,169,37,8,155,180,30,249,249,150,150,86,104,
    169,222,165,197,116,230,160,224,174,13,253,182,233,207,67,127,
    222,244,23,160,191,96,250,139,208,95,52,253,37,232,47,153,
    254,50,244,151,77,127,5,250,43,16,206,129,92,132,104,21,
    246,81,65,237,146,129,53,144,54,68,235,208,95,7,137,127,
    107,112,142,58,12,231,121,237,45,94,187,80,174,189,205,107,
    55,160,191,1,18,255,110,235,181,53,232,117,150,209,34,209,
    127,240,167,131,22,1,53,139,205,137,204,242,40,77,188,40,
    217,79,35,139,230,107,212,144,253,2,106,166,240,105,226,243,
    140,12,249,47,96,43,134,86,97,200,51,64,194,130,248,127,
    99,193,25,119,206,44,24,117,224,84,64,84,129,208,134,83,
    220,166,74,12,28,8,56,183,224,59,155,22,156,97,91,65,
    181,59,80,81,218,134,75,90,237,154,212,20,156,85,225,180,
    10,61,177,123,106,209,200,81,29,210,46,136,239,55,152,238,
    52,211,181,224,20,219,10,156,87,224,172,6,59,184,10,135,
    162,58,105,0,63,67,97,9,59,189,78,5,57,222,30,19,
    153,196,9,163,44,241,7,82,17,62,189,161,159,249,3,111,
    247,203,71,79,159,189,122,225,246,158,191,234,52,204,186,52,
    191,63,244,213,161,203,31,218,164,149,193,80,49,193,52,145,
    106,6,59,251,81,18,122,131,52,60,142,165,154,38,106,222,
    126,20,75,207,227,201,23,131,97,154,169,175,179,44,205,92,
    82,44,15,198,169,95,126,81,37,29,199,105,46,59,180,27,
    111,227,18,121,69,171,247,135,76,145,24,96,102,233,227,80,
    230,65,22,13,21,218,75,83,164,213,68,173,67,150,226,38,
    127,139,77,151,184,200,135,126,32,187,67,153,14,99,217,13,
    186,65,26,199,81,146,15,186,50,144,91,15,183,186,195,44,
    61,146,129,162,87,143,222,15,228,224,225,189,7,254,230,131,
    223,62,250,205,222,214,230,230,86,119,239,56,138,195,46,106,
    166,59,28,169,195,52,233,14,30,118,163,68,73,84,94,220,
    189,166,182,251,184,104,129,25,136,14,188,136,69,247,14,101,
    60,148,89,157,70,111,17,115,162,45,102,69,77,216,162,35,
    90,220,107,98,127,195,154,17,219,17,9,31,144,66,8,125,
    182,193,219,191,129,205,138,184,56,178,32,157,7,113,202,208,
    196,213,104,124,4,85,79,208,172,197,179,119,65,40,171,24,
    143,108,194,8,141,46,224,55,140,66,132,35,174,125,76,160,
    16,9,250,3,33,169,74,96,215,16,67,108,106,208,165,45,
    156,171,210,23,68,202,162,45,42,48,59,108,35,245,105,30,
    181,104,148,121,25,167,155,224,128,170,83,148,192,177,21,100,
    225,175,140,229,94,135,100,218,102,56,169,195,40,79,223,38,
    108,52,234,179,251,245,80,93,175,70,47,247,200,22,249,231,
    56,240,109,122,236,4,126,146,164,202,241,195,208,241,149,202,
    162,189,99,37,115,71,165,206,157,156,209,233,206,27,68,150,
    244,70,67,131,64,66,11,34,80,191,132,81,160,240,101,145,
    95,216,52,185,84,136,166,195,52,204,113,156,72,28,72,229,
    86,13,228,15,253,156,118,84,45,236,63,53,91,51,132,59,
    53,3,184,92,198,251,170,193,216,245,243,220,227,173,105,156,
    97,74,148,78,252,248,88,42,90,159,43,95,33,7,212,213,
    155,78,8,80,215,72,31,70,29,36,176,151,164,73,56,66,
    9,162,224,167,196,220,26,195,181,9,243,8,209,21,124,234,
    98,89,76,65,75,172,137,121,43,32,97,43,5,84,25,166,
    43,164,26,96,116,136,34,50,33,100,207,49,130,117,44,142,
    63,44,53,251,55,81,231,160,228,222,166,102,131,154,207,168,
    249,137,81,204,167,215,78,243,170,118,238,19,71,22,171,36,
    176,11,225,75,31,117,47,249,104,107,204,71,207,201,215,200,
    207,44,114,200,11,63,179,73,65,233,140,241,32,246,99,4,
    14,121,214,133,223,176,226,220,54,41,164,102,32,239,18,142,
    199,193,124,48,6,102,151,108,198,72,118,111,221,164,100,103,
    18,149,124,160,149,252,128,56,154,45,112,215,98,188,205,136,
    128,64,67,170,152,50,234,126,142,157,209,42,169,123,92,207,
    171,152,124,119,168,96,194,36,202,153,24,67,220,174,78,191,
    133,246,117,167,66,8,221,183,97,165,200,140,57,5,103,20,
    239,221,200,73,247,29,5,134,135,199,119,242,251,119,242,223,
    99,192,113,158,112,8,211,33,71,7,149,76,14,51,12,30,
    117,126,209,65,192,227,128,224,21,153,13,141,65,149,6,219,
    144,77,192,177,37,199,184,130,97,111,66,244,223,40,245,79,
    226,108,17,59,13,86,190,13,171,248,52,4,243,236,165,28,
    153,185,18,226,89,124,254,64,102,32,77,72,160,74,214,237,
    105,137,88,88,18,219,237,92,66,217,39,23,213,253,2,247,
    254,202,184,112,13,74,76,209,99,147,48,228,81,127,7,174,
    34,5,252,13,8,63,8,147,194,7,217,227,141,215,47,210,
    114,210,198,169,248,96,86,182,10,111,182,138,96,136,238,62,
    108,114,178,45,178,52,22,122,255,24,139,148,231,54,8,78,
    157,118,81,44,142,167,206,74,25,2,24,125,63,42,61,86,
    46,197,10,119,189,12,7,118,25,14,46,194,109,89,216,97,
    156,251,228,102,98,231,66,70,60,146,233,235,11,60,82,18,
    250,76,44,89,99,40,187,75,205,189,18,96,194,140,125,82,
    246,63,135,155,115,170,167,163,52,197,174,188,194,82,205,213,
    20,153,0,105,188,232,61,245,158,189,252,230,229,118,207,35,
    114,166,79,100,75,183,171,26,183,219,44,221,78,114,58,121,
    207,231,17,106,45,2,208,185,37,240,160,136,69,24,157,207,
    42,32,171,208,175,145,131,114,165,45,10,255,21,38,148,82,
    8,190,148,172,198,84,92,66,72,131,132,154,119,147,225,206,
    140,147,199,177,63,216,11,253,39,127,34,102,136,163,192,56,
    180,101,164,107,143,75,71,174,40,110,16,144,95,127,101,164,
    60,153,12,41,93,74,135,165,116,236,164,97,26,112,164,122,
    125,40,157,129,28,236,225,193,245,48,26,58,251,177,127,192,
    182,181,11,233,95,26,233,21,131,227,106,77,145,255,146,218,
    212,9,210,4,51,210,113,160,210,204,9,37,158,228,100,232,
    220,115,56,157,57,81,238,248,123,56,235,7,74,123,215,229,
    16,194,229,174,159,29,228,92,217,190,121,75,221,201,80,91,
    145,161,163,36,194,178,127,199,168,79,159,47,203,220,196,213,
    189,118,85,100,1,79,104,106,164,163,236,35,106,72,61,238,
    47,96,178,82,88,23,247,254,35,49,65,10,175,137,219,88,
    144,171,121,29,63,204,178,87,244,93,126,61,100,252,243,199,
    132,12,125,171,84,4,142,26,173,148,83,116,211,64,109,157,
    178,88,191,97,6,103,184,157,229,193,166,25,108,113,59,199,
    131,109,51,56,207,237,2,15,46,66,113,199,181,196,131,203,
    124,213,83,227,145,85,138,80,83,255,99,132,98,7,158,16,
    99,145,235,254,229,255,25,152,220,205,9,21,206,253,53,20,
    229,211,77,65,73,140,75,222,212,65,41,18,230,216,195,166,
    219,214,130,242,133,206,218,135,48,237,5,153,244,149,212,118,
    190,61,49,170,224,224,167,89,243,74,107,27,121,171,70,230,
    173,82,230,115,46,44,71,75,99,135,18,54,190,216,73,218,
    116,112,57,101,181,120,150,62,187,64,169,157,74,169,29,138,
    96,137,124,235,93,211,144,62,157,16,63,254,112,40,147,240,
    226,228,193,51,147,161,47,14,175,33,148,133,221,44,30,51,
    150,240,185,238,246,21,189,208,40,128,237,94,45,61,125,114,
    16,192,206,16,25,219,119,248,0,94,102,25,151,44,175,243,
    74,153,82,220,223,149,182,188,245,65,164,103,121,168,232,64,
    252,177,105,44,47,57,1,211,139,218,248,224,186,84,14,188,
    40,100,66,31,93,64,164,8,53,250,213,84,164,87,55,149,
    39,17,95,145,19,185,31,88,66,4,41,5,155,129,27,228,
    120,247,113,49,223,141,139,73,47,12,29,14,14,161,140,37,
    250,219,181,111,20,41,186,184,21,9,37,150,46,233,8,15,
    229,124,132,197,247,216,243,38,41,155,127,137,123,127,71,76,
    44,129,206,230,53,190,96,211,191,245,74,93,112,169,117,229,
    191,17,154,119,58,188,233,35,219,136,111,158,192,157,43,33,
    197,247,229,166,160,225,184,67,87,20,219,254,64,223,96,242,
    221,155,251,51,106,126,110,80,169,173,207,103,124,62,38,235,
    75,13,140,49,92,7,114,217,231,210,237,23,23,27,87,101,
    121,61,110,190,222,40,127,46,243,224,181,191,23,75,239,68,
    82,89,169,214,175,126,52,190,72,205,149,179,189,104,160,111,
    128,249,250,52,204,124,84,31,223,154,203,44,242,227,232,123,
    121,125,251,93,218,158,214,148,223,114,141,164,190,128,31,58,
    84,49,70,50,121,16,229,104,34,102,162,36,81,4,83,50,
    207,13,64,31,255,118,130,16,165,207,68,250,242,233,9,223,
    53,209,81,179,77,23,183,115,117,49,101,97,168,197,223,134,
    104,137,170,152,109,214,237,122,173,94,181,17,117,52,178,40,
    102,236,122,99,86,140,255,174,35,6,27,214,122,171,46,254,
    11,253,157,113,100,
};

EmbeddedPython embedded_m5_internal_param_X86ACPIRSDP(
    "m5/internal/param_X86ACPIRSDP.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/build/X86/python/m5/internal/param_X86ACPIRSDP.py",
    "m5.internal.param_X86ACPIRSDP",
    data_m5_internal_param_X86ACPIRSDP,
    2277,
    7373);

} // anonymous namespace