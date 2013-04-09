/** \file Directory_Entry.cc
 *
 * Auto generated C++ code started by /filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/src/mem/slicc/symbols/Type.py:430
 */

#include <iostream>

#include "mem/protocol/Directory_Entry.hh"
#include "mem/ruby/common/Global.hh"
#include "mem/ruby/system/System.hh"

using namespace std;
/** \brief Print the state of this object */
void
Directory_Entry::print(ostream& out) const
{
    out << "[Directory_Entry: ";
    out << "DirectoryState = " << m_DirectoryState << " ";
    out << "DataBlk = " << m_DataBlk << " ";
    out << "Sharers = " << m_Sharers << " ";
    out << "Owner = " << m_Owner << " ";
    out << "]";
}
