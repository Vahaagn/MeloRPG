//
// Created by matgi on 18.10.2016.
//

#ifndef MELORPG_STDPATCH_H
#define MELORPG_STDPATCH_H

#include <string>
#include <sstream>

namespace utils
{
    template < typename T > std::string to_string( const T& n )
    {
        std::ostringstream stm ;
        stm << n ;
        return stm.str() ;
    }
}

#endif //MELORPG_STDPATCH_H
