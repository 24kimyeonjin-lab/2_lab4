#include "holiday.h"

namespace KimYeonjin2693058
{
    bool compareDayOfYear(const dayOfYear& d1, const dayOfYEar& d2)
    {
    return d1.getMonth() == d2.getMonth() && d1.getDate() == d2.getDate();
    }
    
}

int main()
{
   using namespace KimYeonjin2693058;
   holiday h1; h1.print();
   holiday h2{dayOfYear{12,25}, true}; h2.print();

if(compareDayOfYear(h1.getDate(), h2.getDate()))
   std::cout << "same\n";
else 
    std::cout << "not same\n";


   return 0;
}