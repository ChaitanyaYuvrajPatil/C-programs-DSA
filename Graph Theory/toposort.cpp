#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
vector<int> adj[100005];
vector<int> vis[100005]={0};

void toposort(int node,stack<int> &st){

    vis[node] = 1;
    for(auto it : adj[node]){
        if(!vis[it]){
            toposort(it,st);
        }
    }
    st.push(node);
}

signed main()
{
    stack<int> st;

    for(int i=1;i<=n;i++){
        if(vis[i] ==false){
            toposort(i,st);
        }
    }
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}