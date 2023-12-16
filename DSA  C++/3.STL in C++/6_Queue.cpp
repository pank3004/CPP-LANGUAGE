#include <iostream>
#include <queue>
using namespace std;

int main()
{

    queue<string> q;
    q.push("pankaj");
    q.push("kumar");
    q.push("kumawat");
    q.push("sikar");

    cout << "first element: " << q.front() << endl;

    q.pop();
    cout << "first element: " << q.front() << endl;
    cout << "size of queue: " << q.size() << endl;
    cout << "is queue empty: " << q.empty() << endl;

    return 0;
}