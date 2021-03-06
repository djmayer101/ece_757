/** \file LinkDirection.hh
 *
 * Auto generated C++ code started by /filespace/people/n/nhaas/ECE757/ece_757/gem5-1a21964b7227/src/mem/slicc/symbols/Type.py:474
 */

#ifndef __LinkDirection_HH__
#define __LinkDirection_HH__

#include <iostream>
#include <string>


// Class definition
/** \enum LinkDirection
 *  \brief ...
 */
enum LinkDirection {
    LinkDirection_FIRST,
    LinkDirection_In = LinkDirection_FIRST, /**< Inward link direction */
    LinkDirection_Out, /**< Outward link direction */
    LinkDirection_NUM
};

// Code to convert from a string to the enumeration
LinkDirection string_to_LinkDirection(const std::string& str);

// Code to convert state to a string
std::string LinkDirection_to_string(const LinkDirection& obj);

// Code to increment an enumeration type
LinkDirection &operator++(LinkDirection &e);
std::ostream& operator<<(std::ostream& out, const LinkDirection& obj);

#endif // __LinkDirection_HH__
