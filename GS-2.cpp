class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        int x1 = L1[0];
        int y1 = L1[1];
        int x2 = R1[0];
        int y2 = R1[1];
        int x3 = L2[0];
        int y3 = L2[1];
        int x4 = R2[0];
        int y4 = R2[1];
        if(!((x1 <= x3 && x2 >= x3) || (x1 <= x4 && x2 >= x4) || (x3 <= x1 && x1 <= x4) || (x3 <= x2 && x2 <= x4)))
        return 0;
        if(!((y1 >= y3 && y2 <= y3) || (y1 >= y4 && y2 <= y4) || (y3 >= y1 && y1 >= y4) || (y3 >= y2 && y2 >= y4)))
        return 0;
        return 1; //Found the overlap Condition
        
        
        
    }
};
