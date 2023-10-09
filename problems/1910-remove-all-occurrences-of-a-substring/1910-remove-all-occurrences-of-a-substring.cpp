class Solution {
public:
        void removeOCCRE(string &s, string &part){
            int found = s.find(part);
            if(found != string::npos){
                
                //part string has bee located
                //ab apun usko chhodega nhi
                
                string left_part=s.substr(0,found);
                
                string right_part= s.substr(found + part.size() , s.size());
                
                s= left_part+right_part;
                
                removeOCCRE(s,part);
                
            }
            
            else
            {
                //base case
                // all the occurence of part  has been removed
                return;
            }
        }
    
    
    string removeOccurrences(string s, string part) {
        removeOCCRE(s, part);
        return s;
    }
};