#pragma once
#include <map>
#include <vector>

namespace ssql{

using fBuffer = char*;
using fOffset = unsigned int;
using bSize = unsigned int;

class fileBuffer{

private:
    bSize _allocated;
    fBuffer _block; 
    std::vector<fOffset> _entry_points;

public:
    fileBuffer();

    fBuffer read(fOffset off) { return _block + off; };
    int write(fOffset , char*,bSize );

};


}