class Solution {
public:

    int eq(int x, int y, int r, int h, int k) {
        return (x-h)*(x-h) + (y-k)*(y-k) - r*r;
    }

    bool checkOverlap(int radius, int xCenter, int yCenter,
                      int x1, int y1, int x2, int y2) {

        if(xCenter >= x1 && xCenter <= x2 &&
           yCenter >= y1 && yCenter <= y2) {
            return true;
        }

        if(eq(x1,y1,radius,xCenter,yCenter) <= 0)
            return true;

        if(eq(x1,y2,radius,xCenter,yCenter) <= 0)
            return true;

        if(eq(x2,y1,radius,xCenter,yCenter) <= 0)
            return true;

        if(eq(x2,y2,radius,xCenter,yCenter) <= 0)
            return true;

        if(xCenter >= x1 && xCenter <= x2) {

            if(eq(xCenter,y1,radius,xCenter,yCenter) <= 0)
                return true;

            if(eq(xCenter,y2,radius,xCenter,yCenter) <= 0)
                return true;
        }

        if(yCenter >= y1 && yCenter <= y2) {

            if(eq(x1,yCenter,radius,xCenter,yCenter) <= 0)
                return true;

            if(eq(x2,yCenter,radius,xCenter,yCenter) <= 0)
                return true;
        }

        return false;
    }
};