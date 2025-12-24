// Tower of hanoi Solved using Recursion
//Time-Complexity: O(2^n) since it makes 2 recursive calls for each disk.
//Space Complexity: O(n) for recusive stack space.

# include <iostream>
using namespace std;

void towerofhanoi(int n,char source,char helper, char destination){
    if(n==1){
        cout<<"Move disk 1 from rod "<<source<<"to rod"<<destination<<endl;
        return;
    }
    towerofhanoi(n-1,source,destination,helper);
    cout<<"move disk "<<n<< "from rod"<<source <<"to rod"<<destination<<endl;
    towerofhanoi(n-1,helper,source,destination);
}
int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    towerofhanoi(n, 'A', 'B', 'C');
    return 0;
}