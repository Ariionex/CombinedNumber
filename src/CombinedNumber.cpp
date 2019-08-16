#include "CombinedNumber.hpp"
#include <list>
#include <vector>
#include <algorithm>

std::string CombinedNumber::constructGreatestNumber(std::list<unsigned int> l)
{
    if (l.empty())
        return "";
    else if(l.size()==1)
        return std::to_string(l.front());
    else
    {
    std::vector<unsigned int> numbers{};
    std::string strNumbers;
    unsigned int intNumbers;
    unsigned int max=0;

    move(l.begin(), l.end(), std::back_inserter(numbers));
    sort(numbers.begin(), numbers.end());
    do
    {
        strNumbers.clear();
        for(const auto & it:numbers)
            strNumbers.append(std::to_string(it));
        intNumbers=std::stoi(strNumbers);
        if(max<intNumbers)
            max=intNumbers;
    }while(next_permutation(numbers.begin(),numbers.end()));
    return std::to_string(max);
    }
}
