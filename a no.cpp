
#include <bits/stdc++.h>
using namespace std;

struct Point
{
    int x, y;
};

// The function returns following values
// 0 --> p, q and r are collinear
// 1 --> Clockwise
// 2 --> Counterclockwise
int orientation(Point p, Point q, Point r)
{
    int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);

    if (val == 0)
        return 0; // collinear
    return (val > 0)? 1: 2;
}


int main()
{
    Point points[] = {{0, 3}, {2, 2}, {1, 1}, {0, 1}, {0, 0}, {0, 0}, {2, 3}, {5, 4}, {3, 3}, {1, 4}, {2, 3}, {2, 3}};
    int n = sizeof(points)/sizeof(points[0]);
    for (int i = 0; i < n-2; i++)
    {
        int ok=  orientation(points[i], points[i+1], points[i+2]);
        if(ok==1)
            cout << "Turn Right" << endl;
        else if(ok==2)
            cout << "Turn Left" << endl;
        else
            cout << "Collinear" << endl;
    }

    return 0;
}


