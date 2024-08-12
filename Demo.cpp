
// Pass by Value                --> This method copies the original values, makes changes to it and then returns it
// #include <bits/stdc++.h>
// using namespace std;
// void func(int num)
// {
//         cout<<num<<endl;
//         num += 5;
//         cout<<num<<endl;
//         num += 5;
//         cout<<num<<endl;
// }
// int main ()
// {
//         int num = 10;
//         func(num);
//         cout<<num<<endl;
//         return 0;
// }

// Pass by reference            --> It takes address of OG value, changes the value on that address and then returns it
#include <bits/stdc++.h>
using namespace std;
int func(int &num)
{
        num = 20;
        return num;
}
int main ()
{
        int num = 10;
        func(num);
        cout<<num<<endl;
        return 0;
}