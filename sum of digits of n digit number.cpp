#include <iostream>
using namespace std;
class gfg {
public:

    int sumDigits(int no)

    {

        if (no == 0) {

            return 0;

        }
 

        return (no % 10) + sumDigits(no / 10);

    }
};
 
// Driver code

int main(void)
{

    gfg g;
 

    // Function call

    cout << g.sumDigits(687);

    return 0;
}
