#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector<char> ln;
    for( auto ite = people.begin(); ite != people.end(); ++ite)
    {
        ite->birthday();
        if(  ite->isMonster() == true)
            ln.insert(ln.begin(),'n');
        else
            ln.insert(ln.begin(),'y');
    }
    return ln;
}
