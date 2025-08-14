class Solution {
  public:
    string encode(vector<string>& s) {
        string res="";
        for(auto x:s){
            res+=to_string(x.size())+"#"+x;
        }
        return res;
    }

    vector<string> decode(string& s) {
        vector<string>res;
        int i=0;
        while(i<s.size()){
            //always reinitialize
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int length=stoi(s.substr(i,j-i));
            //yha se pta chl gya length
            i=j+1;
            //fir aaghse lena start krdo
            j=i+length;
            //j hoga i se lekar length tk
            res.push_back(s.substr(i,length));
            //addkrlo string
            i=j;
            //fir se same process
        }
        return res;
    }
};
