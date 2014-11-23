//
//  pasoc.h
//  Olymp
//
//  Created by Akirus on 23.11.14.
//  Copyright (c) 2014 Akirus Turchinovich. All rights reserved.
//

#ifndef Olymp_pasoc_h
#define Olymp_pasoc_h

#include <iostream>
#include <cstdio>
#include <cstdint>
#include <vector>
#include <cstdlib>

typedef std::int32_t longint;
typedef std::int32_t integer;
typedef std::int64_t int64;
typedef std::int16_t word;
typedef std::int8_t byte;
typedef std::string ansistring;
typedef bool boolean;

namespace pasoc {
    std::vector<longint*> st;
    int bst = 0;
    
    bool __st_pop_back(){
        st.pop_back();
        return false;
    }
}

#define begin { pasoc::bst++;
#define end pasoc::bst--;}
#define Program int main()
#define readln(a) std::cin >> (a)
#define write(a) std::cout << (a)
#define writeln(a) std::cout << (a) << std::endl
#define inc(a) (a)++
#define For(i) pasoc::st.push_back(&(i)); for(;
#define to *pasoc::st.back() <=
#define do  || pasoc::__st_pop_back(); (*pasoc::st.back())++)
#define Or ||
#define And &&
#define If if(
#define then )
#define Procedure void


#endif
