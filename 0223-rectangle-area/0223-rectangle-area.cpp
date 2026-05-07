class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2,
                    int bx1, int by1, int bx2, int by2) {
        
        // Area of both rectangles
        int areaA = (ax2 - ax1) * (ay2 - ay1);
        int areaB = (bx2 - bx1) * (by2 - by1);
        
        // Calculate overlap width and height
        int overlapWidth = max(0, min(ax2, bx2) - max(ax1, bx1));
        int overlapHeight = max(0, min(ay2, by2) - max(ay1, by1));
        
        // Overlapping area
        int overlapArea = overlapWidth * overlapHeight;
        
        // Total area
        return areaA + areaB - overlapArea;
    }
};