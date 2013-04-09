#include "sim/init.hh"

namespace {

const uint8_t data_importer[] = {
    120,156,189,85,109,143,219,68,16,158,181,19,39,206,189,245,
    160,13,58,193,135,32,129,20,81,218,180,87,142,19,226,168,
    128,114,18,253,64,138,124,106,161,167,74,150,227,221,244,246,
    234,120,45,239,166,109,36,231,75,143,159,199,127,130,153,177,
    125,28,127,32,142,178,153,89,207,206,51,243,204,204,38,133,
    230,241,241,251,227,8,192,254,138,130,4,80,0,115,1,82,
    192,95,0,87,0,47,207,81,241,64,250,240,198,131,115,15,
    148,160,221,115,31,148,15,186,3,231,29,80,30,232,46,232,
    128,118,174,4,8,52,61,27,119,208,153,219,198,229,137,145,
    234,233,162,48,165,83,101,218,98,10,252,254,76,152,95,3,
    3,18,6,16,32,2,212,200,8,128,168,36,116,8,155,132,
    46,68,181,223,84,52,46,60,242,79,110,118,80,184,0,168,
    0,98,206,225,108,76,175,167,188,186,30,46,11,35,151,153,
    178,245,6,249,176,42,155,143,41,20,94,236,43,92,38,115,
    141,38,69,146,170,73,161,76,145,169,73,58,73,77,150,233,
    220,46,38,42,85,199,71,199,147,162,52,151,42,117,164,198,
    164,191,86,139,163,123,15,147,195,135,223,125,251,205,236,248,
    240,240,120,98,203,116,82,172,220,133,201,39,186,73,251,62,
    234,125,4,136,99,157,107,23,199,159,19,162,199,60,164,93,
    92,187,77,21,56,149,239,81,168,124,74,69,3,92,6,96,
    246,65,56,174,7,238,14,63,120,144,35,197,21,106,30,84,
    29,152,183,150,248,242,132,19,39,191,83,251,25,174,95,218,
    81,146,149,42,145,171,209,220,44,115,57,210,249,168,13,137,
    205,34,102,99,23,151,159,156,43,245,108,233,212,105,89,154,
    114,76,1,69,100,193,97,19,45,121,178,80,76,100,50,67,
    134,220,69,75,42,203,92,19,44,243,38,249,28,80,44,82,
    198,117,97,191,32,204,128,25,189,37,246,189,212,111,24,189,
    110,144,3,98,85,220,96,181,139,36,34,93,226,70,179,252,
    71,9,37,52,53,185,26,251,255,39,98,153,101,76,4,189,
    167,204,55,153,240,22,87,34,111,51,254,234,102,198,93,47,
    165,32,201,100,208,78,214,35,204,68,242,88,189,1,88,123,
    173,44,96,237,183,178,7,235,14,245,145,246,137,27,28,221,
    117,23,170,46,181,21,14,54,238,156,172,254,38,198,112,43,
    238,50,117,188,123,240,202,135,117,0,235,30,172,251,212,118,
    56,248,186,215,92,17,87,232,172,79,247,195,58,132,42,4,
    57,96,174,31,35,215,104,23,130,30,64,213,35,32,115,23,
    132,218,34,69,6,124,104,155,15,13,64,237,64,197,70,18,
    237,124,66,224,118,175,79,239,66,21,208,105,217,135,75,15,
    204,144,231,64,239,129,12,105,151,194,188,85,155,7,172,236,
    67,213,39,65,127,4,157,231,127,228,35,232,168,143,225,114,
    0,230,54,8,124,174,211,252,225,3,64,238,129,248,19,109,
    207,198,68,226,84,255,131,143,187,131,226,111,71,241,179,23,
    167,81,244,244,151,211,248,247,151,241,217,179,231,209,147,83,
    71,3,50,79,50,91,183,130,43,151,202,81,171,172,148,117,
    212,64,37,111,171,247,42,181,91,55,230,158,202,72,175,239,
    115,171,217,246,168,109,142,142,111,211,6,41,88,119,71,38,
    198,178,106,87,150,251,61,87,239,154,234,215,109,58,96,223,
    153,73,164,42,227,152,71,82,229,111,117,105,114,62,246,90,
    57,14,52,51,239,84,25,209,93,236,2,14,75,91,103,57,
    66,234,87,22,232,150,224,243,169,89,20,180,73,237,62,75,
    108,61,247,228,196,22,153,118,205,45,70,173,143,120,181,66,
    62,174,21,169,83,204,211,133,168,156,190,79,85,225,180,201,
    153,81,30,162,136,37,98,53,26,210,242,73,155,47,38,197,
    232,216,250,228,46,162,48,163,126,59,118,230,173,42,75,45,
    107,138,209,100,211,83,71,4,55,188,63,32,80,134,14,182,
    5,125,246,196,142,231,139,80,12,189,79,197,72,220,193,223,
    3,49,20,161,183,39,118,197,64,244,189,113,208,102,17,199,
    196,37,146,83,87,173,246,23,199,17,95,49,68,88,68,127,
    98,209,221,54,183,13,102,25,17,202,136,144,40,208,64,132,
    126,24,132,1,207,192,116,220,107,251,198,204,200,57,219,214,
    149,235,215,157,202,94,56,3,174,59,246,75,194,29,194,135,
    146,162,80,185,220,116,66,28,218,73,77,241,227,235,196,134,
    143,182,177,82,161,248,23,77,217,240,17,
};

EmbeddedPython embedded_importer(
    "importer.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/src/python/importer.py",
    "importer",
    data_importer,
    1003,
    2298);

} // anonymous namespace