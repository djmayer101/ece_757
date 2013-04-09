#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_X86LocalApic[] = {
    120,156,197,82,77,111,218,64,16,29,243,25,8,170,162,30,
    122,182,84,85,162,149,138,5,42,144,162,170,106,170,244,16,
    41,141,34,232,161,245,197,90,214,3,222,224,47,121,23,4,
    103,250,191,219,153,53,16,14,189,215,107,143,231,189,125,246,
    190,217,29,9,135,171,73,207,23,23,64,63,80,18,210,237,
    192,10,32,118,192,119,192,97,92,129,85,5,126,28,178,106,
    153,85,97,85,131,184,14,126,157,52,53,192,58,44,28,8,
    235,240,27,96,15,240,203,111,64,216,128,89,151,255,173,254,
    208,213,117,40,51,23,20,230,107,21,135,223,210,77,201,112,
    120,87,166,47,40,124,21,90,201,71,149,221,226,70,73,52,
    29,162,126,94,143,238,51,41,226,155,92,73,121,244,92,101,
    45,123,190,165,4,129,173,146,43,191,194,230,253,42,27,245,
    173,41,242,185,39,166,1,216,4,178,201,249,5,96,11,84,
    155,205,146,197,61,41,47,97,90,58,157,242,111,245,203,114,
    209,187,217,205,100,114,151,26,44,138,117,110,180,126,69,180,
    40,100,228,109,175,71,158,58,241,189,40,210,175,105,234,49,
    43,140,187,200,10,87,99,26,170,116,233,158,36,110,130,90,
    139,37,133,55,231,186,2,37,170,205,191,149,134,141,244,83,
    173,39,244,190,23,6,83,185,179,31,137,244,76,109,50,55,
    47,178,92,44,73,224,154,168,200,214,203,136,222,74,187,161,
    221,190,94,183,115,220,244,32,72,69,130,65,96,218,22,36,
    89,184,142,25,214,88,176,203,209,180,40,145,219,109,32,99,
    161,181,85,49,138,80,132,88,88,248,93,104,90,151,221,91,
    72,46,130,196,82,246,211,89,44,54,104,39,91,135,73,205,
    140,169,115,197,162,16,137,105,62,87,98,46,15,154,184,196,
    93,62,209,231,160,231,20,188,133,138,81,231,66,162,151,99,
    150,199,232,73,79,102,113,172,82,157,120,180,115,227,225,216,
    163,226,159,80,26,134,1,227,37,38,195,247,125,49,232,127,
    28,125,152,143,7,131,177,167,11,233,157,206,236,188,145,122,
    249,206,30,118,143,215,227,198,107,56,229,232,208,104,57,15,
    182,29,108,161,201,176,23,226,66,165,168,167,108,206,214,71,
    92,206,69,105,187,183,140,138,108,187,51,13,2,101,227,78,
    43,199,110,250,63,181,89,95,159,202,83,254,252,150,215,101,
    226,202,105,211,184,170,252,5,179,102,250,88,
};

EmbeddedPython embedded_m5_objects_X86LocalApic(
    "m5/objects/X86LocalApic.py",
    "/filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/src/arch/x86/X86LocalApic.py",
    "m5.objects.X86LocalApic",
    data_m5_objects_X86LocalApic,
    540,
    1018);

} // anonymous namespace