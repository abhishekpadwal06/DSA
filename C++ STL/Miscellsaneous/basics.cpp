// Permutation of String
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num = "123";
    do {
        cout<<num<<endl;
    } while (next_permutation(num.begin(), num.end()));
    return 0;
}



// Maximum element
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = { 16, 14, 11, 55, 44, 81, 77};
    int largest = *max_element(arr,arr+7);
    cout<<largest;
    return 0;
}



// Built-in Popcount
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c = 7;
    int b = __builtin_popcount(c);
    cout<<b;
    return 0;
}