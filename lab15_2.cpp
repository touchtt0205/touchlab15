#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void showMatrix(const bool A[][N]){
for(int i = 0; i < N ; i++){
    for(int j = 0; j < N ; j++){
        if(A[i][j] == 0) cout << "0" << " ";
        else cout << "1" << " ";
    }
    cout << endl;
}
}

void inputMatrix(double B[][N]){
for(int i = 0; i < N ; i++){
    cout << "Row " << i+1 << ": ";
    for(int j = 0; j < N ; j++){
        cin >> B[i][j];
        
    }
}
}


void findLocalMax(const double G[][N], bool F[][N]){
for(int i = 0; i < N ; i++){
    for(int j = 0; j < N ; j++){
        F[i][j] = 0;
    }
}
for(int i = 1; i < N-1 ; i++){
    for(int j = 1; j < N-1 ; j++){
    if(G[i][j] >= G[i-1][j] and G[i][j] >= G[i][j-1] and G[i][j] >= G[i+1][j] and G[i][j] >= G[i][j+1]){
    F[i][j] = 1;
    }
    else F[i][j] = 0;
}
}

}