/*                 _ooOoo_
                  o8888888o
                  88" . "88
                  (| -_- |)
                  O\  =  /O
               ____/`---'\____
             .'  \\|     |//  `.
            /  \\|||  :  |||//  \
           /  _||||| -:- |||||-  \
           |   | \\\  -  /// |   |
           | \_|  ''\---/''  |   |
           \  .-\__  `-`  ___/-. /
         ___`. .'  /--.--\  `. . __
      ."" '<  `.___\_<|>_/___.'  >'"".
     | | :  `- \`.;`\ _ /`;.`/ - ` : | |
     \  \ `-.   \_ __\ /__ _/   .-` /  /
======`-.____`-.___\_____/___.-`____.-'======
                   `=---='
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
        //     JATIN SALVE       //
*/
 



#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize("Ofast")//Comment optimisations for interactive problems (use endl)
#pragma GCC target("avx,avx2,fma")     
#include <bits/stdc++.h>

using namespace std;
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
 
template<typename T1,typename T2>istream& operator>>(istream& in,pair<T1,T2> &a){in>>a.fr>>a.sc;return in;}
template<typename T1,typename T2>ostream& operator<<(ostream& out,pair<T1,T2> a){out<<a.fr<<" "<<a.sc;return out;}
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}
 
const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
const int MOD = 1e9 + 7;
const long long MOD2 = static_cast<long long>(MOD) * MOD;

void solve(){
    // Code here
} 


signed main(){
    #ifndef ONLINE_JUDGE
      freopen("input1.txt", "r", stdin);
      freopen("output1.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}

/*---------------------------------------------------Vector STL/Function----------------------------------------------------------
 * sort(v.begin().v.end())
 * reverse(v.begin(),v.end())
 * (bool) binary_search(v.begin(),v.end(),key)
 * (iterator) lower_bound(v.begin(),v.end(),key);
 * (iterator) upper_bound(v.bein(),v.end(),key);
 * v.erase(v.begin()+i)
 * v.erase(unique(v.begin(),v.end()),v.end())
 * (bool)next_premutation(v.begin(),v.end())
 * (bool)prev_premutation(v.begin(),v.end())
 * 
 * v.push_back(data),v.pop_back(data),(data) v.front() ,(data) v.back() ,(data) v[index]
 * (lli) max_e(v) ,(lli)min_e(v) ,lli fmax_i(v) ,lli lmax_i(v) ,lli fmin_i(v) ,lli lmin_i(v)
 */ 
 
 /*--------------------------------------------------Vector of pairs----------------------------------------------------------------
  * vector<pair<key_type,data type>> vp
  * vp.push_back(make_pair(key,data))
  * 
  * sort by key/first element (then data/second)
  * sort(vp.begin(),vp.end()) 
  * 
  * sort by sec element(only by sec)
  * bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) 
  * { 
  *       return (a.second < b.second); 
  * }
  * sort(vp.begin(),vp.end(),sortbysec) 
  * 
  * (data) vp[i].first ,(data) vp[i].second ,
  */
  
  
 /* -------------------------------------------------STACK------------------------------------------ 
  * stack<data_type>s
  * push()              :s.push(data)           :O(1)
  * pop()               :s.pop(data)            :O(1)
  * top()               :s.top()                :O(1)
  * empty()             :s.empty ()             :O(1)
  * size()              :s.size()               :O(1)
  */
  
 /* -------------------------------------------------QUEUE------------------------------------------          
  * queue<data_type>q    
  * push()               :q.push(data)          :O(1)
  * pop()                :q.pop()               :O(1)
  * front()              :q.front()             :O(1)
  * back()               :q.back()              :O(1)
  * empty()              :q.empty()             :O(1)
  * size()               :q.size()              :O(1)
  */
  
 /*------------------------------------------ priority_queue(default MAX HEAP)-------------------------------
  * priority_queue(data_type>pq
  * push()               :pq.push(data)         :O(log(n))
  * pop()                :pq.pop()              :O(long(n))
  * top()                :pq.top()              :O(1)
  * size()               :pq.size()             :O(1)
  */
 
 /*---------------------------------------------SET:Element in sorted order----------------------------------
 * declaration   : set<lli>s
 * insertion     : s.insert(data)                                    :O(log(n))             
 * size          : s.size()                                          :O(1) 
 * find          :auto it=s.find(data) //if it!=s.end -> data found  :O(log(n))
 * loop          :for(auto it=s.begin();it!=s.end();it++)
 */
 
 
 /* Unorderd SET  :Elements in unsorted order
 * declaration   :unordered_set<lli>s
 * insertion     :s.insert(data)                                     :O(1)
 * size          :s.size()                                           :O(1)
 * find          :auto it=s.find(data)//if it!=s.end ->data found    :O(1)
 * loop          :for(auto it=s.begin();it!=s.end();it++)
 */
 
/*
 * MAP           :Elemnet r SORTED,unlike set we insert (key and data)
 * declaration   :map<key_type,data_type>m
 * insert        :m.insert(make_pair(key,data));                     :O(log(n))
 * find          :auto it=m.find(key) //if(it!=m.end)it->first=key   :O(log(n))
 * []            :m[key]++      //data=data+1 ,at that key           :O(log(n))
 * size          :m.size()                                           :O(1)
 * loop          :for(auto it=m.begin();it!=s.end();it++)
 */
 
/* Unordered MAP :Element r UNSORTED,unlike unordered set we insert (key and data)
 * declaration   :unorderd_map<key_type,data_type> m
 * insert        :insert(make_pair(key,data))                        :O(1) 
 * find          :auto it=m.find(key) //if (it!=m.end)it->first=key  :O(1)
 * []            :m[key]++      //data=data+1 ,at that key           :O(1)
 * size          :m.size()                                           :O(1)
 * loop          :for(auto it=s.begin();it!=s.end();it++)
 */
 
 /* muti_set             :similar to set but have duplicate element
  * multi_set<data_type>ms
  * insert()               :ms.insert(data)         :O(log(n))
  * find()                 :auto it=ms.find(data)   :O(long(n))
  * size()                 :ms.size()               :O(1)
  */
  
  /* multimap              :similar to MAP but can have duplicate keys  :search O(logn):insert O(logn):delete O(logn)  
   * mulimap<key_type,data_type>mm
   * mm.insert(pair<key_type,data_type>(key,data))        :O(long(n))
   * multimap<key_type,data_type> mm2(mm.begin(),mm.end())  
   * find()                :it=mm.find(key)  //first it   :O(long(n))
   * mm.lower_bound(key)->second //data      mm.lower_bound(key)=it  1st elemet having the key  or mm.end()
   * mm.upper_bound(key)->second //data      mm.upper_bound(key)=it  1st element just after the key or mm.end()
   * mm.erase(key)         :erase all element of the key value
   * mm.erase(mm.begin(),mm.find(key))    :remove all having(key) less than the given key
   * mm.size()                                             :O(1)
   * for(auto it=mm.begin();it!=mm.end;it++)     :traversal
   */
