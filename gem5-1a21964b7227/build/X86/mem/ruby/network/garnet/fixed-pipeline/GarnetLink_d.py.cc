#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_GarnetLink_d[] = {
    120,156,205,86,89,143,27,69,16,174,25,223,71,146,21,218,
    53,71,64,204,3,15,35,164,205,144,21,27,11,137,32,196,
    10,161,72,40,160,9,66,194,47,173,113,119,123,61,120,46,
    77,247,174,237,7,36,164,205,111,224,239,66,85,205,140,215,
    155,44,40,188,217,71,185,234,235,238,233,174,175,142,182,132,
    250,213,195,239,183,30,128,249,11,21,133,31,7,86,0,191,
    212,154,83,105,46,172,92,72,92,152,185,224,144,221,130,85,
    11,146,54,204,218,144,116,96,214,65,180,13,218,133,133,3,
    170,3,175,1,110,0,126,155,117,65,117,65,119,25,237,237,
    208,30,168,62,232,54,163,131,29,218,7,53,4,221,97,116,
    180,67,7,160,198,240,202,127,128,71,139,255,198,151,239,160,
    102,73,124,94,169,52,114,145,228,114,165,213,79,243,223,181,
    180,190,75,240,24,197,119,145,137,229,139,204,254,24,103,171,
    91,224,251,77,5,208,194,151,218,174,243,114,69,182,80,178,
    33,164,69,83,137,144,63,80,209,0,51,135,104,65,207,145,
    143,89,139,78,30,119,200,171,184,71,188,220,32,41,61,6,
    251,12,14,136,28,2,135,123,51,71,128,244,16,56,218,3,
    199,68,21,129,15,246,192,135,68,25,129,143,32,124,229,83,
    108,194,54,10,51,69,145,234,52,40,175,230,219,32,171,206,
    29,92,70,37,170,193,34,222,104,117,90,196,133,78,226,76,
    7,119,188,122,178,92,26,122,10,142,172,188,88,153,113,163,
    39,145,213,153,220,154,207,16,184,142,75,123,21,37,158,92,
    70,89,166,19,227,21,186,244,26,176,222,204,124,132,19,179,
    171,116,142,67,249,226,173,81,30,174,215,123,235,88,217,165,
    247,252,185,55,95,123,139,72,218,188,244,143,40,42,125,20,
    66,100,81,170,133,176,67,54,210,92,93,37,100,146,151,118,
    91,104,198,229,102,35,150,58,82,186,180,29,52,127,142,202,
    40,181,20,23,12,167,237,86,136,70,181,241,76,224,134,4,
    95,108,101,162,77,5,87,254,217,198,97,177,15,92,75,35,
    208,71,113,141,199,183,183,142,137,124,33,106,199,68,227,152,
    29,212,4,17,98,44,249,49,143,50,197,46,138,202,57,206,
    165,218,119,193,3,62,229,209,173,48,127,162,192,48,225,217,
    138,72,234,160,208,121,145,232,64,6,50,79,240,108,38,13,
    180,212,211,243,105,80,148,57,229,48,153,130,236,75,157,158,
    159,62,141,206,158,126,245,236,203,249,244,236,108,26,152,82,
    6,239,152,7,63,48,90,167,65,177,229,60,162,104,155,99,
    20,93,135,222,39,248,30,59,131,250,203,212,92,148,90,197,
    246,141,146,112,154,146,56,190,183,36,48,83,169,234,194,19,
    122,250,179,119,207,212,253,189,48,81,125,58,97,72,1,15,
    41,152,33,103,127,255,14,147,7,68,39,57,251,5,157,166,
    93,211,105,31,161,82,205,170,187,206,125,77,229,245,189,12,
    94,2,181,210,93,27,192,222,119,227,128,243,150,221,131,184,
    75,179,234,190,211,231,117,3,208,3,158,55,220,205,123,211,
    198,117,67,154,85,183,166,17,69,140,201,158,252,207,136,221,
    33,1,91,11,101,254,34,47,215,81,169,60,170,50,99,30,
    115,129,200,21,67,139,36,95,159,202,60,179,101,158,84,227,
    254,248,95,98,204,229,157,37,134,235,56,42,10,157,41,206,
    88,59,66,241,171,166,58,171,218,0,109,89,31,82,240,35,
    121,165,76,12,71,132,115,88,114,94,85,163,7,153,59,68,
    251,249,157,82,108,117,221,35,247,200,121,207,173,126,247,114,
    169,190,176,14,63,151,62,57,152,92,10,223,39,241,65,115,
    121,134,31,146,160,54,31,62,110,218,84,248,241,161,246,21,
    162,241,197,127,229,198,75,159,174,72,190,151,210,243,39,5,
    21,133,225,171,149,172,50,223,108,67,167,25,231,127,60,244,
    232,144,251,115,107,199,200,73,83,252,188,221,33,242,192,30,
    125,93,253,61,248,230,83,58,213,67,20,67,103,232,28,57,
    19,119,50,158,116,38,199,255,0,50,198,149,243,
};

EmbeddedPython embedded_m5_objects_GarnetLink_d(
    "m5/objects/GarnetLink_d.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/src/mem/ruby/network/garnet/fixed-pipeline/GarnetLink_d.py",
    "m5.objects.GarnetLink_d",
    data_m5_objects_GarnetLink_d,
    909,
    2756);

} // anonymous namespace
