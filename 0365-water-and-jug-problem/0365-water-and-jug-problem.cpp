class Solution {
public:
    bool canMeasureWater(int x, int y, int target) {
        set<pair<int,int>>st;
        queue<pair<int,int>>q;
        q.push({0,0});
        st.insert({0,0});
        while(!q.empty()){
            int j1=q.front().first;
            int j2=q.front().second;
            if(j1+j2==target)return true;
            q.pop();
            pair<int,int>p1={x,j2};
            pair<int,int>p2={j1,y};
            pair<int,int>p3={0,j2};
            pair<int,int>p4={j1,0};
            pair<int,int>p5={min(j1+j2,x),j2-(min(j1+j2,x)-j1)};
            pair<int,int>p6={j1-(min(j2+j1,y)-j2),min(j2+j1,y)};
            if(st.find(p1)==st.end()){
                q.push(p1);
                st.insert(p1);
            }
            if(st.find(p2)==st.end()){
                q.push(p2);
                st.insert(p2);
            }
            if(st.find(p3)==st.end()){
                q.push(p3);
                st.insert(p3);
            }
            if(st.find(p4)==st.end()){
                q.push(p4);
                st.insert(p4);
            }
            if(st.find(p5)==st.end()){
                q.push(p5);
                st.insert(p5);
            }
            if(st.find(p6)==st.end()){
                q.push(p6);
                st.insert(p6);
            }
        }
        return false;
    }
};