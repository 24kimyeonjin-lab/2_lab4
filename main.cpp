#include "holiday.h"

namespace KimYeonjin2693058
{
    bool compareDayOfYear(const dayOfYear& d1, const dayOfYear& d2)
    {
    return d1.getMonth() == d2.getMonth() && d1.getDay() == d2.getDay();
    }
    
}

int main()
{
   using namespace KimYeonjin2693058;
   holiday h1; h1.print();
   holiday h2{dayOfYear{1,1}, true}; h2.print();

if(compareDayOfYear(h1.getDate(), h2.getDate()))
   std::cout << "same\n";
else 
    std::cout << "not same\n";


   return 0;
}