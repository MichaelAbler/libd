#include <string>
#include "libd.h"
#include "../libf/libf.h"  // Include parent depf header

std::string depd(void)
{
    std::string result = "... called D ";
    result += depf();  // depf() should return std::string in modern C++
    return result;
}