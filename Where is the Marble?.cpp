#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
	int c, N = 0, Q = 0;
	int t = 0;
	while (cin >> N >> Q ) {
            t++;
            if(N==0 && Q==0){
                break;
            }
            int arr[N];
		for(int i=0;i<N;i++) {
			cin >> arr[i];
		}
        sort(arr, arr+N);
        printf("CASE# %d:\n",t);
		while(Q--){
			cin >> c;

			int ptr = (lower_bound(arr, arr+N, c)-arr);
			int ptr1 = (upper_bound(arr, arr+N, c)-arr);
			if (ptr-ptr1 !=0) {
				cout << c << " found at " << ptr+1 << endl;
			}
			else {
				cout << c << " not found" << endl;
			}
		}
	}
	return 0;
}
