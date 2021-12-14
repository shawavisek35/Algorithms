class Solution {
public:
    bool reachingPoints(int sx, int sy, int tx, int ty) {
//         if(sx < tx || sy < ty) return false;
        
//         if(sx == tx && sy == ty) return true;
        
//         return reachingPoints(sx, sy, tx, abs(tx-ty)) || reachingPoints(sx, sy, abs(tx-ty), ty);
        
        while(tx > sx && ty > sy) {
            if(tx>ty){
                tx %= ty;
            }
            else {
                ty %= tx;
            }
        }
        
        return (sx==tx && sy<=ty && (ty-sy)%tx == 0) || (sy==ty && sx<tx && (tx-sx)%sy == 0);
    }
};