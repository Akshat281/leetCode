class Solution {
public:
    string getPermutation(int n, int k) {
        string s="";
        int temp=1;
        double j=1.0;
        vector <int> v;
        for(int i=1;i<n;i++){
            temp*=i;
            v.push_back(i);
        }
        v.push_back(n);
        for( auto &i: v){
            cout<<i<<' ';
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            s = s + to_string(v[(int (ceil(k*j/temp)))-1]);
            v.erase(v.begin()+(int (ceil(k*j/temp)))-1);
            k=k%temp;
            if(k==0){
                k=temp;
            }
            temp=temp/max(n-i-1,1);
        }
        return s;
    }
};