/*
The Utopian tree goes through 2 cycles of growth every year. The first growth cycle of the tree is during the monsoon season when it doubles in height. The second growth cycle is during the summer when it increases in height by 1 meter. 
If a new Utopian tree sapling of height 1 meter is planted just before the onset of the monsoon season, can you find the height of the tree after N cycles
*/

#include <iostream>
using namespace std;

int height(int n) 
{   
    int h=1;
    
    for (int i= n; i>=0; i= i-2)
        {
        if (i == 0)
            return h;
        else if (i == 1)
            return 2*h;
        else
            h = 2*h + 1;
    }

}
    int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}