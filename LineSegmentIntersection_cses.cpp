#include <iostream>
#define int long long
using namespace std;

struct Point
{
    int x;
    int y;
};


bool onSegment(Point p, Point q, Point r)
{
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
        q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
       return true;

    return false;
}


int orientation(Point p, Point q, Point r)
{

    int val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);

    if (val == 0) return 0;  // collinear

    return (val > 0)? 1: 2; // clock or counterclock wise
}

bool doIntersect(Point p1, Point q1, Point p2, Point q2)
{

    int o1 = orientation(p1, q1, p2);
    int o2 = orientation(p1, q1, q2);
    int o3 = orientation(p2, q2, p1);
    int o4 = orientation(p2, q2, q1);


    if (o1 != o2 && o3 != o4)
        return true;

    if (o1 == 0 && onSegment(p1, p2, q1)) return true;


    if (o2 == 0 && onSegment(p1, q2, q1)) return true;


    if (o3 == 0 && onSegment(p2, p1, q2)) return true;


    if (o4 == 0 && onSegment(p2, q1, q2)) return true;

    return false;
}


signed main()
{

    int t;cin>>t;
    while(t--){
        int x1,y1,x2,y2,x3,y3,x4,y4;cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        struct Point p1,q1;
        struct Point p2,q2;
        p1 = {x1,y1};q1={x2,y2};p2={x3,y3};q2={x4,y4};
            doIntersect(p1, q1, p2, q2)? cout << "YES\n": cout << "NO\n";



    }
}
