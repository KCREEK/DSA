/*There are flight paths between cities. If there is a flight between city A and city B then there is an 
  edge between the cities. The cost of the edge can be the time that flight takes to reach city B from
   A, or the amount of fuel used for the journey. Represent this as a graph. The node can be 
   represented by airport name or name of the city.
*/

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

//initializing an adjacency matrix
int adj_mat[50][50]={0,0};

int main(){
  cout<<"Enter no. of cities: ";
  int n;
  cin>>n;
  string cities[n];

//Taking input for the number of cities from n
  for(int i=0;i<n;i++){
    cout<<"Enter city"<<i+1<<"(Airport code): ";
    cin>>cities[i];
  }

//Displaying the cities that we've taken input of
cout<<"YOUR CITIES ARE"<<endl;
for(int i=0;i<n;i++){
  cout<<"\nCity"<<i+1<<": "<<cities[i];
}

for(int i=0;i<n;i++){
  for(int j=i+1;j<n;j++){
    cout<<"\nEnter distance between "<<cities[i]<<" and "<<cities[j]<<"; ";
    cin>>adj_mat[i][j];
    adj_mat[j][i]=adj_mat[i][j];
  }
}

for(int i=0;i<n;i++){
  cout<<"\t"<<"cities[i]"<<"\t";
}

//displaying the matrix of the distance traveled by the flights here
for(int i=0;i<n;i++){
  cout<<"\n"<<cities[i];
  for(int j=0;j<n;j++){
    cout<<"\t"<<adj_mat[i][j]<<"\t";
  }
}

time_t begin,end;
double time_req;
time (& begin);
time (& end);
time_req=difftime(end,begin);
cout<<"Time required is: "<<time_req;
return 0;
}




























