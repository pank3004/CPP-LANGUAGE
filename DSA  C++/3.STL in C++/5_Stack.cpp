#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<string> s;
    s.push("pankaj");
    s.push("kumar");
    s.push("kumawat");
    s.push("sikar");

    cout << "top element: " << s.top() << endl;

    s.pop();
    cout << "top element: " << s.top() << endl;
    cout << "size of stack: " << s.size() << endl;
    cout << "is stack empty: " << s.empty() << endl;

    return 0;
}