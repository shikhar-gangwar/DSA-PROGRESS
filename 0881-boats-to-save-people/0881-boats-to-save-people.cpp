class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
    int boats = 0;

   sort(people.begin(),people.end());

   int n = people.size();
   int heaviest = 0; int lightest = 0;
   heaviest = n-1; lightest = 0;

   while ( lightest<=heaviest){
    if(( people[heaviest]+people[lightest]) > limit){
        boats++;
        heaviest--;
    }
    else if(  people[heaviest]+people[lightest] < limit){
        lightest++;
        heaviest--;
        boats++;
    }
    else if(  people[heaviest]+people[lightest] == limit){
        boats++;
        lightest++;
        heaviest--;
        
    }
   }
   return boats;
        
    }
};