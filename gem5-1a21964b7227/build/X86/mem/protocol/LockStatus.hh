/** \file LockStatus.hh
 *
 * Auto generated C++ code started by /filespace/people/n/nhaas/ECE757/ece_757/gem5-1a21964b7227/src/mem/slicc/symbols/Type.py:474
 */

#ifndef __LockStatus_HH__
#define __LockStatus_HH__

#include <iostream>
#include <string>


// Class definition
/** \enum LockStatus
 *  \brief ...
 */
enum LockStatus {
    LockStatus_FIRST,
    LockStatus_Unlocked = LockStatus_FIRST, /**< Lock is not held */
    LockStatus_Locked, /**< Lock is held */
    LockStatus_NUM
};

// Code to convert from a string to the enumeration
LockStatus string_to_LockStatus(const std::string& str);

// Code to convert state to a string
std::string LockStatus_to_string(const LockStatus& obj);

// Code to increment an enumeration type
LockStatus &operator++(LockStatus &e);
std::ostream& operator<<(std::ostream& out, const LockStatus& obj);

#endif // __LockStatus_HH__
