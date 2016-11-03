/* Because this is 106B, let's write a more
advanced program, one that creates a list,
and populates the list with 100,000 even
integers from 0 to 198,998 */

// Our first C++ program!
// headers:
#include <iostream>
#include "console.h" // Stanford library
#include <vector>

using namespace std;

int main()
{
    vector<int> list;

    for (int i = 0; i < 100000; i++) {
        list.push_back(i*2);
    }

    printf("%d\n", (int) list.size());

    return 0;
}
