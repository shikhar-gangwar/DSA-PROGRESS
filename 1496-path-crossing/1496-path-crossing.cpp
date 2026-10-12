class Solution {
public:
    bool isPathCrossing(string path) {

        vector <int>  cordinate = {0,0};

        int x = 0; int y = 0 ; 

        unordered_set<string> visited;

        visited.insert("0,0");

        for(char c : path){
           if( c == 'N') y++;
           else if ( c == 'S') y--;

           else if ( c== 'E') x++;

           else if ( c == 'W') x--;

           string a = to_string(x)+","+to_string(y);

        if(visited.count(a)){
            return true;
        }

        visited.insert(a);
        }

        
        return false;

        
    }
};