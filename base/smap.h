#pragma once

#include <vector>
namespace ssql{

class schema;
class smap{

private:
    std::vector<schema> _schema_pool;
     

public:

    int add_schema();
    int remove_schema();
    int is_valid_schema(int);

};


};