#include <stdio.h>

main()
{
    int cases, cnt = 0;
    scanf("%d", &cases);
    while (cases--)
    {
        int ax, ay, bx, by, cx, cy;
        scanf("%d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy);
        int area;
        int rx, ry;
        rx = ax + cx - bx;
        ry = ay + cy - by;

        area = abs(ax * (by - cy) + bx * (cy - ay) + cx * (ay - by));

        printf("Case %d: %d %d %d\n", ++cnt, rx, ry, area);
    }
}
