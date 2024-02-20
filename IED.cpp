#include <bits/stdc++.h>
#define cin std::cin
#define set std::set
#define cout std::cout
#define endl std::endl
#define string std::string
#define vector std::vector
#define to_string std::to_string
#define tc int t; cin>>t; while(t--)

int main() {
    cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);
    cin.exceptions(std::ios::failbit|std::ios::badbit);
    int a,b,c; cin>>a>>b>>c; cout<<(a>b?a*c:b*c); return 0;
}
