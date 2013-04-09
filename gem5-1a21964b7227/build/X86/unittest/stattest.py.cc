#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_stattest[] = {
    120,156,197,87,91,111,220,68,20,62,99,123,119,179,215,220,
    218,244,66,75,23,68,165,21,180,89,26,209,6,68,85,149,
    75,31,120,73,145,247,33,105,64,178,54,246,36,113,186,177,
    45,123,210,178,104,243,194,86,192,159,225,47,240,203,144,224,
    124,199,246,102,83,81,9,94,146,77,60,58,30,143,207,229,
    155,239,156,51,246,169,248,53,248,122,218,37,202,254,98,33,
    224,127,69,47,137,70,138,118,21,41,173,40,88,166,163,10,
    197,55,72,5,21,122,67,180,107,145,182,104,202,130,77,63,
    88,20,181,249,1,191,85,165,151,182,76,41,26,55,72,59,
    180,91,161,237,104,149,28,93,165,163,6,197,53,82,252,139,
    44,82,59,65,141,130,5,122,195,22,88,168,139,206,5,10,
    26,34,212,41,104,138,208,160,241,18,233,38,237,182,136,215,
    239,182,89,217,61,86,214,17,101,93,81,22,240,163,21,10,
    218,88,207,254,188,192,82,7,75,115,43,29,209,179,72,193,
    162,8,172,205,166,112,9,66,176,36,51,203,50,179,12,129,
    221,31,244,86,25,128,240,111,254,245,20,75,166,197,195,43,
    157,102,97,28,121,97,180,31,135,22,158,87,49,0,55,31,
    67,141,175,54,95,223,0,192,63,72,208,11,172,2,192,83,
    98,104,20,48,125,105,209,169,8,167,22,141,123,52,81,20,
    58,20,216,52,97,51,21,154,42,58,80,52,181,232,71,27,
    11,78,121,116,56,220,46,57,38,199,238,74,30,110,174,170,
    70,167,21,154,84,104,160,118,38,22,102,142,234,20,247,73,
    253,124,75,244,46,136,94,139,38,60,58,52,117,232,180,74,
    219,188,138,167,194,58,96,226,215,56,88,236,217,160,231,176,
    199,91,115,33,35,156,32,76,163,225,177,54,117,150,189,204,
    12,141,209,153,233,53,202,199,113,182,158,12,205,161,43,235,
    109,128,113,156,24,209,19,71,218,52,89,216,15,163,192,59,
    142,131,147,145,54,11,80,226,237,135,35,237,121,242,240,187,
    227,36,78,205,179,52,141,83,23,120,202,228,40,30,206,222,
    168,0,218,81,156,233,30,172,137,25,23,234,13,86,239,39,
    162,17,14,136,143,120,57,208,153,159,134,137,225,109,202,53,
    98,53,180,245,176,65,50,100,28,44,245,225,69,150,12,125,
    221,79,116,156,140,116,223,239,251,241,104,20,70,217,113,95,
    251,122,243,225,102,63,73,227,35,237,27,220,122,184,63,208,
    199,15,239,63,24,110,60,248,226,209,103,123,155,27,27,155,
    253,189,147,112,20,244,119,62,127,212,63,137,66,129,166,95,
    98,180,158,140,205,10,172,189,14,15,188,80,226,244,14,245,
    40,209,41,160,204,110,194,19,181,164,90,170,170,108,213,83,
    29,145,218,44,223,178,154,106,43,68,164,62,162,7,195,236,
    146,83,127,146,108,29,239,253,145,69,241,50,169,137,208,143,
    87,243,6,51,113,6,10,79,45,121,122,143,148,177,138,249,
    208,6,15,48,187,194,239,8,211,152,114,188,246,49,54,94,
    69,156,219,96,75,5,132,206,105,196,252,203,137,21,119,248,
    89,5,111,64,149,5,19,14,181,146,37,214,190,32,179,22,
    102,197,151,121,189,17,79,48,105,56,3,121,110,141,93,248,
    69,248,58,232,33,166,45,225,142,57,12,179,248,117,36,59,
    4,89,82,108,192,112,125,63,126,190,7,224,179,59,60,241,
    34,62,233,250,195,40,138,77,119,24,4,93,6,55,13,247,
    78,24,225,174,137,187,119,51,161,162,187,92,210,111,166,111,
    156,148,116,3,53,152,110,249,77,16,250,134,111,86,229,70,
    182,38,211,134,169,115,24,7,25,207,67,197,129,54,110,165,
    228,247,225,48,131,69,211,97,249,171,210,180,240,181,87,45,
    217,149,233,209,190,105,8,81,135,89,230,137,105,204,11,39,
    161,233,213,112,116,162,13,214,131,28,236,1,196,220,232,101,
    176,242,186,164,114,17,59,162,243,162,56,10,198,236,110,232,
    127,0,79,174,11,55,219,180,204,124,92,227,171,174,174,170,
    26,117,212,117,181,108,249,136,204,41,120,41,156,92,3,14,
    36,84,80,69,169,97,126,78,185,36,245,44,41,40,18,162,
    100,46,180,75,149,113,223,195,112,11,195,109,12,239,151,40,
    92,48,20,237,183,161,88,135,121,75,226,247,237,34,210,89,
    246,185,231,178,175,51,151,125,83,100,17,50,200,66,170,157,
    101,144,13,52,226,102,153,27,146,161,76,9,228,204,89,70,
    8,74,238,18,162,175,150,100,118,193,208,121,154,30,204,209,
    212,197,6,9,71,221,155,239,66,180,123,233,136,30,228,136,
    62,128,249,86,193,168,142,48,169,169,124,208,1,113,215,74,
    108,191,101,97,124,13,216,206,131,122,141,251,228,54,206,20,
    220,239,164,105,114,165,218,201,59,101,1,117,46,56,224,222,
    190,77,107,69,19,203,80,99,57,150,159,198,221,120,191,107,
    168,244,225,241,221,108,253,110,246,37,215,141,238,19,169,68,
    121,229,200,107,67,170,147,148,107,128,116,58,47,207,101,79,
    242,218,43,186,17,35,127,21,136,90,37,222,82,34,50,46,
    15,92,189,46,3,236,198,12,108,248,190,9,219,13,65,218,
    166,107,124,53,148,56,232,197,82,77,229,132,34,79,249,250,
    26,152,35,108,77,56,217,185,131,220,125,137,12,49,186,189,
    115,252,185,216,184,220,79,216,208,211,50,19,171,52,99,11,
    46,27,158,35,49,126,227,3,128,2,97,126,37,48,131,9,
    80,164,146,36,110,153,188,171,88,142,208,39,234,95,219,166,
    85,36,165,85,20,48,206,218,164,45,221,176,104,163,124,218,
    250,125,174,186,77,109,82,210,219,236,226,196,54,223,219,156,
    89,38,11,175,254,83,255,114,206,165,188,123,99,150,213,246,
    44,171,207,74,228,236,152,197,229,234,130,185,182,144,91,245,
    16,192,179,51,166,161,75,220,86,87,172,57,254,220,195,112,
    127,70,29,85,206,93,156,175,119,232,221,29,206,203,203,40,
    234,77,230,72,8,139,213,115,169,33,229,72,14,184,179,210,
    46,49,108,229,209,201,161,178,77,121,47,135,65,254,26,8,
    205,165,165,74,159,13,61,167,179,166,245,127,35,105,205,71,
    146,158,68,151,22,200,167,108,104,112,22,136,208,255,173,111,
    172,220,173,149,89,14,140,165,35,147,187,56,139,70,62,7,
    210,152,15,217,102,44,103,182,156,5,179,41,212,246,45,62,
    150,229,95,28,56,142,184,31,98,248,8,195,199,208,0,99,
    121,189,148,42,148,119,131,72,191,150,126,32,137,233,226,140,
    32,184,139,207,151,5,152,196,250,56,111,76,79,164,15,109,
    240,176,132,227,218,98,93,213,172,22,127,74,216,170,193,31,
    22,21,213,106,215,237,122,181,94,177,249,19,3,51,171,170,
    105,215,155,117,11,127,255,0,183,93,103,10,
};

EmbeddedPython embedded_m5_internal_stattest(
    "m5/internal/stattest.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/build/X86/unittest/stattest.py",
    "m5.internal.stattest",
    data_m5_internal_stattest,
    1516,
    4090);

} // anonymous namespace
