#include <iostream>
using namespace std;
void input(int a[3][4],int b[3][4],int i,int j,int r1, int c1, int r2, int c2)
{
	
    cout << endl << "Enter elements of matrix 1:" << endl;
    for(i = 0; i < r1; ++i)
    for(j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

    // Storing elements of second matrix.
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
	
}
int main()
{
		int i,j,k,r1,c1,r2,c2;
	
	int a[i][j];
	int b[i][j];
	input( a[3][4],b[3][4], i, j, r1,  c1,  r2,  c2);

}