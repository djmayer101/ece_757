/** \file L1Cache_Entry.cc
 *
 * Auto generated C++ code started by /filespace/people/n/nhaas/ECE757/ece_757/gem5-1a21964b7227/src/mem/slicc/symbols/Type.py:430
 */

#include <iostream>

#include "mem/protocol/L1Cache_Entry.hh"
#include "mem/ruby/common/Global.hh"
#include "mem/ruby/system/System.hh"

using namespace std;
/** \brief Print the state of this object */
void
L1Cache_Entry::print(ostream& out) const
{
    out << "[L1Cache_Entry: ";
    out << "CacheState = " << m_CacheState << " ";
    out << "Dirty = " << m_Dirty << " ";
    out << "DataBlk = " << m_DataBlk << " ";
    out << "]";
}
