class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int count=0,max=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                count=count+1;  
                // if(count>max){
                //     max=count;
                // } 
            }
            if(s[i]==')'){
                count--;
            }
            if(count>max){
                    max=count;
            } 
        }
        return max;
    }
};