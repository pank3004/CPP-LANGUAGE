// brute force appraoch

#include<iostream>
using namespace std;
int main(){
    int num=127;
    int n=1;
    while(n*n<=num){
        n++;
    }
    cout<<"ans="<<(n-1)<<endl;
}



// #include <iostream>
// using namespace std;

// long long int sqrtInteger(int n)
// {

//     int s = 0;
//     int e = n;

//     long long int ans = -1; 
//     while (s <= e)
//     {
//         long long int mid = s + (e - s) / 2;
//         long long int midSquare = mid * mid;   //-2^63 to 2^63 - 1(range of long long int)

//         if (midSquare == n)
//             return mid;

//         if (midSquare < n)
//         {
//             ans = mid;
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//     }
//     return ans;
// }

// double morePrecision(int n, int precision, int tempSol)
// {

//     double factor = 1;
//     double ans = tempSol;

//     for (int i = 0; i < precision; i++)
//     {
//         factor = factor / 10;

//         for (double j = ans; j * j < n; j = j + factor)
//         {
//             ans = j;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     int n;
//     cout << " Enter the number " << endl;
//     cin >> n;

//     int tempSol = sqrtInteger(n);
//     cout << " Answer is " << morePrecision(n, 3, tempSol) << endl;

//     return 0;
// }