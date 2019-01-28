#pragma once 

#include <vector>
#include <utility>
#include <algorithm>
#include "fileBuffer.h"
#include "copyNotAllowed.h"

namespace ssql{

class fileBuffer;

class column{

COPYING_NOT_ALLOWED(column)

    std::pair<char*, int> _name;
public:
    column() = default;
    void set_name(char*,int);
    std::string get_name();
};

class schema {

COPYING_NOT_ALLOWED(schema)

typedef int (*CL_OP)(column* c);

private:
    unsigned int _column_cnt;
    std::vector<column*> _columns;

public:
    schema() = default;

    int load_schema(fBuffer );
    int add_column(column& col);

    template<class T>
    void op_columns(T op){
        std::for_each(_columns.begin(), _columns.end(), op );
    };

};

};