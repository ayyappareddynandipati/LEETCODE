class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area1 = (ax2 - ax1) * (ay2 - ay1);
        int area2 = (bx2 - bx1) * (by2 - by1);

        int overlap_width =  max(0,  min(ax2, bx2) -  max(ax1, bx1));
        int overlap_height =  max(0,  min(ay2, by2) -  max(ay1, by1));
        int overlap_area = overlap_width * overlap_height;

        int total_area = area1 + area2 - overlap_area;
        return total_area;
    }
};