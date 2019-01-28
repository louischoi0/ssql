#include "fileBuffer.h"
#include <cstring>

namespace ssql{

fileBuffer::fileBuffer() :
    _allocated(0),
    _block(0){};

int fileBuffer::write(fOffset offset, char* content, bSize size) {
    std::memcpy( _block + offset, content, size);
};

}