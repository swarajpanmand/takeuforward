class Solution {
public:
    string largestOddNumber(string num) {
        string result="";
        // if((int)(num[num.size()-1])%2==1) return num;
        // for(int i=0; i<num.size(); i++){
        //     if((int)(num[i])%2==1){
        //         result+=num[i];
        //     }
        // }
        // return result;
        int index=-1;
        for(int i=num.size()-1; i>=0; i--){
            if((int)(num[i])%2==1){
                //  index= i;
                //  break;
                return num.substr(0, i+1);
             }
        }
        // for(int i=0; i<=index;i++){
        //     result+=num[i];
        // }
        // return result;
        return "";
    }
};