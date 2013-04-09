#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_EtherDevice[] = {
    120,156,205,88,235,110,219,200,21,62,67,74,178,37,91,182,
    124,137,47,177,147,48,187,201,66,104,147,168,113,155,120,139,
    6,193,166,73,126,236,143,205,6,244,2,73,216,110,9,154,
    28,217,180,41,82,32,199,206,106,97,255,169,131,182,47,211,
    87,232,211,244,61,218,115,206,112,104,57,78,182,139,182,64,
    36,155,131,195,225,240,240,92,190,115,153,9,161,252,93,197,
    235,43,7,160,248,167,0,136,240,95,192,33,64,34,192,19,
    32,164,128,104,9,14,234,144,173,131,136,234,240,14,192,179,
    64,90,112,134,132,13,127,176,32,109,227,3,124,171,1,135,
    54,79,9,24,181,64,214,192,171,195,171,116,9,106,178,1,
    7,45,200,166,64,224,47,181,64,188,142,166,32,154,134,119,
    248,5,36,154,204,115,26,162,22,19,77,136,102,152,104,193,
    168,3,114,6,188,89,192,245,94,27,153,221,65,102,115,204,
    204,97,102,17,62,90,134,168,77,235,81,158,55,180,180,70,
    75,245,87,230,152,207,60,148,210,117,192,235,24,122,1,188,
    5,67,47,130,183,104,232,37,240,150,12,189,12,222,178,161,
    175,128,119,197,208,43,224,173,24,122,21,188,85,67,175,129,
    183,102,232,117,240,214,13,125,21,188,171,134,222,0,111,195,
    208,155,224,109,26,250,26,120,215,12,125,29,188,235,16,205,
    131,236,64,124,3,250,232,128,78,165,160,3,210,134,248,38,
    120,55,65,226,191,3,103,232,163,104,129,215,126,198,107,23,
    171,181,159,243,218,91,224,221,2,137,255,159,235,181,13,216,
    233,94,65,143,199,255,194,95,23,61,14,106,22,135,99,153,
    23,113,150,250,113,218,207,98,139,158,55,104,32,124,132,52,
    76,225,213,198,235,41,1,229,239,192,40,137,172,18,40,167,
    128,140,5,201,127,104,193,41,19,167,22,140,186,112,34,32,
    174,65,100,195,9,126,166,78,2,236,9,56,179,224,143,54,
    45,56,197,177,134,110,117,160,166,52,70,150,181,91,53,171,
    41,56,173,195,73,29,118,196,235,19,139,102,14,154,144,245,
    64,252,184,201,124,167,153,175,5,39,56,214,224,172,6,167,
    13,120,133,171,112,42,110,146,5,240,53,84,150,176,185,211,
    173,161,196,47,198,84,38,117,162,56,79,131,129,84,139,72,
    251,195,32,15,6,254,115,181,47,243,103,242,56,14,101,183,
    101,214,101,197,189,97,160,246,93,126,209,38,171,12,134,138,
    25,102,169,84,51,72,244,227,52,242,7,89,116,148,72,53,
    77,220,252,126,156,72,223,231,135,95,15,134,89,174,158,231,
    121,150,187,100,88,158,76,178,160,122,163,78,54,78,178,66,
    118,233,107,252,25,151,216,43,90,221,31,50,71,18,128,133,
    165,151,35,89,132,121,60,84,232,47,205,145,86,19,183,46,
    121,138,135,226,45,14,61,146,162,24,6,161,236,13,101,54,
    76,100,47,236,133,89,146,196,105,49,232,201,80,110,63,216,
    238,13,243,236,64,134,138,110,125,186,223,147,131,7,119,239,
    7,91,247,127,251,240,55,187,219,91,91,219,189,221,163,56,
    137,122,175,191,124,216,27,142,212,126,150,246,6,15,122,113,
    170,36,26,47,233,93,50,219,61,92,180,200,2,196,123,126,
    204,170,251,251,50,25,202,188,73,179,148,107,64,116,196,172,
    104,8,91,116,197,28,83,109,164,55,173,25,241,34,38,229,
    67,50,8,161,207,54,120,251,7,176,91,17,23,7,22,100,
    11,32,78,24,154,184,26,157,143,160,218,17,244,212,226,167,
    119,64,40,171,156,143,109,194,8,205,46,226,59,140,66,132,
    35,174,125,68,160,16,41,198,3,33,169,78,96,215,16,67,
    108,106,208,101,115,248,172,78,111,16,43,139,62,81,131,217,
    97,7,185,79,243,172,69,179,44,203,56,223,20,39,84,147,
    178,16,206,173,160,8,127,102,44,239,116,73,167,23,12,39,
    181,31,23,217,219,148,157,70,52,135,223,14,154,235,229,232,
    219,93,242,69,113,3,39,222,100,71,78,24,164,105,166,156,
    32,138,156,64,169,60,222,61,82,178,112,84,230,220,46,24,
    157,238,130,65,100,197,111,52,52,8,36,180,32,2,245,77,
    20,135,10,111,150,248,134,93,83,72,133,104,218,207,162,2,
    231,137,197,158,84,110,221,64,126,63,40,232,139,106,14,233,
    39,230,211,12,225,110,195,0,174,144,73,95,181,24,187,65,
    81,248,252,105,154,103,152,18,167,227,32,57,146,138,214,23,
    42,80,40,1,145,250,163,19,2,212,53,178,135,49,7,41,
    236,167,89,26,141,80,131,56,188,73,194,173,49,92,219,176,
    128,16,93,193,171,41,174,136,41,152,19,107,98,193,10,73,
    217,90,9,85,134,233,10,153,6,24,29,162,204,76,8,217,
    51,204,96,93,139,243,15,107,205,241,77,220,57,41,185,27,
    52,108,210,112,141,134,235,198,48,159,222,58,237,247,173,115,
    143,36,178,216,36,161,93,42,95,197,168,123,33,70,231,198,
    98,244,140,98,141,226,204,162,128,60,143,51,155,12,148,205,
    152,8,226,56,70,224,80,100,157,199,13,27,206,237,144,65,
    26,6,242,46,225,120,28,204,123,99,96,118,201,103,140,100,
    247,234,199,140,236,76,162,145,247,180,145,239,147,68,179,37,
    238,230,24,111,51,34,36,208,144,41,166,140,185,159,33,49,
    90,37,115,143,219,121,21,139,239,43,106,200,176,136,114,37,
    198,20,247,90,151,223,210,250,154,168,17,66,251,54,172,148,
    149,177,160,228,140,234,253,48,114,178,190,163,192,200,240,232,
    118,113,239,118,241,59,76,56,206,99,78,97,58,229,232,164,
    146,203,97,142,201,163,201,55,58,9,248,156,16,252,178,178,
    161,51,168,211,96,31,178,11,56,183,20,152,87,48,237,77,
    136,253,91,149,253,73,157,109,18,167,197,198,183,97,21,175,
    150,96,153,253,140,51,51,119,66,252,20,175,223,147,27,200,
    18,18,168,83,118,119,180,70,172,44,169,237,118,47,160,236,
    147,171,234,254,18,191,253,149,9,225,6,84,152,162,203,38,
    101,40,162,254,10,220,69,10,248,11,16,126,16,38,101,12,
    114,196,155,168,95,162,229,100,141,19,241,193,170,108,149,209,
    108,149,201,16,195,125,216,230,98,91,86,105,108,244,254,54,
    150,41,207,108,16,92,58,237,178,89,28,47,157,181,42,5,
    48,250,126,86,121,172,93,200,21,238,122,149,14,236,42,29,
    156,167,219,170,177,195,60,247,201,221,196,193,133,130,248,164,
    211,243,115,60,82,17,186,38,150,173,49,148,221,161,225,110,
    5,48,97,230,62,169,248,55,224,227,53,213,215,89,154,114,
    87,81,99,173,230,27,220,209,142,241,168,98,172,110,98,108,
    171,138,49,201,181,227,29,111,62,104,180,8,45,103,150,192,
    93,39,118,92,180,217,171,129,172,131,215,160,104,228,182,90,
    148,193,42,76,222,164,124,123,161,50,141,217,179,194,139,70,
    4,13,63,76,70,236,50,40,30,37,193,96,55,10,30,255,
    137,132,33,137,66,19,189,150,209,174,51,174,29,197,157,248,
    136,130,124,251,43,163,229,241,100,104,233,82,237,171,180,227,
    136,140,178,144,211,210,119,251,210,25,200,193,46,238,82,247,
    227,161,211,79,130,61,246,173,93,106,255,173,209,94,49,56,
    222,111,32,138,95,208,152,57,97,150,98,249,57,10,85,150,
    59,145,196,109,155,140,156,187,14,215,46,39,46,156,96,23,
    159,6,161,210,161,116,49,95,112,111,27,228,123,5,183,177,
    135,111,137,156,12,179,149,229,56,78,99,236,241,125,99,62,
    189,153,172,10,17,183,242,58,46,81,4,220,142,169,145,78,
    169,15,105,32,243,184,95,192,100,213,171,30,126,251,123,18,
    130,12,222,16,27,216,125,171,133,139,201,226,37,189,87,92,
    78,25,111,126,78,202,208,71,84,184,64,54,32,158,226,113,
    154,42,149,215,52,217,164,197,147,250,8,74,31,125,181,41,
    179,52,254,199,204,194,129,55,33,70,190,175,45,245,255,75,
    40,238,214,132,42,231,254,26,202,30,231,99,201,196,42,33,
    196,154,111,235,100,162,125,137,157,208,104,121,172,139,102,67,
    136,87,105,135,58,237,19,238,193,125,75,55,219,228,120,98,
    246,66,247,32,124,62,67,81,152,202,183,254,37,228,234,118,
    154,240,20,12,135,50,141,206,91,101,126,50,33,102,164,20,
    177,15,85,39,50,139,125,241,50,94,151,67,128,52,30,51,
    0,99,189,94,161,126,99,114,52,34,96,12,170,76,57,119,
    33,83,186,228,121,157,27,171,180,168,221,248,224,67,201,199,
    231,35,46,254,92,31,245,240,177,196,164,40,46,157,165,134,
    217,81,170,104,95,247,95,190,137,13,20,183,83,255,97,29,
    251,135,207,50,34,153,72,37,47,195,76,145,54,229,94,57,
    146,88,227,178,17,110,213,120,99,131,247,137,239,79,82,218,
    255,82,131,72,111,64,41,237,55,112,19,220,172,53,5,215,
    226,247,206,166,181,204,183,193,52,240,35,62,135,0,119,190,
    114,26,159,158,154,138,199,65,77,27,214,23,193,64,159,103,
    241,73,140,251,25,13,183,140,203,57,32,245,142,143,55,77,
    122,139,139,1,204,141,2,247,5,46,157,133,40,250,138,214,
    225,101,24,107,13,184,206,150,115,73,160,250,89,62,224,162,
    165,167,190,78,85,254,52,195,33,75,248,216,79,207,238,140,
    10,37,7,204,77,166,71,3,255,27,57,200,242,209,55,89,
    36,57,115,60,41,187,18,61,237,31,75,106,95,212,114,245,
    250,197,231,99,66,225,132,62,81,228,179,18,61,247,52,201,
    194,67,25,149,243,231,107,119,98,179,150,2,54,202,3,116,
    18,159,216,202,60,14,146,248,71,201,24,122,18,69,185,27,
    164,123,210,72,113,206,224,217,32,40,45,48,102,149,56,43,
    231,200,162,218,70,92,214,25,173,99,126,103,104,230,114,47,
    70,67,104,166,149,65,203,68,73,168,80,215,63,24,70,227,
    239,78,16,144,117,207,174,79,66,30,243,193,199,119,56,116,
    232,20,113,190,41,166,44,76,163,248,215,18,115,162,46,102,
    219,77,187,217,104,214,109,4,59,205,44,137,25,187,217,154,
    21,63,245,183,142,33,209,178,214,91,77,241,111,19,159,89,
    189,
};

EmbeddedPython embedded_m5_internal_param_EtherDevice(
    "m5/internal/param_EtherDevice.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/build/X86/python/m5/internal/param_EtherDevice.py",
    "m5.internal.param_EtherDevice",
    data_m5_internal_param_EtherDevice,
    2273,
    7114);

} // anonymous namespace
