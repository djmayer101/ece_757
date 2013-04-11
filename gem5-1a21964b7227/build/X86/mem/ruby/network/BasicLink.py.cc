#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_BasicLink[] = {
    120,156,197,84,221,111,211,48,16,119,250,221,174,176,193,164,
    189,129,194,91,53,177,69,171,54,10,18,66,136,193,195,36,
    4,40,67,72,236,37,184,201,181,241,154,216,145,237,106,205,
    243,248,191,225,206,93,186,78,72,211,16,18,75,155,211,221,
    249,114,31,254,253,236,152,93,61,77,124,223,250,140,153,31,
    168,36,248,247,216,140,177,175,164,213,216,204,99,89,141,157,
    213,152,151,212,25,212,216,196,99,73,131,253,100,236,146,177,
    239,103,117,150,52,25,212,157,183,181,242,54,88,210,174,188,
    157,149,183,201,146,46,59,29,244,176,136,248,133,207,192,67,
    205,146,216,93,170,93,20,167,34,255,60,62,135,216,58,235,
    29,55,34,254,40,228,44,174,122,173,147,151,122,253,134,10,
    48,118,230,81,199,216,30,54,141,221,64,131,137,38,181,125,
    137,102,203,153,109,134,141,99,203,151,56,69,167,10,104,186,
    128,110,101,214,169,123,10,232,177,240,116,208,198,212,97,13,
    133,121,130,34,135,60,208,243,113,25,72,176,23,74,207,130,
    85,83,251,105,234,34,78,222,251,66,250,26,50,110,133,146,
    190,85,190,178,41,104,63,195,24,35,220,104,148,18,151,65,
    198,165,217,69,125,10,18,180,136,253,49,151,201,133,72,108,
    234,79,120,108,149,126,238,207,205,156,103,89,73,25,199,165,
    5,99,134,24,62,55,144,80,94,13,198,226,103,214,215,106,
    110,133,156,82,148,73,149,198,56,235,23,28,211,112,201,179,
    210,8,51,216,160,178,29,20,81,36,121,14,81,100,123,206,
    200,85,50,207,200,108,80,64,89,128,243,199,139,69,148,2,
    79,64,91,98,195,23,174,121,110,105,175,79,164,93,54,143,
    179,68,216,104,11,245,227,50,206,192,132,180,108,183,80,172,
    134,136,150,67,184,160,11,16,211,212,14,8,179,107,97,166,
    40,130,137,192,207,11,30,67,80,128,42,50,8,226,32,86,
    25,86,48,121,0,49,140,142,70,65,161,21,145,128,204,136,
    236,41,228,71,123,7,124,120,240,234,197,225,120,52,28,142,
    2,163,227,224,22,104,138,210,33,248,140,138,246,81,180,60,
    250,109,122,143,155,155,158,237,87,212,250,176,176,55,216,85,
    171,216,245,242,175,216,69,102,135,56,134,140,66,254,208,14,
    134,15,239,198,159,7,24,129,93,128,70,220,124,169,18,48,
    219,75,70,169,9,130,187,230,23,180,211,238,240,132,132,92,
    232,138,208,70,135,142,174,132,180,165,154,33,150,58,86,210,
    106,220,81,68,147,252,176,176,17,165,176,27,213,220,33,210,
    231,106,17,139,184,197,176,127,3,169,255,15,23,53,191,71,
    69,123,107,112,173,131,133,84,252,71,176,154,21,88,109,7,
    86,103,5,214,246,221,192,122,68,177,110,235,124,60,231,74,
    130,15,50,113,128,173,121,221,209,71,255,18,176,238,109,128,
    133,148,208,157,22,66,32,226,215,234,248,222,225,160,169,14,
    255,132,227,211,160,85,93,213,249,209,126,65,247,132,113,16,
    161,181,186,187,67,175,186,65,29,170,46,215,61,206,226,120,
    254,122,121,241,189,121,74,197,201,209,243,182,106,59,253,157,
    246,111,142,120,163,236,
};

EmbeddedPython embedded_m5_objects_BasicLink(
    "m5/objects/BasicLink.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/src/mem/ruby/network/BasicLink.py",
    "m5.objects.BasicLink",
    data_m5_objects_BasicLink,
    710,
    1799);

} // anonymous namespace
