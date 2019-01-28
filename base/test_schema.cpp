#include "fileBuffer.h"
#include "schema.h"

#include <iostream>

void test_schema() {
    ssql::column c;
    const char* _name = "account";
    c.set_name((char*)_name,7);

    ssql::column cc;
    const char* __name = "address";
    cc.set_name((char*)__name,7);

    ssql::schema sh;
    sh.add_column(c);
    sh.add_column(cc);

    struct op
    {
        op(){};

        ssql::column* _c;
        void operator()(ssql::column* c){
            std::cout << c->get_name().c_str() << std::endl;
        };
    };

    op o; 
    sh.op_columns(o);

};

int main(){
    test_schema();
}