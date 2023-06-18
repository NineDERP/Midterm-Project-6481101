#include <iomanip>

/*inline void display(string *s,int *a, int n){
  int i;
  for(i=0;i<n;i++){
    cout<<setw(5)<<a[i]<<setw(2)<<s[i];
  }
  cout<<endl;

}*/

inline void swap(int &a,int &b){
 int temp;
  temp=a;
  a=b;
  b=temp;
  
}

void bubbleSort(string *s,int *a,int n){

int i,j,temp;
int sorted;
for(i=0;i<n-1;i++){
  sorted=0;
  for(j=0;j<n-1-i;j++){
  if(a[j]<a[j+1]){
    swap(a[j],a[j+1]);
    swap(s[j],s[j+1]);
  sorted=1;
  }
   //display(s,a,n);
  }
  
  /*cout<<endl;
  cout<<"result: "; 
  display(s,a,n);
  cout<<endl;*/
  if(sorted==0) break;
  }
  
}
