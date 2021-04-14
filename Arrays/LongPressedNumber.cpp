s Solution {
public:
    bool isLongPressedName(string name, string typed) {
    int i =0,j=0; int lenname=name.size();
        int lentype=typed.size();
        if(name[i]!=typed[j])
            return false;
        while(i<lenname&&j<lentype){
            if(name[i]==typed[j]){
                i++;
                j++;
            }
            
            else if(j>=1&&typed[j]==typed[j-1]){
                j++;
            }
            else{
                return false;
            }
        }
        
        if(i!=lenname)
            return false;
        
       
        
            while(j<lentype){
            if(typed[j]!=typed[j-1])
                return false;
                j++;
        }
        return true;
    }
};
