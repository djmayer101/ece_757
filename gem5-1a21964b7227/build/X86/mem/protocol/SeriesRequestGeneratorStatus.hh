/** \file SeriesRequestGeneratorStatus.hh
 *
 * Auto generated C++ code started by /filespace/people/n/nhaas/ECE757/ece_757/gem5-1a21964b7227/src/mem/slicc/symbols/Type.py:474
 */

#ifndef __SeriesRequestGeneratorStatus_HH__
#define __SeriesRequestGeneratorStatus_HH__

#include <iostream>
#include <string>


// Class definition
/** \enum SeriesRequestGeneratorStatus
 *  \brief ...
 */
enum SeriesRequestGeneratorStatus {
    SeriesRequestGeneratorStatus_FIRST,
    SeriesRequestGeneratorStatus_Thinking = SeriesRequestGeneratorStatus_FIRST, /**< Doing work before next action */
    SeriesRequestGeneratorStatus_Request_Pending, /**< Request pending */
    SeriesRequestGeneratorStatus_NUM
};

// Code to convert from a string to the enumeration
SeriesRequestGeneratorStatus string_to_SeriesRequestGeneratorStatus(const std::string& str);

// Code to convert state to a string
std::string SeriesRequestGeneratorStatus_to_string(const SeriesRequestGeneratorStatus& obj);

// Code to increment an enumeration type
SeriesRequestGeneratorStatus &operator++(SeriesRequestGeneratorStatus &e);
std::ostream& operator<<(std::ostream& out, const SeriesRequestGeneratorStatus& obj);

#endif // __SeriesRequestGeneratorStatus_HH__
