#include "schema.h"
#include "utility"
#include <string>

namespace ssql{

void column::set_name(char* n, int size){
    _name = std::pair<char*, int>(n,size);
};

std::string column::get_name(){
    return std::string(_name.first,_name.second);
}

int schema::load_schema(fBuffer fb){

};

int schema::add_column(column& col){
    _columns.push_back(&col);
};

};