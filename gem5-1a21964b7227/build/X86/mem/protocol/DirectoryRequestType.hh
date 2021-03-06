/** \file DirectoryRequestType.hh
 *
 * Auto generated C++ code started by /filespace/people/n/nhaas/ECE757/ece_757/gem5-1a21964b7227/src/mem/slicc/symbols/Type.py:474
 */

#ifndef __DirectoryRequestType_HH__
#define __DirectoryRequestType_HH__

#include <iostream>
#include <string>


// Class definition
/** \enum DirectoryRequestType
 *  \brief ...
 */
enum DirectoryRequestType {
    DirectoryRequestType_FIRST,
    DirectoryRequestType_Default = DirectoryRequestType_FIRST, /**< Replace this with access_types passed to the Directory Ruby object */
    DirectoryRequestType_NUM
};

// Code to convert from a string to the enumeration
DirectoryRequestType string_to_DirectoryRequestType(const std::string& str);

// Code to convert state to a string
std::string DirectoryRequestType_to_string(const DirectoryRequestType& obj);

// Code to increment an enumeration type
DirectoryRequestType &operator++(DirectoryRequestType &e);
std::ostream& operator<<(std::ostream& out, const DirectoryRequestType& obj);

#endif // __DirectoryRequestType_HH__
