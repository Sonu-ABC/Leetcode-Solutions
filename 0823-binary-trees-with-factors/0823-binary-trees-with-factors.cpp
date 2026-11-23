class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        long long MOD=1e9+7;
        set<int>st;
        map<int,long long>res;
        res[arr[0]]=1;
        long long cnt=arr.size();
        int n=arr.size();
        st.insert(arr[0]);
        for(int i=1;i<n;i++){
           long long intCnt=cnt;
           for(int j=0;j<i;j++){
              long long rmd=arr[i]% arr[j];
              if(rmd==0){
                long long fact2=arr[i]/arr[j];
                if(st.find(fact2)!=st.end()){
                    cnt+=res[fact2]*res[arr[j]];
                }
              }
           }
           long long cnti=cnt-intCnt;
           res[arr[i]]=1+cnti;
           st.insert(arr[i]);
        }
        return cnt%(MOD);
    }
};