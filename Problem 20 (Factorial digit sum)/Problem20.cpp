// ����� ���� ��� ���������� ������� ����������� ���� ��� https://www.geeksforgeeks.org/factorial-large-number/

#include<iostream>
using namespace std;
 
// ������������ ���������� ���� �� ������
#define MAX 500
 
int multiply(int x, int res[], int res_size);
 
int solve(int n) //������� ������
{
    int sum = 0;
    int res[MAX];
 
    // ������������� ����������
    res[0] = 1;
    int res_size = 1;
 
    // ���������� ������� ������������� �������    
    for (int x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);
 
    for (int i = res_size - 1; i >= 0; i--)
        sum += res[i];
    
    return sum;
}
 
// ��� ������� �������� x �� �����, �������������� res []. res_size - ��� ������ res [] ��� ���������� ���� � �����, �������������� res []. 
// ��� ������� ���������� ������� �������� ���������� ��� ���������. 
// ��� ������� ����� ����� �������� res_size � ���������� ����� �������� res_size.
int multiply(int x, int res[], int res_size)
{
    int carry = 0;

    for (int i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;
 
        res[i] = prod % 10; 
 
        carry  = prod/10;   
    }
 
    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}
 

int main()
{
    cout << solve(100) << "\n";
    return 0;
}