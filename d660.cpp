#include <iostream>
using namespace std;
int main() {
    int number,times,tmp,high=0,low=0;
    cin>>times;
    int wall[50];
    for(int i=0;i<times;i++){
        cin>>number;
        for(int g=0;g<number;g++){
            cin>>tmp;
            wall[g]=tmp;
        }
        for(int h=0;h<(number-1);h++){
            if(wall[h+1]>wall[h]){
                high++;
            }
            else if(wall[h+1]<wall[h]){
                low++;
            }
            else if(number==1){
                high=0;
                low=0;
            }
        }
        cout<<"Case "<<i+1<<": "<<high<<" "<<low<<endl;
        high=0;
        low=0;
    }    
    return 0;
}
